FROM ubuntu:18.04

ENV DEBIAN_FRONTEND=noninteractive

RUN sed -i "s/http:\/\/archive.ubuntu.com/http:\/\/mirrors.tuna.tsinghua.edu.cn/g" /etc/apt/sources.list && \
    apt-get update && apt-get -y dist-upgrade           && \
    apt-get install -y --no-install-recommends xinetd   && \
    apt-get clean && rm -rf /var/lib/apt/list/*

RUN useradd -m ctf                      && \
    mkdir /home/ctf/usr                 && \
    cp -R /lib* /home/ctf               && \
    cp -R /usr/lib* /home/ctf/usr       && \
    mkdir /home/ctf/bin                 && \
    cp /bin/sh /home/ctf/bin            && \
    cp /bin/ls /home/ctf/bin            && \
    cp /bin/cat /home/ctf/bin           && \			
    mkdir /home/ctf/dev                 && \
    mknod /home/ctf/dev/null c 1 3      && \
    mknod /home/ctf/dev/zero c 1 5      && \
    mknod /home/ctf/dev/random c 1 8    && \
    mknod /home/ctf/dev/urandom c 1 9   && \
    chmod 666 /home/ctf/dev/*

WORKDIR /home/ctf/

COPY ./etc/start.sh   /
COPY ./etc/ctf.xinetd /etc/xinetd.d
COPY ./bin/* /home/ctf
COPY ./flag  /home/ctf

RUN chmod +x /start.sh          && \
    chown -R root:ctf /home/ctf && \
    chmod -R 750 /home/ctf      && \
    chmod 740 /home/ctf/flag

CMD exec /usr/sbin/xinetd -dontfork -f /etc/xinetd.d/ctf.xinetd

EXPOSE 8888
