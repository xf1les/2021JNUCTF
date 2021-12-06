pair_num = 1000

for i in range(pair_num):
    if i == 736: # target
        print('''
void __attribute__ ((constructor)) flag{}_is_here() {{
    g_flag_holder[{}][8] = '-';
    g_flag_holder[{}][13] = '-';
    g_flag_holder[{}][18] = '-';
    g_flag_holder[{}][23] = '-';

    // g_0_idx = rand() % 36;
    // while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx != 23){{
    //     g_0_idx = rand() % 36;
    // }}
    // g_flag_holder[{}][g_0_idx] = '0';

    for(int i=0; i<36; i++){{
        if(i == 8 || i == 13 || i == 18 || i == 23) continue;
        g_flag_holder[{}][i] = g_dic[rand() % 15];
    }}
    puts(g_flag_holder[{}]);
}}
'''.format(i, i, i, i, i, i, i, i))
    else:
        print('''
void __attribute__ ((constructor)) flag{}_is_here() {{
    g_flag_holder[{}][8] = '-';
    g_flag_holder[{}][13] = '-';
    g_flag_holder[{}][18] = '-';
    g_flag_holder[{}][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx != 23){{
        g_0_idx = rand() % 36;
    }}
    g_flag_holder[{}][g_0_idx] = '0';

    for(int i=0; i<36; i++){{
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[{}][i] = g_dic[rand() % 16];
    }}
}}
'''.format(i, i, i, i, i, i, i))


for i in range(pair_num):
    print('''
void __attribute__ ((constructor)) flag{}_maybe_true() {{
    if(!memcmp(g_input_flag, g_flag_holder[{}], 36)) {{
        g_you_get_flag = 1;
    }}
}}
'''.format(i, i))