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

$str1 = $_POST['str1'];
$str2 = $_POST['str2'];
$data = serialize(new tmp($str1, $str2));
$data = str_replace("easy", "ez", $data);
unserialize($data);