<?php
class baby
{
    public $filename = "index.php";
    public function __construct($filename)
    {
        $this->filename = $filename;
    }
    function __destruct()
    {
        echo file_get_contents($this->filename); //flag in flag.php
    }
    function __wakeup()
    {
        if ($this->filename !== "index.php") {
            $this->filename = "index.php";
        }
    }
}

if (isset($_POST['str'])) {
    $str = $_POST['str'];
    if (preg_match('/flag/i', $str)) {
        die('???');
    } else {
        unserialize($str);
    }
} else {
    highlight_file(__FILE__);
}
