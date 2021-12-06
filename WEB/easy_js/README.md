- **题目名称：** easy_js
- **题目类型：** WEB
- **题目难度：** 容易
- **出题人：** tutu
- **考点：** 

1.  js代码混淆

- **描述：** 不会真有人点99999999下吧

- **flag：** flag{ac24adc5685ff-f6402e80bc-6fb6ae59-62aa51fa}

- **Writeup：** 

  存在index.js文件，但被进行了混淆，可以复制到去混淆网站（ https://www.sojson.com/jsjiemi.html ）得到：

  ```javascript
  var H1 = 0;
  
  function draw() {
      one = '<div class="item">';
      two = '<p id="clickNumber">Click number: 0</p>';
      three = '<p id="flag">flag will appear when you click 99999999 times !</p>';
      four = '</div><div class="item"><img src="jndx.gif" onclick="clickkkkk();"></div>';
      window["document"]['getElementById']("bo")['innerHTML'] = one + two + three + four
  }
  draw();
  
  function clickkkkk() {
      var mZjYBFF2 = 1;
      var tbuE3 = 2;
      var nBmms4 = 3;
      window["document"]['getElementById']("flag");
      g()
  }
  
  function g() {
      var fCdaXby5 = 1;
      var BFJkq6 = fCdaXby5;
      window["document"]['getElementById']("click");
      c()
  }
  
  function c() {
      H1 += 1;
      window["document"]['getElementById']("clickNumber")['innerHTML'] = "Click number: " + H1;
      if (H1 === 99999999) {
          var boF7 = new XMLHttpRequest();
          var jQs8 = "flaggggggggggggggg.php?c1ick=" + H1;
          boF7['onreadystatechange'] = function() {
              if (boF7['readyState'] == 4 && boF7['status'] == 200) {
                  text = boF7['responseText'];
                  window["document"]['getElementById']('flag')['innerHTML'] = text;
                  console['log'](text)
              }
          }
          boF7['open']("GET", jQs8, true);
          boF7['send']()
      } else {
          window["document"]['getElementById']('flag')['innerHTML'] = "flag will appear when you click 99999999 times !"
      }
  }
  ```

  阅读源码发现，使用变量H1来记录点击次数，只要点击次数为99999999就会访问flaggggggggggggggg.php?c1ick=99999999，进行获取flag并显示出来，因此可以直接访问flaggggggggggggggg.php?c1ick=99999999来获取flag。