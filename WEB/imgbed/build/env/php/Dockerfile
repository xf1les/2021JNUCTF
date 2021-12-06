FROM php:7.4-apache
ENV TimeZone=Asia/Shanghai
ARG user_id=1000
RUN usermod -u $user_id www-data; \
    ln -snf /usr/share/zoneinfo/$TimeZone /etc/localtime && echo $TimeZone > /etc/timezone; \
    sed -i 's/deb.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list \
    && sed -i 's/security.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list \
    && apt-get update;apt-get upgrade -y;apt-get install build-essential libssl-dev zlib1g-dev libpng-dev libjpeg-dev libfreetype6-dev libffi-dev -y; \
    docker-php-ext-configure gd --with-freetype --with-jpeg; \
    docker-php-ext-install gd mysqli ffi; \
    chown -R www-data:www-data /var/www; \
    echo "ServerName localhost" >> /etc/apache2/apache2.conf; \
    a2enmod rewrite cgi && a2ensite 000-default
COPY readflag /readflag
COPY flag /flag
COPY www /var/www/html
RUN chmod 0700 /flag; \
    chmod 0755 /readflag; \
    chmod +s /readflag; \
    chmod -R 755 /var/www/html/; \
    chmod -R 777 /var/www/html/uploads
CMD service apache2 restart && tail -F /var/log/apache2/access.log;