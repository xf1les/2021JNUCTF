import os
import cv2

filelist=os.listdir('result')

per_hconcat=[]
for i in range(18):
    tmp=[]
    for j in range(32):
        img=cv2.imread('result/%s'%filelist[i*32+j])
        tmp.append(img)
    per_hconcat.append(cv2.hconcat(tmp))
result=cv2.vconcat(per_hconcat)
cv2.imwrite('image/puzzle.jpg',result)