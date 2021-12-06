<?php
echo "<p>很烦恼，昨天晚上代码写着写着就黑屏了！！！</p>";
function getflag(){
    echo file_get_contents("/flag");
}
if(isset($_GET['code'])){
    $code=$_GET['code'];
    if(strlen($code)>14){
        die("too long !");
    }
    if(preg_match('/[a-zA-Z0-9_&^<>"\'$#@!*&+=.`\[\]{}?,]+/',$code)){
        die(" No ! No !");
    }
    @eval($code);
}
?>