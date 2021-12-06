import cv2
import random
import pickle
import sys

text = 'flag{##################################}'
stego_imgname = 'hide.png'
random_seed = 555111333444999000666777222888

key_table = [3, 5, 7, 0,
             6, 2, 4, 1]

def find_bound(canny):
    bound = []
    for i in range(len(canny)):
        for j in range(len(canny[i])):
            if canny[i][j] != 0:
                bound.append([i, j])
    return bound

lenna = cv2.imread('lenna.png')
# 转换通道
lenna_png = cv2.cvtColor(lenna, cv2.COLOR_BGR2RGB)
lenna = cv2.GaussianBlur(lenna, (5,5), 0)
canny = cv2.Canny(lenna, 50, 150)

bound = find_bound(canny)
write_file = open('pkl/bound.pkl', 'wb')
pickle.dump(bound, write_file)
write_file.close()

bound_len = len(bound)
nor_len = lenna_png.shape[0] * lenna_png.shape[1] - bound_len
if type(text) == str:
    text_len = len(text)
else:
    text_len = text_row * text_col
if text_len > bound_len + 4 or text_len > nor_len + 4:
    print('Too long.')
    sys.exit(1)

bound_x = [i[0] for i in bound]
bound_y = [i[1] for i in bound]
bound_x = list(set(bound_x))
bound_y = list(set(bound_y))

hide_len_pixel = [[lenna_png.shape[0]-1,lenna_png.shape[1]-1],[lenna_png.shape[0]-1,lenna_png.shape[1]-2],
                  [lenna_png.shape[0]-1,lenna_png.shape[1]-3], [lenna_png.shape[0]-1,lenna_png.shape[1]-4]]

def PRNG(textlen, bound, bound_x, bound_y, col = 512):
    global random_seed
    # 设定随机数发生器种子
    random.seed(random_seed)

    bound_field = []
    nor_field = []
    for i in range(textlen):
        x_flag = 1
        while x_flag:
            x = random.choice(bound_x)
            x_flag = 0
            y = random.choice(bound_y)
            tmp_y = y
            if [x, y] in bound and [x, y] not in bound_field and [x, y] not in hide_len_pixel:
                bound_field.append([x, y])
                break
            else:
                bound_y_i = bound_y.index(y)
                bound_y_len = len(bound_y)
                while True:
                    bound_y_i = (bound_y_i + 1) % bound_y_len
                    y = bound_y[bound_y_i]
                    if y == tmp_y:
                        x_flag = 1
                        bound_x.remove(x)
                        break
                    if [x, y] in bound and [x, y] not in bound_field and [x,y] not in hide_len_pixel:
                        bound_field.append([x, y])
                        break
    for i in range(textlen):
        x_flag = 1
        while x_flag:
            x = random.randint(0, col-1)
            y = random.randint(0, col-1)
            tmp_y = y
            if [x, y] not in bound and [x, y] not in nor_field and [x, y] not in hide_len_pixel:
                nor_field.append([x, y])
                break
            else:
                while True:
                    y = (y + 1) % col
                    if y == tmp_y:
                        continue
                    if [x, y] not in bound and [x, y] not in nor_field and [x, y] not in hide_len_pixel:
                        nor_field.append([x, y])
                        x_flag = 0
                        break
    return bound_field, nor_field


bound_field, nor_field = PRNG(text_len, bound, bound_x, bound_y, lenna_png.shape[1])

def hide_length(lenna_png, text_len):
    global hide_len_pixel
    text_len = bin(text_len).lstrip('0b').rjust(len(hide_len_pixel) * 4,'0')
    for index in range(len(hide_len_pixel)):
        tmp_len = int(text_len[4*index:4*index+4], 2)
        tmp_pixel = lenna_png[hide_len_pixel[index][0], hide_len_pixel[index][1]]
        tmp_pixel[0] = tmp_pixel[0] - (tmp_pixel[0] % 2) + ((tmp_len >> 3) & 0b1)
        tmp_pixel[1] = tmp_pixel[1] - (tmp_pixel[1] % 2) + ((tmp_len >> 2) & 0b01)
        tmp_pixel[2] = tmp_pixel[2] - (tmp_pixel[2] % 4) + (tmp_len & 0b11)
        lenna_png[hide_len_pixel[index][0], hide_len_pixel[index][1]] = tmp_pixel
    return lenna_png

