- **题目名称：** 77777

* **题目类型：** MISC

* **题目难度：** 中等

* **出题人：** tutu

* **考点：**  

1. 七段数码管
2. 批量数据处理脚本编写


* **描述：**  我给你准备了一个LED灯组成的大屏幕，每一行都有512个灯，这场面应该很震撼吧

* **flag：** flag{as5d6-68t2z6-apb33-arg}

* **Writeup：**  

  解压得到一个文本，里面只有abcdefg七个字母，由LED联想到七段数码管，数字0-9，通过搜索(https://baike.baidu.com/item/%E4%B8%83%E6%AE%B5%E6%95%B0%E7%A0%81%E7%AE%A1/927592) 即可得到七段数码管的表示方法：

  ```python
  Tube={
      '0':"abcdef",
      '1':"bc",
      '2':"abged",
      '3':"abgcd",
      '4':"fgbc",
      '5':"fgcda",
      '6':"afedcg",
      '7':"abc",
      '8':"abcdefg",
      '9':"afgbcd"
  }
  ```

  根据提示把这些字母转换成数字，保存为txt文件，通过缩小视图即可看到flag

  ```python
  Num={
      "abcdef":'0',
      "bc":'1',
      "abged":'2',
      "abgcd":'3',
      "fgbc":'4',
      "fgcda":'5',
      "afedcg":'6',
      "abc":'7',
      "abcdefg":'8',
      "afgbcd":'9'
  }
  x=69 #77777.txt一共有69行
  y=512 #根据提示每行是512个数字
  seven=open('77777.txt','r',encoding='utf-16')
  flag=open('flag.txt','w',encoding='utf-16')
  for i in range(x):
      line=seven.readline().split(' ')
      string=''
      for j in range(y):
          string=string+Num[line[j]]
      string+='\n'
      flag.write(string)
  seven.close()
  flag.close()
  ```

  
