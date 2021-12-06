<?php
$hostip = "172.17.0.1";//docker0 ip
$port = 4000;
$username = "user";
$password = "5418f0b3595be1e9416e996558fb45ac";
$database = "babysql";


$db = new mysqli($hostip . ":" . $port, $username, $password, $database);
if (mysqli_connect_errno()) { #检查连接
    printf("Connect failed: %s\n", mysqli_connect_error());
    exit();
}
if (isset($_POST['username']) && isset($_POST['password'])) {
    $username = $_POST['username'];
    $password = $_POST['password'];
    $query = "SELECT * FROM users WHERE username='$username' and password='$password';";
    $result = $db->query($query);
    $row = $result->fetch_all();
    $db->close();
    if ($row) {
        echo $row[0][1] . "<br>" . $row[0][2] . "<br>";
    } else {
        echo "????<br>";
    }
}
?>

<h1>Hack admin password & Get flag</h1>
<form enctype="multipart/form-data" method="post">
    <label>username</label><input type="text" name="username"/>
    <label>password</label><input type="password" name="password">
    <input class="button" type="submit" name="submit" value="登录"/>
</form>