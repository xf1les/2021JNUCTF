import pickle
import cv2
import random
import numpy as np
from PIL import Image


######################## patameter_change ############################################################
extract_imgname = 'hide.png'
canny_imgname = 'pkl/bound.pkl'
random_seed = 555111333444999000666777222888


######################## permutation matrix ##########################################################
key_table = [3, 5, 7, 0,
             6, 2, 4, 1]


######################## canny 边缘检测 ###############################################################
def find_bound(filename='pkl/bound.pkl'):
    """
    找边缘像素
    """
    f = open(filename, 'rb')
    bound = pickle.load(f)
    return bound

lenna = cv2.imread(extract_imgname)
# 转换通道
lenna_png = cv2.cvtColor(lenna, cv2.COLOR_BGR2RGB)

# 存储边缘像素的文件
bound = find_bound(canny_imgname)
# print(bound)

# 获取边缘像素所在的所有横坐标
bound_x = [i[0] for i in bound]
bound_y = [i[1] for i in bound]
bound_x = list(set(bound_x))
bound_y = list(set(bound_y))
# print(len(bound_x))
# print(len(bound_y))

# 隐藏长度的位置
hide_len_pixel = [[lenna_png.shape[0]-1,lenna_png.shape[1]-1],[lenna_png.shape[0]-1,lenna_png.shape[1]-2],
                  [lenna_png.shape[0]-1,lenna_png.shape[1]-3], [lenna_png.shape[0]-1,lenna_png.shape[1]-4]]


######################## len_extract  #########################################################
def len_extract(lenna_png):
    """
    将信息长度隐藏到图像中
    """
    global hide_len_pixel
    text_len = ''
    for index in range(len(hide_len_pixel)):
        tmp_pixel = lenna_png[hide_len_pixel[index][0], hide_len_pixel[index][1]]
        text_len += bin(tmp_pixel[0])[-1:] + bin(tmp_pixel[1])[-1:] + bin(tmp_pixel[2])[-2:]
    # print(int(text_len, 2))
    return int(text_len, 2)

######################## PRNG  ###############################################################
def PRNG(bound, bound_x, bound_y, textlen, col):
    """
    每轮随机选择一个边缘像素和一个非边缘像素作为一对像素进行隐写
    """
    global random_seed
    # 设定随机数发生器种子
    random.seed(random_seed)

    # 信息长度
    # text_len = 340
    # 两个列表分别存储选取的像素
    bound_field = []
    nor_field = []
    # 选择边缘像素进行提取、需要去重！！！
    for i in range(textlen):
        x_flag = 1
        while x_flag:
            x = random.choice(bound_x)
            x_flag = 0
            y = random.choice(bound_y)
            tmp_y = y
            # 如果是边缘像素并且未被选取
            if [x, y] in bound and [x, y] not in bound_field and [x, y] not in hide_len_pixel:
                bound_field.append([x, y])
                break
            else:
                bound_y_i = bound_y.index(y)
                bound_y_len = len(bound_y)
                while True:
                    # 随机选取后做线性操作
                    bound_y_i = (bound_y_i + 1) % bound_y_len
                    y = bound_y[bound_y_i]
                    # y = (y + 1) % col
                    if y == tmp_y:
                        x_flag = 1
                        bound_x.remove(x)
                        break
                    if [x, y] in bound and [x, y] not in bound_field and [x, y] not in hide_len_pixel:
                        bound_field.append([x, y])
                        break
    # 选择非边缘像素进行提取、需要去重！！！
    for i in range(text_len):
        x_flag = 1
        while x_flag:
            x = random.randint(0, col-1)
            y = random.randint(0, col-1)
            tmp_y = y
            # 如果是非边缘像素并且未被选取
            if [x, y] not in bound and [x, y] not in nor_field and [x, y] not in hide_len_pixel:
                nor_field.append([x, y])
                break
            else:
                while True:
                    # 随机选取后做线性操作
                    y = (y + 1) % col
                    if y == tmp_y:
                        continue
                    if [x, y] not in bound and [x, y] not in nor_field and [x, y] not in hide_len_pixel:
                        nor_field.append([x, y])
                        x_flag = 0
                        break
    return bound_field, nor_field

text_len= len_extract(lenna_png)
# print(text_len)
bound_field, nor_field = PRNG(bound, bound_x, bound_y, text_len, lenna_png.shape[1])
# print(bound_field)
# print(nor_field)
# print(len(bound_field),len(nor_field))


######################## data_extract  ##########################################################
def data_extract(lenna_png, bound_field, nor_field):
    """
    从相应的一对像素提取信息
    """
    cry_str = []
    for index in range(len(bound_field)):
        # 获取有隐藏信息的像素的RGB
        tmp_bound = lenna_png[bound_field[index][0], bound_field[index][1]]
        tmp_nor = lenna_png[nor_field[index][0], nor_field[index][1]]
        # print(tmp_bound,tmp_nor)
        # print(bin(tmp_bound[0])[-1:], bin(tmp_bound[1])[-1:], bin(tmp_bound[2])[-2:])
        # 提取信息
        tmp_text = bin(tmp_bound[0])[-1:] + bin(tmp_bound[1])[-1:] + bin(tmp_bound[2])[-2:]
        tmp_text = tmp_text + bin(tmp_nor[0])[-1:] + bin(tmp_nor[1])[-1:] + bin(tmp_nor[2])[-2:]
        cry_str.append(tmp_text)
    return cry_str

cry_str = data_extract(lenna_png, bound_field, nor_field)
# print(cry_str)


######################## data_restore  ##########################################################
def data_restore(cry_str):
    """
    将提取的信息进行置换得到原始信息
    """
    global key_table
    cry_text = []
    # 还原明文
    k = 0
    for i in cry_str:
        result = ''
        for j in range(8):
            result = result + i[key_table.index(j)]
        # cry_text.append(chr(int(result, 2)))
        cry_text.append(chr(int(result, 2)))
    return cry_text

# 如果是字符串直接合并打印，如果是图像则显示图像
cry_text = data_restore(cry_str)
print(''.join(cry_text))