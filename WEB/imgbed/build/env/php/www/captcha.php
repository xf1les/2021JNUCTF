<?php
session_start();

$width = 120;
$length = 40;
$captcha_code = '';

$image = imagecreatetruecolor($width, $length);
$color = imagecolorallocate($image, 255, 255, 255);
imagefill($image, 0, 0, $color);

for ($i = 0; $i < 4; $i++) {//产生随机字符
    $fontsize = 6;
    $fontcolor = imagecolorallocate($image, rand(0, 120), rand(0, 120), rand(0, 120));
    $data = "abcdefghjklmnpqrstuvwxyz23456789";//去除io10避免混淆
    $content = substr($data, rand(0, strlen($data)), 1);
    $captcha_code .= $content;
    $x = ($i * $width / 4) + rand($length / 6, $length / 3);
    $y = rand($length / 6, $length / 3);
    imagestring($image, $fontsize, $x, $y, $content, $fontcolor);
}
$_SESSION['authcode'] = $captcha_code;

for ($i = 0; $i < 200; $i++) {//产生干扰点
    $point_color = imagecolorallocate($image, rand(50, 200), rand(50, 200), rand(50, 200));
    imagesetpixel($image, rand(1, $width - 1), rand(1, $width - 1), $point_color);
}

for ($i = 0; $i < 5; $i++) {//产生干扰线
    $line_color = imagecolorallocate($image, rand(80, 220), rand(80, 220), rand(80, 220));
    imageline($image, rand(1, $width - 1), rand(1, $width / 3 - 1), rand(1, $width - 1), rand(1, $width / 3 - 1), $line_color);
}

header("content-type: image/png");
imagepng($image);
imagedestroy($image);
