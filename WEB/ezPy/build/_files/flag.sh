#!/bin/sh

echo $FLAG > /flag

export FLAG=not_flag
FLAG=not_flag

cd /app
pip3 install -r requirements.txt

rm -f /flag.sh
