<?php
highlight_file(__FILE__);
if (!is_dir("uploads")) {
    mkdir("uploads", 0777, true);
}
if (isset($_POST['submit'])) {
    if (file_exists("uploads")) {
        $file_name = trim($_FILES['upload_file']['name']);
        $file_ext = substr(strrchr($file_name, '.'), 1);

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