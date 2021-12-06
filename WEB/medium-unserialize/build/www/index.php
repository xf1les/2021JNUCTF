<?php
highlight_file(__FILE__);

class Welcome
{
    public $welcome;
    public $randcode;
    public $code;
    public $sha1;
    public $sha2;

    public function __construct()
    {
        $this->welcome = "Welcome to Xp0int-CTF";
        echo $this->welcome . "<br>";
    }

    public function __destruct()
    {
        $this->randcode = rand(1, 10086);
        if ($this->sha1 instanceof Filter || $this->sha1 instanceof Route || $this->sha1 instanceof User || $this->sha1 instanceof Info || $this->sha1 instanceof Method || $this->sha2 instanceof Filter || $this->sha2 instanceof Route || $this->sha2 instanceof User || $this->sha2 instanceof Info || $this->sha2 instanceof Method || empty($this->sha1) || empty($this->sha2) || is_array($this->sha1) || is_array($this->sha2) || ($this->sha1 == $this->sha2) || !(sha1($this->sha1) === sha1($this->sha2)) || !(md5($this->sha1) === md5($this->sha2))) {
            die("no no no");
        }
        if ($this->randcode === $this->code && md5($this->welcome) === md5(time())) {
            echo("wow!!!<br>");
        } else {
            die("(:");
        }
    }
}

class Filter
{
    public array $params;

    public function __get($name)
    {
        return $this->get($name);
    }

    public function get($name)
    {
        if (array_key_exists($name, $this->params)) {
            $value = $this->params[$name];
            call_user_func($value);
        } else {
            return null;
        }
    }
}

class Route
{
    public $action;
    public array $data;
    private $route;

    public function __construct($action, $route, array $data)
    {
        $this->action = $action;
        $this->route = $route;
        $this->data = $data;
    }

    public function __toString()
    {
        switch ($this->action) {
            case "setupinfo":
                return $this->route->setupinfo($this->data);
            case "listroute":
                return serialize($this->route);
            default:
                throw new Error("Route error!!!");
        }
    }
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

    public function __toString()
    {
        $address = $this->private_info['address'];
        return sprintf("Basic info: %s , birthplace: %s", implode(' ', $this->basic_info), $address->birthplace);
    }
}

class Info
{
    public array $info;

    public function setupinfo(array $info)
    {
        $this->info = $info;
        return "successfully setupinfo";
    }

    public function __toString()
    {
        if (isset($this->info)) {
            return serialize($this->info);
        } else {
            throw new Error("Info error!!!");
        }
    }
}

class Method
{
    protected array $methods = array();

    public function __call($callback, $parameter)
    {
        return call_user_func_array($this->check_method($callback), $parameter);
    }

    public function check_method($method)
    {
        if (isset($this->methods[$method])) {
            $this->methods[$method] = "very close!!!";
            return $this->methods[$method];
        } else {
            throw new Error("Unknown method!!!");
        }
    }
}

class Flag
{
    public function getflag()
    {
        highlight_file("flag.php");
    }
}

class Main
{
    public $operate;

    public function __destruct()
    {
        if (!isset($_POST["data"]) || preg_match('/GBMB|file|http|ftp|php|zlib|data|glob|ssh2|rar|ogg|expect|filter|read|base|rot|get|post|class|Welcome|Route|Info|User|Filter|Method|Flag|zip|tar/i', $_POST["data"])) {
            die("???");
        }
        $data = $_POST["data"];
        if ($this->operate === 'w') {
            $filename = "/tmp/" . md5(time()) . ".xp0int";
            file_put_contents($filename, $data);
            echo $filename;
        } else if ($this->operate === 'r') {
            if (file_exists($data)) {
                echo("wow!!!<br>");
            } else {
                die("No File!!!");
            }
        }
    }
}

if (!isset($_POST["str"]) || preg_match('/GBMB|file|http|ftp|php|zlib|data|glob|ssh2|rar|ogg|expect|filter|read|base|rot|get|post|class|Welcome|Route|Info|User|Filter|Method|Flag|zip|tar/i', $_POST["str"])) {
    die("???");
}
unserialize($_POST["str"]);
throw new Error("I can't destruct,help!!!");