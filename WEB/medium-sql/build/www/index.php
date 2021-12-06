<?php
session_start();
if (!isset($_SESSION['login'])) {
    header("Location: login.php");
    die();
}
?>
<!DOCTYPE html>
<html>
<meta charset="utf-8">
<title>Xp0int</title>

<head>
    <link href="//cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css" rel="stylesheet">
    <link href="css/panel.css" rel="stylesheet">
    <script src="//cdn.jsdelivr.net/npm/jquery@3.4.0/dist/jquery.min.js"></script>
    <script src="//cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/js/bootstrap.bundle.min.js"></script>
    <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.css'>
    <script src="js/prompt.js"></script>
    <style>
        .navbar {
            background-color: #eaecf0;
        }

        .navbar .navbar-nav .nav-link {
            color: #6c767d;
        }

        .navbar .navbar-nav .nav-link:hover {
            color: #227bff;
        }

        .navbar .navbar-nav .active > .nav-link {
            color: #227bff;
        }
    </style>
</head>

<body>
<nav class="navbar navbar-expand-lg">
    <div class="container">
        <a class="navbar-brand" href="index.php">Xp0int</a>
        <div class="collapse navbar-collapse">
            <ul class="navbar-nav ml-auto">
                <li class="nav-item pl-1">
                    <a class="nav-link" href="logout.php"><i class="fa fa-sign-out fa-fw mr-1"></i>注销</a>
                </li>
            </ul>
        </div>
    </div>
</nav>
<br>
<div class="container">
    <form method="POST" action="/add_email.php" enctype="multipart/form-data">
        <input type="text" name="email" class="form-control" placeholder="请输入新的邮箱" required autofocus>
        <br>
        <input type="submit" value="AddEmail" class="btn btn-primary btn-block"/>
    </form>
</div>
<div class="top" id="prompt_bar"></div><!--浮动提示栏-->
<br>
</body>
</html>

<?php
include "list_email.php";