* **题目名称：** gogogo

* **题目类型：** Reverse

* **题目难度：** 容易

* **出题人：** cew

* **考点：**  

1. go逆向
2. 异或和base64编码


* **描述：** Just go

* **flag：** flag{69da7387-c810-48d0-ac22-c9a3477f5dff}

* **Writeup：** 

  整个流程是

  1. 输入异或"Xp0int"
  2. 异或后的输入做base64编码
  3. 编码后字串比较

  ```
  from base64 import b64decode
  
  key = list(b'Xp0int')
  cmp = b"PhxRDhVCYRRRXl1Mb11TUV9EdUQIDV5ZORMCW0MXYREDXVlDPkVUDwgJ"
  cmp = b64decode(cmp)
  cmp = [cmp[i] ^ key[i % len(key)] for i in range(len(cmp))]
  print(bytes(cmp))
  ```

  

  

  
