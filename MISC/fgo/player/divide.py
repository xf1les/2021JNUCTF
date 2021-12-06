import cv2
import hashlib
import time
import os

flag=cv2.imread("flag.jpg")

for i in range(0,flag.shape[0],60):
    for j in range(0,flag.shape[1],60):
        tmp=flag[i:i+60,j:j+60]
        cv2.imwrite("result/%s.jpg"%(hashlib.md5(str(time.time()).encode('utf-8')).hexdigest()),tmp)

os.system('touch result/*.jpg')