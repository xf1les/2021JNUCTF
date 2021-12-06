CREATE database `easysql` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
use easysql;
CREATE TABLE `users` (
    `id` int PRIMARY KEY AUTO_INCREMENT,
    `username` varchar(255),
    `password` varchar(255)
);
INSERT INTO `users` (`username`,`password`) VALUES ("admin","35f1eeffabbb28113be22ca2eb810d6a");
CREATE TABLE `flag` (
    `id` int PRIMARY KEY AUTO_INCREMENT,
    `flag` varchar(255)
);
INSERT INTO `flag` (`flag`) VALUES ("flag{d7edeb1366bd99aa12d109c99267e37e}");
CREATE USER 'user'@'%' IDENTIFIED BY 'c53fa7446209f665d26f937e24a14d6c';
GRANT ALL PRIVILEGES ON easysql.* TO 'user'@'%';
FLUSH PRIVILEGES;