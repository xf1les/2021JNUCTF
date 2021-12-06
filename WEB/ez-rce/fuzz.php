<?php
#var_dump(get_defined_functions()["internal"]);
$func=array();
$j=0;
for ($i=0;$i<count(get_defined_functions()["internal"]);$i++) { 
    if (!preg_match('/file|if|localeconv|phpversion|sqrt|et|na|nt|strlen|info|path|rand|dec|bin|hex|oct|pi|exp|log/i',get_defined_functions()["internal"][$i])) {
        $func[$j]=get_defined_functions()["internal"][$i];
        $j++;
    }
}
#print_r($func);
$a=['getenv','getallheaders','get_defined_vars','session_id','getcwd','phpversion','localeconv','time','localtime','array_rand','array_flip','array_reverser','current','pos','end','floor','ceil','sqrt','dirname','chdir','scandir','system','sin','cos','tan','sinh','cosh','tanh','next','chr','ord','str_split','strval','fclose','tmpfile','file_get_contents','highlight_file','show_source','readfile','readgzfile','file'];
#print_r($a);
for($i=0;$i<count($func);$i++){
    for($j=0;$j<count($a);$j++){
        if($a[$j]==$func[$i]){
            var_dump($a[$j]);
        }
    }
}