from pyDes import *
import binascii
import string
import pyDes

# 秘钥
KEY = 'pl2iz!z.'
def des_encrypt(s):
    """
    DES 加密
    :param s: 原始字符串
    :return: 加密后字符串，16进制
    """
    secret_key = KEY
    iv = secret_key
    k = des(secret_key, CBC, iv, pad=None, padmode=PAD_PKCS5)
    en = k.encrypt(s, padmode=PAD_PKCS5)
    return binascii.b2a_hex(en)


def des_descrypt(s):
    """
    DES 解密
    :param s: 加密后的字符串，16进制
    :return:  解密后的字符串
    """
    secret_key = KEY
    iv = secret_key
    k = des(secret_key, CBC, iv, pad=None, padmode=PAD_PKCS5)
    de = k.decrypt(binascii.a2b_hex(s), padmode=PAD_PKCS5)
    return de

s="flag{We_know_that_brute_f0rce_1s_4_go0d_method_to_hack_the_wor1d!!!}"
#加密之后大写
res=(des_encrypt(s)).upper()
print(res)

st = '0123456789ABCDEF'
stt = string.printable
# print(st)
print(stt)

origin = '92F7B9E2101134780DC5A6584025EBDAA3A182407EB3011275D3D592808998A5CA556C88DD6228AC53C389DA4B69040A0C7045E8B9F064C89A0F1795232F4AFA17C79F5A78466A02'
cipher = '92F7B9?2101134780DC5A6584025EBDAA3A182407EB3?11275D3D592808998A5CA556C88DD6228AC53C389?A4B69040A0C7045E8B9F064C89A0F1795232F4AFA17C79F5A784?6A02'
cipher_text = cipher.replace('?','{}')
k = 0
for i1 in reversed(st):
    for i2 in reversed(st):
        for i3 in reversed(st):
            for i4 in reversed(st):
                data = cipher_text.format(i1,i2,i3,i4)
                k = k + 1
                if k % 100 == 0:
                    print(k)
                if origin == data:
                    print('!!!!!!!!!!!!!!!!!!!!')
                    # res = des_descrypt(data)
                    # print(res)
                    # sys.exit(1)
                try:
                    res=des_descrypt(data)
                    if b'flag' in res:
                        for i in range(len(res)):
                            if chr(res[i]) in stt:
                                if i == len(res) - 1:
                                    print(res)
                                    sys.exit(1)
                                continue
                            else:
                                break
                except:
                    continue