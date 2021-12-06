<?php
session_start();
if (!isset($_SESSION['login'])) {
    header("Location: login.php");
    die();
}
include "class.php";
$user = new User();
$user->list_email();