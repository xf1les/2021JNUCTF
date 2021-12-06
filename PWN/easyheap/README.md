* **题目名称：** easyheap

* **题目类型：** PWN

* **题目难度：** 困难

* **出题人：** lakwsh

* **考点：**  

1. 2.23 fastbin-atk

2. tea 解密

* **描述：** 一杯茶一道判断题

* **flag：** flag{4f0649ce-65ac-4521-9c83-961a3eec543b}

* **Writeup：** 漏洞点于free操作没有清零最后一个指针, 过tea校验后, 使用gift函数泄露libc地址, 打malloc_hook即可
