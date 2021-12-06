<?php
session_start();
if (!isset($_SESSION['login'])) {
    header("Location: login.php");
    die();
}
include "class.php";
if (isset($_POST["email"])) {
    $user = new User();
    $email = (string)$_POST['email'];
    if ($user->waf($email)) {
        $user->add_email($email);
    }
    echo "<script>window.location.href='index.php';</script>";
}