* **题目名称：** exclude_0

* **题目类型：** Reverse

* **题目难度：** 容易

* **出题人：** cew

* **考点：**  

1. LD_PRELOAD hook function


* **描述：**  One challenge called 0bf let me and JANlittle go crazy. I hate char '0' and my flag will never include '0'! never! Flag is flag{your_input}

* **flag：** flag{2637faec-2bee-97f6-caab-ec432af264ee}

* **Writeup：** 

  1. 主要逻辑不在main函数，在_init_array的函数中

  2. _init_array有一个读输入和设定时间种子的函数，然后有1000个flagXXX_is_here和1000个flagXXX_maybe_true的函数，其中有999个flagXXX_is_here都会在生成的字符串中添加一个‘0’字符，而不会添加'0'的函数生成的字串就是flag

  3. flagXXX_maybe_true做的操作都一样，手动debug筛选出不含0的字符串或者静态分析出不添加‘0’的函数太困难，可以考虑以下几种解法：

     + dump所有字符串，然后筛选
     + gdb脚本断在每一个memcmp，获取字符串，然后筛选
     + LD_PRELOAD hook memcmp函数筛选
     + unicorn模拟执行、angr符号执行
     
     这里只用最方便的LD_PRELOAD hook memcmp
     
  4. ```c
     // gcc -fPIC -shared hook_memcmp.c -o hook_memcmp.o -ldl
     // LD_PRELOAD=/mnt/d/Share/debian_wsl2/ctf/jnu2021/exclude_0/hook_memcmp.o ./exclude_0
     
     #define _GNU_SOURCE
     #include <dlfcn.h>
     #include <string.h>
     #include <stdio.h>
      
     typedef int (*omemcmp)(const void *s1, const void *s2, size_t n);
      
     int memcmp(const void *s1, const void *s2, size_t n) {
         omemcmp omem;
         omem = (void *)dlsym(RTLD_NEXT, "memcmp");
         if(!strstr((const char*)s2, (const char*)"0")){
             printf("%s\n", s2);
         }
         return omem(s1, s2, n);
     }
     ```
  
  5. ```sh
     LD_PRELOAD=/mnt/d/Share/debian_wsl2/ctf/jnu2021/exclude_0/hook_memcmp.o ./player/exclude_0
     Let's Start!
     0000
     2637faec-2bee-97f6-caab-ec432af264ee
     nope!
     your input is so bad!
     ```

