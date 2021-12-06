# 题目列表

## 1. MISC:

| 序号 | 名称 | 难度 | 考点 | 描述 | flag | 出题人 | 备注 |
| :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: |
| 0 | zero_width | 容易 | 零宽字符 | Just one blank txt file.Whats wrong with the file size? | flag{98055234-e9e1-4c76-b1b0-fedb03d523ce} | cew ||
| 1 | EZQIM | 困难 | QIM水印 | lena好像有水印，你能帮我提取出来吗? | flag{2a3b-89e-f594} | tutu ||
| 2 | FFIVE | 容易 | F5隐写+Brainfuck | 你会使用win10刷新快捷键吗 | flag{ad45f2-a52f3-ae956ff-ac4b2e} | tutu ||
| 3 | 77777 | 中等 | 七段数码管 | 我给你准备了一个LED灯组成的大屏幕，每一行都有512个灯，这场面应该很震撼吧 | flag{as5d6-68t2z6-apb33-arg} | tutu ||
| 4 | easy_misc | 简单 | lsb | 出题人不想写描述了，因为太简单了 | flag{it_seems_grate} | lunarsama ||
| 5 | blind | 简单 | 盲水印 | 一起来看小姐姐，咦，我的小姐姐呢 | flag{easy_misc} | lunarsama ||
| 6 | boom shakalaka | 简单 | 暴力破解 | boom shakalaka~ boom shakalaka~ | flag{We_know_that_brute_f0rce_1s_4_go0d_method_to_hack_the_wor1d!!!} | Donek1 ||
| 7 | 套娃 | 简单 | zip循环解压 | 你玩过俄罗斯套娃吗~ | flag{extract_extract_extract_and_4lmost_there~} | Donek1 ||
| 8 | misc??? | 中等 | lsb隐写逆向 | misc or ...??? | flag{m1sc_rev_1s_excited_???} | Donek1 ||
| 9 | fgo | 中等 | 拼图题 | 拼图&getflag | flag{Fa73-Grand-Ord3r!!} | misaka ||
| 10 | LUKS | 困难 | 修复 LUKS 加密磁盘 | LUKS | flag{c4cc1c35-1e90-43df-aa29-4914f55978e1} | xf1les | 文件较大，使用外链，不用上传到平台 |
| 11 | Easy_C51 | 中等 | 模拟电路仿真 | 不知道通上电会发生什么呢［狗头］ | flag{Hi_t0_C51} |  |  |
| 12 | secret | 简单 | 内存取证 | 李警官收缴了一名犯罪嫌疑人吴某的手提电脑, 你能找到藏在电脑里的关键信息吗? | flag{c779d8c2-2706-464f-b466-5f8ccf3cf9fe} | lakwsh | 使用外链 |

## 2. WEB:

