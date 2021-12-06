import struct, os

with open('disk.img', 'rb+') as fp:
    fp.seek(0x4000, 0)
    fp.write(b'SKUL\xba\xbe')
    fp.write(struct.pack(">H", 2))
    fp.write(struct.pack(">Q", 0x4000))
    fp.write(struct.pack(">Q", 0))
    fp.write(b'\x00' * 48)
    fp.write(b'sha256'.ljust(32, b'\x00'))

ok = 0
for seqid in range(0x100):
    with open('disk.img', 'rb+') as fp:
        fp.seek(0x4000 + 8 + 8, 0)
        fp.write(struct.pack(">Q", seqid))
    for salt in range(0x100):
        with open('disk.img', 'rb+') as fp:
            fp.seek(0x4000 + 8 + 8 + 8 + 48 + 32, 0)
            fp.write(struct.pack(">B", salt))
        print(seqid, salt)
        if not os.system("cryptsetup luksDump disk.img"):
            ok = 1
            break
    if ok:
        break

