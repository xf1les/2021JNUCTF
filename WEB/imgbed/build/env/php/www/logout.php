<?php
session_start();
session_destroy();
echo("<script>window.location.href='login.php';</script>");
die();
