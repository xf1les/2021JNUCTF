<?php
session_start();
if (!isset($_SESSION['login'])) {
    header("Location: login.php");
    die();
}
if(isset($_GET['action'])&&!empty($_GET['action'])){
    include $_GET['action'];
}
else{
    header("Location: index.php?action=class.php");
    die();
}
?>

    <!DOCTYPE html>
    <html>
    <meta charset="utf-8">
    <title>图片管理</title>

    <head>
        <link href="//cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css" rel="stylesheet">
        <link rel='stylesheet' href='css/filepond-plugin-image-preview.min.css'/>
        <link rel='stylesheet' href='css/filepond.min.css'/>
        <link href="css/panel.css" rel="stylesheet">
        <script src="//cdn.jsdelivr.net/npm/jquery@3.4.0/dist/jquery.min.js"></script>
        <script src="//cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/js/bootstrap.bundle.min.js"></script>
        <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.css'>
        <script src="js/prompt.js"></script>
        <script src="js/panel.js"></script>
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
        </style>
    </head>

    <body>
    <nav class="navbar navbar-expand-lg">
        <div class="container">
            <a class="navbar-brand" href="index.php">Imgbed</a>
            <div class="collapse navbar-collapse">
                <ul class="navbar-nav ml-auto">
                    <li class="nav-item active pl-1">
                        <a class="nav-link" href="index.php"><i class="fa fa-th-list fa-fw mr-1"></i>简洁模式</a>
                    </li>
                    <li class="nav-item pl-1">
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
    <div class="container">
        <form method="POST" action="/upload.php?sent" enctype="multipart/form-data">
            <input type="file" class="filepond" name="file[]" multiple/>
            <input type="submit" value="Upload" class="btn btn-primary btn-block"/>
        </form>
    </div>
    <div class="top" id="prompt_bar"></div><!--浮动提示栏-->
    <br>
    <script src='js/filepond-plugin-file-encode.min.js'></script>
    <script src='js/filepond-plugin-image-preview.min.js'></script>
    <script src="js/filepond-plugin-file-validate-type.js"></script>
    <script src='js/filepond.min.js'></script>
    <script>
        FilePond.registerPlugin(
            FilePondPluginFileEncode,
            FilePondPluginImagePreview,
            FilePondPluginFileValidateType
        );
        FilePond.create(document.querySelector('.filepond'), {
            allowMultiple: true,
            acceptedFileTypes: ['image/jpeg', 'image/png', 'image/gif'],
            maxFiles: 10,
            required: true
        });
    </script>
    </body>
    </html>

<?php
error_reporting(0);
$a = new FileList();
?>