FROM php:5.4-apache
ENV TimeZone=Asia/Shanghai
ARG user_id=1000
RUN usermod -u $user_id www-data; \
    ln -snf /usr/share/zoneinfo/$TimeZone /etc/localtime && echo $TimeZone > /etc/timezone; \
    chown -R www-data:www-data /var/www; \
    echo "ServerName localhost" >> /etc/apache2/apache2.conf
CMD service apache2 restart && tail -F /var/log/apache2/access.log;