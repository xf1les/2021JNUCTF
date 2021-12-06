<?php
function waf($var)
{
    $blacklist = array("select", "union", "flag", "or", "ro", "where");
    $var = str_ireplace($blacklist, "", $var);
    return $var;
}