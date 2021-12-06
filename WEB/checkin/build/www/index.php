<?php
error_reporting(0);
include "flag.php";
highlight_file(__FILE__);
$a = array("C", "T", "F");
$num1 = 999999999;
if (!($a == $_POST['b'] and $a !== $_POST['b'])) {
    die("maybe you can learn something from https://www.php.net/manual/zh/language.operators.array.php");
}
if (!(!empty($_GET['num2']) && $_GET['num2'] > $num1 && strlen($_GET['num2']) < 4)) {
    die("Scientific notation!!!");
}
if (!(md5($_POST['md5a']) === md5($_POST['md5b']) && !is_array($_POST['md5a']) && !is_array($_POST['md5b']) && !empty($_POST['md5a']) && !empty($_POST['md5b']))) {
    die("maybe you can learn something from https://github.com/AMDyesIntelno/huaQ/tree/master/PHP%20trick/MD5%E5%87%BD%E6%95%B0%E7%BC%BA%E9%99%B7");
}
echo $flag;
