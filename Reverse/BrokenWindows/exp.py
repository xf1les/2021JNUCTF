#!/usr/bin/env python3
from pwn import *
import warnings
warnings.filterwarnings("ignore", category=BytesWarning)

context(log_level="debug")

# ~ p = process("./chall")
p = remote("35.229.138.83", 11689)

for i in range(100):
    s = p.recvuntil(" '")
    if b"one" in s:
        count = 1
    elif b"two" in s:
        count = 2
    elif b"three" in s:
        count = 3
    num = int(p.recvuntil("')", drop=True))
    
    if num == 0:
        ans = "000-" + count * '0' + (7-count) * '7'
    elif num == 7:
        ans = "000-" + count * '7' + (7-count) * '0'
    else:
        ans = "000-" + (str(7 - (num * count % 7)) + count * str(num)).rjust(7, '0')
    p.sendlineafter(': ', ans)

p.interactive()
