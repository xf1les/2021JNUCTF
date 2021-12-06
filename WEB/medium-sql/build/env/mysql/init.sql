CREATE database `medium` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
use medium;
CREATE TABLE `users`(
    `id` int PRIMARY KEY AUTO_INCREMENT,
    `username` varchar(256),
    `password` varchar(256)
);
CREATE TABLE `email`(
    `id` int PRIMARY KEY AUTO_INCREMENT,
    `username` varchar(256),
    `email` varchar(256),
    `time` DATETIME
);
CREATE TABLE `c1c7fbbb74d0d43101a2814ade767362`(
    `id` int PRIMARY KEY AUTO_INCREMENT,
    `flag` varchar(256)
);
INSERT INTO `c1c7fbbb74d0d43101a2814ade767362` (`id`, `flag`) VALUES (NULL,'flag{98dca52f6a770b8100cca1a478061743}');
CREATE USER 'user'@'%' IDENTIFIED BY 'be3d6cc797f9f37fecdb165e28fc13c7';
GRANT ALL PRIVILEGES ON *.* TO 'user'@'%';
FLUSH PRIVILEGES;