| 序号 | 名称 | 难度 | 考点 | 描述 | flag | 出题人 | 备注 |
| :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: |
| 1 | baby-sql | 容易 | sql注入 | 注就完事了... | flag{9d5ae6b83c7ad5703872574e49aaf6f0} | misaka | 需要部署(部署时注意调整`build/www/index.php`中的hostip并对外关闭`4000`端口) |
| 2 | baby-unserialize | 中等 | 反序列化 | 一道简单的反序列(: | flag{f44973d81697b67b26e2a357f537dc3b} | misaka | 需要部署 |
| 3 | baby-upload | 容易 | 文件上传 | 传就完事了... | flag{fcc9fbd1d19b3de78b7346bbb005d0d5} | misaka | 需要部署 |
| 4 | checkin | 容易 | md5强类型 | 来,签个到(: | ctf{Good_Luck_Have_Fun!} | misaka | 需要部署 |
| 5 | easy-sql | 容易 | sql注入 | 我有waf啦(: | flag{d7edeb1366bd99aa12d109c99267e37e} | misaka | 需要部署(部署时注意调整`build/www/index.php`中的hostip并对外关闭`4001`端口) |
| 6 | easy-unserialize | 中等 | 反序列字符串逃逸 | 一道不怎么简单的反序列(: | flag{e99eca072a432c54b84e18e5c5c62ef5} | misaka | 需要部署 |
| 7 | easy-upload | 容易 | 文件上传 | 你的文件后缀被我记在小本本上了(: | flag{b1ab8564a34adef4aaf542bfed45652c} | misaka | 需要部署 |
| 8 | ez-rce | 困难 | 无参数RCE | rce is so ez(: | flag{68ff971077c08515fdbbd83fac40fcb1} | misaka | 需要部署 |
| 9 | imgbed | 困难 | ffi bypass disalb function | Foreign Function Interface(: | flag{389f6784d8d9e35944001b6c2dd848cc} | misaka | 需要部署(部署时注意调整`build/www/class.php`中的hostip并对外关闭`4002`端口,令请参阅[部署.md](https://github.com/AMDyesIntelno/2021-jnu-ctf-web-imgbed/blob/master/%E9%83%A8%E7%BD%B2.md)) |
| 10 | easy_js | 容易 | js代码混淆 | 不会真有人点99999999下吧 | flag{ac24adc5685ff-f6402e80bc-6fb6ae59-62aa51fa} | tutu | 需要部署 |
| 11 | simple_php | 中等 | 源码泄露+webshell构造 | 你这shell保熟吗？ | flag{a3b5c6d-563ae31f-b6672e33ed-ff63a5b8} | tutu | 需要部署 |
| 12 | ezpop | 中等 | 1. 反序列化__wakeup()绕过 2. php抽象类反序列化 3. 命令执行绕过 | 听说你是pop大师！ | flag{Y0u_Ar3_A_POP_Ma5ter!!!!} | ABU | 需要部署 |
| 13 | ezPy | 容易 | python flask ssti模板注入 | 直接注就完了 | flag{Pyth0n_1s_1mp0rtant!!!!!} | ABU | 需要部署 |
| 14 | thinkphp | 容易 | thinkphp 5.0.23 rce | php最常见的框架，不会有人不知道吧| flag{ewyg_wyuf_ushg_dgds_dgfs!} | ABU | 需要部署 |
| 15 | PictureGenerator | 中等 | 代码审计+python os.system 命令注入 |  一个图片生成器，你能帮我读到flag吗？flag在根目录的/flag下| flag{fhfgufghui_ewftftdf_whfdweyidg_gafdhjasdh_eghfhef_rhgfjrikfu!!!!} | ABU | 需要部署 |

## 3. Reverse:

| 序号 | 名称 | 难度 | 考点 | 描述 | flag | 出题人 | 备注 |
| :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: |
| 0 | exclude_0 | 容易 | LD_PRELOAD hook function | One challenge called 0bf let me and JANlittle go crazy. I hate char '0' and my flag will never include '0'! never! Flag is flag{your_input} | flag{2637faec-2bee-97f6-caab-ec432af264ee} | cew | 热身赛题 |
| 1 | cpp_stl | 容易 | 1.stl的识别 2.位操作的还原 | Just one simple cpp challenge | flag{cefe4cd4-04e8-473a-8403-c0f9c0cef484} | cew ||
| 2 | gogogo | 容易 | 1.go逆向 2.base64编码、异或 | Just go | flag{69da7387-c810-48d0-ac22-c9a3477f5dff} | cew ||
| 3 | BrokenWindows | 容易 | 模除算法 (原型：Win95 序列号算法) | Break the windows | flag{e1c92253-97c3-4d87-a2bb-b2462d1477ad} | xf1les | 需要部署 |
| 4 | signin | 容易 | mba | 真·签到，只不过你需要小小的guess，比如:4∗(¬x∧y)−(x⊕y)−(x∨y)+4∗¬(x∨y)−¬(x⊕y)−¬y−(x∨¬y)+1+6∗x+5∗¬z+(¬(x⊕z))−(x∨z)−2∗¬x−4∗(¬(x∨z))−4∗(x∧¬z)+3∗(¬(x∨¬z)) = x + y | flag{welcome_to_Re_world!} | JANlittle |  |
| 5 | crazy_enc | 容易 | aes+rc4+tea | The art of encryption. 你能准确识别每个算法吗？ | flag{aa8e45738c8e50962ecf37beb89c4a46} | JANlittle |  |
| 6 | damn_hash | 容易 | apk、hash crack | This one is damn hash, maybe there will be more rev chall of damn series? flag is flag{your_input} | flag{uJrSR6oDnfb0W54O1lZwqgAhPijdt9FY} | cew | |
| 7 | mypyd | 困难 | PyInstaller还原 + pyd逆向 | Freshman will learn c or python on their first semester, why not combine c with python? | flag{da4e48ff-311e-4750-a1ce-a211585ce88c} | lakwsh ||
| 8 | baby_intel | 困难 | intel sse2指令集 | AMD YES! INTEL NO! | flag{7779139f-d024-4773-965c-ac0da5238f4e} | misaka ||
| 9 | damn_rust | 困难 | rust | Rust is the best language in the world. Flag is flag{output}, not fffflag{output}</br>If you can't run, try docker run -it ubuntu:21.04 | flag{uJrSR6oDnfb0W54O1lZwqgAhPijdt9FY} | cew | |

## 4. Crypto:

| 序号 |      名称      | 难度 |                     考点                     |                             描述                             |                             flag                             | 出题人 | 备注 |
| :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: |
|  0   |    treasure    | 简单 |  ROT13+栅栏,摩斯,词频攻击,base套娃,键盘密码  |                       k1rit0 love SAO.                       | flag{8a1ff09fce645f7<br />aa63f634b75a3fd<br />43b766111ccd4e6dfd0<br />3a7d049382e6bc4} | k1rit0 |
|  1   |    RSAStudy    | 简单 | 1. RSA基本流程 2. 大整数分解 3. 加密指数过小 | k1rit0 says "if you love Crypto, you will love RSA too!". Why? Because RSA is really simple, and k1rit0 only can solve simple problem. The format of flag : "m1 m2 m3 m4" (don't forget the spaces!!!) | flag{if you miss the train I'm on, You will know that I am gone} | k1rit0 |
|  2   |   RSAStudy2    | 简单 |               wiener's attack                | Winter wInter wintEr wiNter wintEr winteR are so cold, right? |          flag{I see your monster, I see your pain}           | k1rit0 |
|  3   |   RSAStudy3    | 困难 |          Extending wiener‘s attack           | Winter wInter wintEr wiNter wintEr winteR Winter wInter wintEr wiNter wintEr winteR are so cold, right? |       flag{I'll be fuck up if you can't be right here        | k1rit0 |
|  4   | DoUKonwLattice | 中等 |                   背包问题                   |     I have a backpack. Do you know backpack or lattice?      |             flag{I've been reading books of old}             | k1rit0 |


## 5. PWN:

| 序号 | 名称 | 难度 | 考点 | 描述 | flag | 出题人 | 备注 |
| :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: |
| 0 | div_overflow | 容易 | 除法溢出、栈溢出劫持返回地址 | 我怎么感觉我没学过除法？ | flag{DIvSiOn_So_EAsy_YeS_vwtub468} | c1ark ||
| 1 | guess | 容易 | 伪随机数爆破，简单的shellcode | 欢迎来到霍格沃兹魔法学校，你不好奇你能学会什么咒语吗？反汇编失败是我施加的咒语，通过汇编你能看懂我施加的咒语吗? | flag{Weclo0me_gEn1u4_Ma8ic1aN} | c1ark ||
| 2 | gift | 中等 | 1、格式化字符串漏洞泄露数据绕过canary保护，PIE保护。2、开了沙盒，ban掉了execve系统调用，需要orw。3、栈迁移 | 送你一份礼物，祝你好运！ | flag{gO0d_luck_751nvqirw} | c1ark ||
| 3 | H.E.A.P | 困难 | UAF 或者 Double Free | High vulnErability hAckable Program | flag{c05d229b-37b8-4886-9c16-1b1f484b4164} | xf1les ||
| 4 | BasicMath | 容易 | 整数溢出<br/>栈溢出 | Welcome to B〇〇di's Basics in Binary Exploitation Education and Learning! That's me! | flag{GoTta_SwEEp_sweEP_SWEeP_GotTA_sWeeP_SwEep_SWeEP_GOTta_sWeeP_SWEEp_sWEep} | xf1les ||
| 5 | easyheap | 困难 | tea + Double Free | 一杯茶一道判断题 | flag{4f0649ce-65ac-4521-9c83-961a3eec543b} | lakwsh ||
| 6 | babystack | 中等 | 异构pwn、格式化字符串、栈溢出 | ARM架构了解一下:) | flag{4RmPw^_5O0o_1asY_L483sHhh!} | lakwsh ||
