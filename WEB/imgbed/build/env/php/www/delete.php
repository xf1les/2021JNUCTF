<?php
session_start();
if (!isset($_SESSION['login'])) {
    header("Location: login.php");
    die();
}

if (!isset($_POST['filename'])) {
    die();
}

include "class.php";

ini_set("open_basedir", getcwd());
$filename = (string)$_POST['filename'];
$file = new File('uploads/' . $filename);
if ($file->check_file_exist()) {
    $file->delete_file();
    $image = new Image();
    $image->delete($filename);#在数据库中删除文件名
    Header("Content-type: application/json");
    $response = array("success" => true, "error" => "");
} else {
    Header("Content-type: application/json");
    $response = array("success" => false, "error" => "文件不存在");
}
echo json_encode($response);

