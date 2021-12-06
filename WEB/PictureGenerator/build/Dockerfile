FROM ctfhub/base_web_gunicorn_python_36

ENV WORK_CLASS=gevent MODULE_NAME=app VARIABLE_NAME=app

COPY src /app
COPY flag.sh /flag.sh

RUN pip install --upgrade pip
RUN apk --update add libxml2-dev libxslt-dev libffi-dev gcc musl-dev libgcc openssl-dev curl
RUN apk add jpeg-dev zlib-dev freetype-dev lcms2-dev openjpeg-dev tiff-dev tk-dev tcl-dev
RUN pip install -r /app/requirements.txt && rm -f /app/requirements.txt 
