<?php
error_reporting(0);

$hostip = "172.17.0.1";//docker0 ip
$sqlport = 4321;
$username = "user";
$password = "be3d6cc797f9f37fecdb165e28fc13c7";
$database = "medium";

class User
{
    public mysqli $sql;

    public function __construct()
    {
        global $hostip;
        global $sqlport;
        global $username;
        global $password;
        global $database;
        $this->sql = new mysqli($hostip . ":" . $sqlport, $username, $password, $database);
        if (mysqli_connect_errno()) {#检查连接
            printf("Connect failed: %s\n", mysqli_connect_error());
            exit();
        }
    }

    public function add_user($username, $email, $password): bool
    {
        $username = mysqli_real_escape_string($this->sql, $username);
        $email = mysqli_real_escape_string($this->sql, $email);
        $password = sha1($password . "!@#$%^&*()");#混淆防止直接猜测
        if ($this->check_user_exist($username)) {
            return false;
        }
        $sql_query = "INSERT INTO `users` (`id`, `username`, `password`) VALUES (NULL,'$username','$password')";
        $this->sql->query($sql_query);
        $sql_query = "INSERT INTO `email` (`id`, `username`, `email`, `time`) VALUES (NULL,'$username','$email',NOW())";
        $this->sql->query($sql_query);
        return true;
    }

    public function check_user_exist($username): bool
    {
        $sql_query = "SELECT username FROM users WHERE username = '$username'";
        $row = mysqli_query($this->sql, $sql_query);
        if ($row->num_rows == 0) {
            return false;
        }
        return true;
    }

    public function verify_user($username, $password): bool
    {
        $username = mysqli_real_escape_string($this->sql, $username);
        $password = sha1($password . "!@#$%^&*()");#混淆防止直接猜测
        $sql_query = "SELECT id,password FROM users where username = '$username'";
        $row = mysqli_query($this->sql, $sql_query);
        $result = $row->fetch_all(MYSQLI_ASSOC);
        if (isset($result) && $result[0]['password'] === $password) {
            $_SESSION['uid'] = $result[0]['id'];
            return true;
        }
        return false;
    }

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

    public function __destruct()
    {
        $this->sql->close();
    }
}