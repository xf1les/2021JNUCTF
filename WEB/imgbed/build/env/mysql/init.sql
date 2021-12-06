CREATE database `imgbed` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
use imgbed;
CREATE TABLE `users`(
    `id` int PRIMARY KEY AUTO_INCREMENT,
    `username` varchar(100),
    `password` varchar(100),
    `posi` int(1),
    `answer` varchar(100)
);
CREATE TABLE images(
    `id` int PRIMARY KEY AUTO_INCREMENT,
    `uid` int(11),
    `imgname` varchar(100),
    `create_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
);
CREATE USER 'user'@'%' IDENTIFIED BY 'ee11cbb19052e40b07aac0ca060c23ee';
GRANT ALL PRIVILEGES ON imgbed.* TO 'user'@'%';
FLUSH PRIVILEGES;