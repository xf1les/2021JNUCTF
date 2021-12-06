- **题目名称：** PictureGenerator
- **题目类型：** WEB
- **题目难度：** 中等 
- **出题人：** ABU
- **考点：**

1. 代码审计
2. python os.system 命令注入

- **描述：** 一个图片生成器，你能帮我读到flag吗？flag在根目录的/flag下

- **flag：** flag{fhfgufghui_ewftftdf_whfdweyidg_gafdhjasdh_eghfhef_rhgfjrikfu!!!!}

- **Writeup：** 

  问题出现在app.py中使用了os.system()接收data参数，可以进行命令注入，过滤了"和$不过可以使用反引号``进行命令注入。思路如下

```bash
1.使用`cat /flag`获取flag，附在图片上，不过generate.py会检测文字中有没有flag，所以要用cut命令截取flag后面的字符串，具体命令是`cut -c5- /flag`（意思是截取第5个字符到结束），但由于会被人像挡住部分字符串，因此改变数字来多次获取。
```

```bash
2.利用/app/static/images目录有写的权限，将获取的flag注入到目录下自己建的文件中，payload如下
`cat /flag > static/images/flag`
```

