#!/bin/bash

set -ex

# JNU Logo on JNU Homepage will be used as keyfile later
#wget -4 https://jnu.edu.cn/_upload/tpl/00/f5/245/template245/images/home/logo2.svg -O jnulogo.svg

# Fix 2nd header
python3 fix_hdr.py

# Repair and decrypt the disk
sudo cryptsetup --key-file jnulogo.svg open disk.img disk

# Read flag
sudo mount /dev/mapper/disk /mnt/
cat /mnt/flag
sudo umount /mnt/

sudo cryptsetup close /dev/mapper/disk
