FROM php:7.4-apache
ENV TimeZone=Asia/Shanghai
ARG user_id=1000
RUN usermod -u $user_id www-data; \
    ln -snf /usr/share/zoneinfo/$TimeZone /etc/localtime && echo $TimeZone > /etc/timezone; \
    sed -i 's/deb.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list \
    && sed -i 's/security.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list \
    && apt-get update;apt-get upgrade -y;apt-get install build-essential libssl-dev -y; \
    docker-php-ext-install mysqli; \
    chown -R www-data:www-data /var/www; \
    echo "ServerName localhost" >> /etc/apache2/apache2.conf
CMD service apache2 restart && tail -F /var/log/apache2/access.log;