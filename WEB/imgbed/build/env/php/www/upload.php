<?php
session_start();
if (!isset($_SESSION['login'])) {
    header("Location: index.php");
    die();
}

include "class.php";

if (isset($_GET['sent'])) {
    $file_array = $_POST['file'];
    $file_location = 'uploads/';
    $file_num = sizeof($file_array);
    if (!$file_num) {
        header("Location: index.php");
        die();
    }
    for ($i = 0; $i < $file_num; $i++) {
        $this_file_json_object = $file_array[$i];
        $this_file = json_decode($this_file_json_object, true);
        $this_file_name = $this_file["name"];
        $this_file_type = $this_file["type"];
        $this_file_data = $this_file["data"];
        $this_file_extension = substr($this_file_name, strrpos($this_file_name, '.') + 1);
        if ((($this_file_extension == "jpg" || $this_file_extension == "jpeg") && ($this_file_type == "image/jpeg")) || (($this_file_extension == "png") && ($this_file_type == "image/png")) || (($this_file_extension == "gif") && ($this_file_type == "image/gif"))) {
            $this_file_name = sha1(date('YmdGHs') . substr(microtime(true), 11, 4) . $_SESSION['username'] . $this_file_name) . '.' . $this_file_extension;
            $this_file_save_path = $file_location . $this_file_name;
            $this_file_decode_data = base64_decode($this_file_data);
            file_put_contents($this_file_save_path, $this_file_decode_data);
            if ($this_file_type == "image/jpeg"){
                $im = @imagecreatefromjpeg($this_file_save_path);
                @unlink($this_file_save_path);
                imagejpeg($im,$this_file_save_path);
            }
            else if($this_file_type == "image/png"){
                $im = @imagecreatefrompng($this_file_save_path);
                @unlink($this_file_save_path);
                imagepng($im,$this_file_save_path);
            }
            else if($this_file_type == "image/gif"){
                $im = @imagecreatefromgif($this_file_save_path);
                @unlink($this_file_save_path);
                imagegif($im,$this_file_save_path);
            }
            $image = new Image();
            $image->insert($this_file_name);#在数据库中保存文件名
        }
    }
    header("Location: index.php");
    die();
}