lenna_png = hide_length(lenna_png, text_len)

def data_displace(text):
    global key_table
    ascii_text = [ord(i) for i in text]

    # 转换成二进制并置换
    ascii_text_displace = []
    for i in ascii_text:
        tmp_str = bin(i).lstrip('0b').rjust(8,'0')
        # print('origin: ' + tmp_str)
        result = ''
        # 置换
        for j in key_table:
            result = result + tmp_str[j]
        # print('change: ' + result)
        result_int = int(result, 2)
        ascii_text_displace.append(result_int)
    return ascii_text_displace

ascii_text_displace = data_displace(text)

def water_mark(lenna_png, ascii_text_displace, bound_field, nor_field):
    global stego_imgname
    # 隐藏
    for index in range(len(ascii_text_displace)):
        # 获取要隐藏的像素的RGB
        tmp_bound = lenna_png[bound_field[index][0],bound_field[index][1]]
        tmp_nor = lenna_png[nor_field[index][0],nor_field[index][1]]
        # print(bin(ascii_text_displace[index]).lstrip('0b').rjust(8,'0'))
        # 将每个像素点的RGB值余2，这样可以去掉最低位的值,从需要隐藏的信息中取出一位，转换为整型,两值相加，就把信息隐藏起来了
        # print('origin: ' + bin(tmp_bound[0]).lstrip('0b').rjust(8,'0'),bin(tmp_bound[1]).lstrip('0b').rjust(8,'0'),bin(tmp_bound[2]).lstrip('0b').rjust(8,'0'))
        # print('origin: ' + bin(tmp_nor[0]).lstrip('0b').rjust(8,'0'),bin(tmp_nor[1]).lstrip('0b').rjust(8,'0'),bin(tmp_nor[2]).lstrip('0b').rjust(8,'0'))
        # 边缘像素隐藏
        tmp_bound[0] = tmp_bound[0] - (tmp_bound[0] % 2) + (ascii_text_displace[index] >> 7)
        tmp_bound[1] = tmp_bound[1] - (tmp_bound[1] % 2) + ((ascii_text_displace[index] >> 6) & 0b01)
        tmp_bound[2] = tmp_bound[2] - (tmp_bound[2] % 4) + ((ascii_text_displace[index] >> 4) & 0b0011)

        # 非边缘像素隐藏
        tmp_nor[0] = tmp_nor[0] - (tmp_nor[0] % 2) + ((ascii_text_displace[index] >> 3) & 0b1)
        tmp_nor[1] = tmp_nor[1] - (tmp_nor[1] % 2) + ((ascii_text_displace[index] >> 2) & 0b01)
        tmp_nor[2] = tmp_nor[2] - (tmp_nor[2] % 4) + (ascii_text_displace[index] & 0b11)
        # print('change: ' + bin(tmp_bound[0]).lstrip('0b').rjust(8,'0'),bin(tmp_bound[1]).lstrip('0b').rjust(8,'0'),bin(tmp_bound[2]).lstrip('0b').rjust(8,'0'))
        # print('change: ' + bin(tmp_nor[0]).lstrip('0b').rjust(8,'0'),bin(tmp_nor[1]).lstrip('0b').rjust(8,'0'),bin(tmp_nor[2]).lstrip('0b').rjust(8,'0'))
        # print(tmp_bound, tmp_nor)

        # 将结果写回
        lenna_png[bound_field[index][0], bound_field[index][1]] = tmp_bound
        lenna_png[nor_field[index][0], nor_field[index][1]] = tmp_nor
        # print(lenna_png[bound_field[index][0], bound_field[index][1]])
        # print(lenna_png[nor_field[index][0], nor_field[index][1]])

    # 生成新的图像
    lenna_hide = cv2.cvtColor(lenna_png, cv2.COLOR_RGB2BGR)
    cv2.imwrite(stego_imgname, lenna_hide)
water_mark(lenna_png, ascii_text_displace, bound_field, nor_field)
