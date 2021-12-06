* **题目名称：** DoUKnowLattice

* **题目类型：** Crypto

* **题目难度：** 中等

* **出题人：** k1rit0

* **考点：**  

1.  背包问题


* **描述：**  

  I have a backpack. Do you know backpack or lattice?

* **flag：** flag{I've been reading books of old}

* **Writeup：** 

  构造格子
  $$
  \begin{pmatrix}
  1&0&0&\cdots&0&A_0 \\
  0&1&0&\cdots&0&A_1 \\
  0&0&1&\cdots&0&A_2 \\
  \vdots&\vdots&\vdots&\ddots&\vdots \\
  0&0&0&\cdots&1&A_n \\
  0&0&0&\cdots&0&-SUM
  \end{pmatrix}
  $$
  规约然后遍历结果的所有行向量，有一行就是flag

