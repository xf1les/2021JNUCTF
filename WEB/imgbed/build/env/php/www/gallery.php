<?php
session_start();
if (!isset($_SESSION['login'])) {
    header("Location: login.php");
    die();
}
?>

    <!DOCTYPE html>
    <html>
    <meta charset="utf-8">
    <meta content="width=device-width" name="viewport">
    <title>图片管理</title>

    <head>
        <link href="//cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css" rel="stylesheet">
        <link rel='stylesheet' href='css/filepond-plugin-image-preview.min.css'/>
        <link rel='stylesheet' href='css/filepond.min.css'/>
        <script src="//cdn.jsdelivr.net/npm/jquery@3.4.0/dist/jquery.min.js"></script>
        <script src="//cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/js/bootstrap.bundle.min.js"></script>
        <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.css'>
        <script src="js/panel.js"></script>
    </head>
    <style>
        .navbar {
            background-color: #eaecf0;
        }

        .navbar .navbar-nav .nav-link {
            color: #6c767d;
        }

        .navbar .navbar-nav .nav-link:hover {
            color: #227bff;
        }

        .navbar .navbar-nav .active > .nav-link {
            color: #227bff;
        }

        .top {
            text-decoration: none;
            background-color: #eaecf0;
        }

        section {
            display: flex;
            flex-wrap: wrap;
        }

        section::after {
            content: '';
            flex-grow: 999999;
        }

        .image {
            margin: 2px;
            background-color: transparent;
            position: relative;
        }

        .image:hover {
            box-shadow: 0 0 25px rgba(186, 200, 207, 1);
        }

        .image:hover .menu {
            visibility: visible;
        }

        .menu {
            visibility: hidden;
            width: 160px;
            background-color: #eaecf0;
            text-align: center;
            border-radius: 6px;
            padding: 5px 0;
            position: absolute;
            z-index: 1;
            left: 50%;
            margin-left: -80px;
        }

        .menu::after {
            content: "";
            position: absolute;
            bottom: 100%;
            left: 50%;
            margin-left: -5px;
            border-width: 5px;
            border-style: solid;
            border-color: transparent transparent #eaecf0 transparent;
        }

        i {
            display: block;
        }

        img {
            position: absolute;
            top: 0;
            width: 100%;
            vertical-align: bottom;
        }

        .menu-link {
            color: #6c767d;
        }

        .menu-link:hover {
            color: #227bff;
            text-decoration-line: none;
        }
    </style>

    <body>
    <nav class="navbar navbar-expand-lg">
        <div class="container">
            <a class="navbar-brand" href="index.php">Imgbed</a>
            <div class="collapse navbar-collapse">
                <ul class="navbar-nav ml-auto">
                    <li class="nav-item pl-1">
                        <a class="nav-link" href="index.php"><i class="fa fa-th-list fa-fw mr-1"></i>简洁模式</a>
                    </li>
                    <li class="nav-item active pl-1">
                        <a class="nav-link" href="gallery.php"><i class="fa fa-picture-o fa-fw mr-1"></i>画廊模式</a>
                    </li>
                    <li class="nav-item pl-1">
                        <a class="nav-link" href="logout.php"><i class="fa fa-sign-out fa-fw mr-1"></i>注销<?php echo $_SESSION['username'] ?></a>
                    </li>
                </ul>
            </div>
        </div>
    </nav>
    <br>
    </body>
    </html>

<?php
include "class.php";
$a = new Gallery();
?>