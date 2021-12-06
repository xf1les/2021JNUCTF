from Crypto.Util.number import bytes_to_long, getPrime, inverse
from functools import reduce
from secret import flag
m = bytes_to_long(flag)
DN = 2
SIZE = 512
FAC = lambda x : reduce(lambda x,y:x*y,[i+1 for i in range(x)]+[1])
COMBINATION = lambda x,y: FAC(y) // (FAC(x) * FAC(y - x))

if DN % 2 :
    ALPHA = ((2 * DN + 1) * 2 ** DN - 4 * DN * COMBINATION(DN // 2 ,DN)) / ((2 * DN - 2) * 2 ** DN + 8 * DN * COMBINATION(DN // 2 ,DN))
else:
    ALPHA = ((2 * DN + 1) * 2 ** DN  - (2 * DN + 1) * COMBINATION(DN // 2 ,DN)) / ((2 * DN - 2) * 2 ** DN + (4 * DN + 2) * COMBINATION(DN // 2,DN))

D = []
E = []
p,q = getPrime(SIZE),getPrime(SIZE)
n = p * q
while True:
    try:
        d = getPrime(int(ALPHA*SIZE*2))
        e = inverse(d,(p-1) * (q-1))
        E.append(e)
        D.append(d)
        if len(E) == DN:
            break
    except:
        pass
for e in E:
    print(e)
print(n)
print(pow(m,E[0],n))



