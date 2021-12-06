<?php
highlight_file(__FILE__);
if (!is_dir("uploads")) {
    mkdir("uploads", 0777, true);
}
if (isset($_POST['submit'])) {
    if (file_exists("uploads")) {
        $blacklist = array("php", "php5", "php4", "php3", "php2", "html", "htm", "phtml", "pht", "htaccess", "ini");
        $file_name = trim($_FILES['upload_file']['name'], " \t\n\r\0\x0B.");
        $file_ext = substr(strrchr($file_name, '.'), 1);
        $file_ext = strtolower($file_ext);
        $file_ext = trim($file_ext, " \t\n\r\0\x0B.");
        $file_ext = str_ireplace($blacklist, "", $file_ext);

        $temp_file = $_FILES['upload_file']['tmp_name'];
        $img_path = "uploads" . '/' . md5(time()) . "." . $file_ext;
        if (move_uploaded_file($temp_file, $img_path)) {
            echo $img_path;
        }
    }
}
?>

<form enctype="multipart/form-data" method="post">
    <input class="input_file" type="file" name="upload_file" />
    <input class="button" type="submit" name="submit" value="上传" />
</form>