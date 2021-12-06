<?php
session_start();
if (!isset($_SESSION['login'])) {
    header("Location: login.php");
    die();
}

if (!isset($_POST['filename'])) {
    header("Location: index.php");
    die();
}
$filename = (string)$_POST['filename'];
if(preg_match("/ph/i",$filename)){//防止跨路径读取php文件
    header("Location: index.php");
    die();
}

include "class.php";

ini_set("open_basedir", getcwd());//防止跨路径读取
$file_location = 'uploads/';
$file = new File($file_location . $filename);

if ($file->check_file_exist()) {
    Header("Content-type: application/octet-stream");
    Header("Content-Disposition: attachment; filename=" . basename($filename));
    echo $file->get_file_contents();
}