from hashlib import sha256, sha224, sha1, sha384
import string

dic = string.digits + string.ascii_letters

cmp = ['5d8c589838d8039d', 'f77fbc6c2cecf675', '021425df997b1b98', 'f51fd2e4a7844c06', 'ff9980a18365921b', 'c3b2340bb33558ca', '47e6e8d111a1b592', '61eceffcb6831f31']

def fp_sha1(s):
    return sha1(s).hexdigest()

def fp_sha224(s):
    return sha224(s).hexdigest()

def fp_sha256(s):
    return sha256(s).hexdigest()

def fp_sha384(s):
    return sha384(s).hexdigest()

fp = [fp_sha1, fp_sha224, fp_sha256, fp_sha384]

for i in range(0, len(cmp), 2):
    fp_hash = None
    a, b = None, None
    for j in range(len(fp)):
        for k1 in dic:
            for k2 in dic:
                for k3 in dic:
                    for k4 in dic:
                        cur = (k1 + k2 + k3 + k4).encode()
                        if fp[j](cur)[:16] == cmp[i]:
                            fp_hash = fp[j]
                            a = cur
                            break
                    if a:
                        break
                if a:
                    break
            if a:
                break
        if a:
            break

    for k1 in dic:
        for k2 in dic:
            for k3 in dic:
                for k4 in dic:
                    cur = (k1 + k2 + k3 + k4).encode()
                    if fp_hash(cur)[:16] == cmp[i+1]:
                        b = cur
                        break
                if b:
                    break
            if b:
                break
        if b:
            break
    
    print((a+b).decode(), end='')