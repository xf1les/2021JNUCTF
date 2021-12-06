#!/bin/bash

set -ex

# JNU Logo on JNU Homepage will be used as keyfile later
#wget -4 https://jnu.edu.cn/_upload/tpl/00/f5/245/template245/images/home/logo2.svg -O jnulogo.svg

# Create a 20MB blank disk image
dd if=/dev/zero of=disk.img bs=1024k seek=0 count=20
# Encrypt with LUKS 
cryptsetup --type luks2             \
           --cipher aes-xts-plain64 \
           --hash sha512            \
           --key-size 512           \
           --key-file jnulogo.svg   \
           --use-urandom            \
           --batch-mode             \
           luksFormat disk.img

# Setup ext4 filesystem and copy flag to the disk
sudo cryptsetup --key-file jnulogo.svg open disk.img disk

sudo mkfs.ext4 /dev/mapper/disk
sudo mount /dev/mapper/disk /mnt/
sudo cp flag /mnt/
sudo umount /mnt/

sudo cryptsetup close /dev/mapper/disk

#cp disk.img disk.img.ori

# Finally, corrupt the disk image
python3 -c "
with open('disk.img', 'rb+') as fp:
    fp.write(b'A' * 0x4000)
    fp.write(b'B' * 0x69)
"

cryptsetup luksDump disk.img
