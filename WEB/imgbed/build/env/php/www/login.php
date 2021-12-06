<?php
session_start();
if (isset($_SESSION['login'])) {
    header("Location: index.php");
    die();
}
?>

<!DOCTYPE html>
<html>
<meta charset="utf-8">
<title>登录</title>

<head>
    <link href="//cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css" rel="stylesheet">
    <link href="css/login_and_reg.css" rel="stylesheet">
    <link href="css/panel.css" rel="stylesheet">
    <style>
        .input {
            margin-top: 2px;
        }
    </style>
</head>

<body class="text-center">
<form class="input-form" action="login.php" method="POST">
    <h1 class="h3 font-weight-normal">登录</h1>
    <div class="input">
        <input type="text" name="username" class="form-control" placeholder="用户名" required autofocus>
    </div>
    <div>
        <input type="password" name="password" class="form-control" placeholder="密码" required>
    </div>
    <div class="input row">
        <div class="col">
            <input type="text" name="authcode" class="form-control" placeholder="请输入验证码" required>
        </div>
        <div class="col">
            <a href="javascript:void(0)" onClick="document.getElementById('captcha_img').src='captcha.php'"><img id="captcha_img" src="captcha.php"/></a>
        </div>
    </div>
    <div class="input">
        <button class="btn btn-lg btn-primary btn-block" type="submit">提交</button>
    </div>
    <p class="mt-5 text-muted">还没有账号? <a href="register.php">立即注册</a><br>忘记密码? <a href="forget.php">立即重置</a></p>
</form>
<div class="top" id="prompt_bar"></div><!--浮动提示栏-->
</body>

<script src="//cdn.jsdelivr.net/npm/jquery@3.4.0/dist/jquery.min.js"></script>
<script src="//cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/js/bootstrap.bundle.min.js"></script>
<script src="js/prompt.js"></script>
</html>


<?php
include "class.php";

if (isset($_GET['register'])) {
    echo "<script>prompt_func('注册成功', 'info');</script>";
}
if (isset($_GET['reset'])) {
    echo "<script>prompt_func('重置成功', 'info');</script>";
}
if (isset($_POST["username"]) && isset($_POST["password"]) && isset($_POST["authcode"])) {
    if (strtolower($_POST["authcode"]) === strtolower($_SESSION["authcode"])) {
        $user = new User();
        $username = (string)$_POST["username"];
        $password = (string)$_POST["password"];
        if ($user->verify_user($username, $password)) {
            $_SESSION['login'] = true;
            $_SESSION['username'] = htmlentities($username);
            echo("<script>window.location.href='index.php';</script>");
            die();
        }
        echo "<script>prompt_func('账号或密码错误', 'warning');</script>";
    } else {
        echo "<script>prompt_func('验证码错误', 'warning');</script>";
    }
}
?>
