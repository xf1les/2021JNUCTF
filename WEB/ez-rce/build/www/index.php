<?php
highlight_file(__FILE__);
if ($_POST['shell']) {
    $shell = $_POST['shell'];
    if (';' === preg_replace('/[a-z_]+\((?R)?\)/', '', $shell)) {
        if (preg_match('/file|if|localeconv|phpversion|sqrt|et|na|nt|strlen|info|path|rand|dec|bin|hex|oct|pi|exp|log/i', $shell)) {
            die('?');
        } else {
            eval($shell);
        }
    } else {
        die('??');
    }
}
