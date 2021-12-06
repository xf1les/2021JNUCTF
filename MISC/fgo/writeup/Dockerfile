FROM debian:buster
ENV TimeZone=Asia/Shanghai
WORKDIR /gaps
RUN ln -snf /usr/share/zoneinfo/$TimeZone /etc/localtime && echo $TimeZone > /etc/timezone; \
    sed -i 's/deb.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list; \
    sed -i 's/security.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list; \
    apt-get update;apt-get upgrade -y;apt-get install build-essential python3 python3-pip python3-tk ffmpeg libsm6 libxext6 -y;apt-get install build-essential python3 python3-pip python-tk ffmpeg libsm6 libxext6 -y --fix-missing; \
    pip3 install -i https://pypi.tuna.tsinghua.edu.cn/simple pip -U; \
    pip3 config set global.index-url https://pypi.tuna.tsinghua.edu.cn/simple; \
    pip3 install matplotlib==3.3.4 numpy==1.19.5 opencv-python==4.5.3.56 pytest==6.2.5 pillow==8.4.0
COPY ./gaps-master /gaps
RUN cd /gaps && pip3 install -e .