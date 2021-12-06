CREATE database `babysql` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
use babysql;
CREATE TABLE `users` (
    `id` int PRIMARY KEY AUTO_INCREMENT,
    `username` varchar(255),
    `password` varchar(255)
);
INSERT INTO `users` (`username`,`password`) VALUES ("admin","5ef582761f2cafceebdfc8c9ac259cf0");
CREATE TABLE `flag` (
    `id` int PRIMARY KEY AUTO_INCREMENT,
    `flag` varchar(255)
);
INSERT INTO `flag` (`flag`) VALUES ("flag{9d5ae6b83c7ad5703872574e49aaf6f0}");
CREATE USER 'user'@'%' IDENTIFIED BY '5418f0b3595be1e9416e996558fb45ac';
GRANT ALL PRIVILEGES ON babysql.* TO 'user'@'%';
FLUSH PRIVILEGES;