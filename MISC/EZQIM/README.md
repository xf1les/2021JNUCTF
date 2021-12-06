* **题目名称：** EZQIM

* **题目类型：** MISC

* **题目难度：** 中等 / 困难

* **出题人：** tutu

* **考点：**  

1. 量化索引调制水印嵌入和提取

2. matlab语法


* **描述：**  lena好像有水印，你能帮我提取出来吗?

* **flag：** flag{2a3b-89e-f594}

* **Writeup：** 

  ```matlab
  clear
  global delta
  global b
  delta=uint8(16);
  b=uint8(2);
  watermarked_lena=imread("watermarked_lena.jpg");
  watermarked_lena=reshape(watermarked_lena,1,[]);
  f=reshape(Extract(watermarked_lena(1:80*512)),80,512);
  imwrite(f*255,"flag.jpg");
  function w=Extract(p)
      global delta;
      global b;
      w=zeros(1,length(p));
      for i=1:length(p)
          w(i)=mod(uint8(p(i)/delta),b);
      end
  end
  ```

  
