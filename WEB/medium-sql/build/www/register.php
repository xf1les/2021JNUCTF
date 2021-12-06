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
    <title>注册</title>

    <head>
        <link href="//cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css" rel="stylesheet">
        <link href="css/login_and_reg.css" rel="stylesheet">
        <style>
            .input {
                margin-top: 2px;
            }
        </style>
        <link href="css/panel.css" rel="stylesheet">
    </head>

    <body class="text-center">
    <form class="input-form" action="register.php" method="POST">
        <h1 class="h3 font-weight-normal">注册</h1>
        <div class="input">
            <input type="text" name="username" class="form-control" placeholder="请输入用户名" required autofocus>
        </div>
        <div class="input">
            <input type="text" name="email" class="form-control" placeholder="请输入邮箱" required>
        </div>
        <div class="input">
            <input type="password" name="password" class="form-control" placeholder="请输入密码" required>
        </div>
        <div class="input">
            <input type="password" name="confirm" class="form-control" placeholder="请再次确认密码" required>
        </div>
        <div class="input">
            <button class="btn btn-lg btn-primary btn-block" type="submit">提交</button>
        </div>
        <p class="mt-5 text-muted">已有账号? <a href="login.php">立即登录</a></p>
    </form>
    <div class="top" id="prompt_bar"></div><!--提示栏-->
    </body>

    <script src="//cdn.jsdelivr.net/npm/jquery@3.4.0/dist/jquery.min.js"></script>
    <script src="//cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/js/bootstrap.bundle.min.js"></script>
    <script src="js/prompt.js"></script>
    </html>


<?php
include "class.php";
if (isset($_POST["username"]) && isset($_POST["email"]) && isset($_POST["password"]) && isset($_POST["confirm"])) {
    $user = new User();
    $username = (string)$_POST["username"];
    $email = (string)$_POST["email"];
    $password = (string)$_POST["password"];
    $confirm = (string)$_POST["confirm"];

    if ($user->waf($username) && $user->waf($email) && $user->waf($password)) {
        if (strlen($username) < 200 && strlen($username) > 5 && strlen($password) > 5) {
            if ($password === $confirm) {
                if ($user->add_user($username, $email, $password)) {
                    echo("<script>window.location.href='login.php?register';</script>");#注册成功,重定向到登录页面
                } else {
                    echo "<script>prompt_func('此用户名已被使用','warning');</script>";
                }
            } else {
                echo "<script>prompt_func('两次输入的密码不一致!!!','warning');</script>";
            }
        } else {
            echo "<script>prompt_func('用户名长度必须大于5小于200,密码长度必须大于5','warning');</script>";
        }
    } else {
        echo "<script>prompt_func('存在敏感字符','warning');</script>";
    }
}
?>