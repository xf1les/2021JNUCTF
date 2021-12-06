#!/bin/sh
exec /usr/sbin/chroot --userspec=1000:1000 /home/ctf ./pwn
