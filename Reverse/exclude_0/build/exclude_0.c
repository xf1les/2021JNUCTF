#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// 2637faec-2bee-97f6-caab-ec432af264ee

char g_dic[16] = {49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102};
char g_flag_holder[1000][37] = {};
char g_input_flag[37] = {0};
char g_0_idx = 0;
char g_you_get_flag = 0;

void __attribute__ ((constructor)) ctor_handle_input() {
    srand(0x58703069);
    puts("Let's Start!");
    scanf("%36s", g_input_flag);
    // printf("%s", input_buf);
}


void __attribute__ ((constructor)) flag0_is_here() {
    g_flag_holder[0][8] = '-';
    g_flag_holder[0][13] = '-';
    g_flag_holder[0][18] = '-';
    g_flag_holder[0][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[0][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[0][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag1_is_here() {
    g_flag_holder[1][8] = '-';
    g_flag_holder[1][13] = '-';
    g_flag_holder[1][18] = '-';
    g_flag_holder[1][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[1][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[1][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag2_is_here() {
    g_flag_holder[2][8] = '-';
    g_flag_holder[2][13] = '-';
    g_flag_holder[2][18] = '-';
    g_flag_holder[2][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[2][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[2][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag3_is_here() {
    g_flag_holder[3][8] = '-';
    g_flag_holder[3][13] = '-';
    g_flag_holder[3][18] = '-';
    g_flag_holder[3][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[3][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[3][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag4_is_here() {
    g_flag_holder[4][8] = '-';
    g_flag_holder[4][13] = '-';
    g_flag_holder[4][18] = '-';
    g_flag_holder[4][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[4][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[4][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag5_is_here() {
    g_flag_holder[5][8] = '-';
    g_flag_holder[5][13] = '-';
    g_flag_holder[5][18] = '-';
    g_flag_holder[5][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[5][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[5][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag6_is_here() {
    g_flag_holder[6][8] = '-';
    g_flag_holder[6][13] = '-';
    g_flag_holder[6][18] = '-';
    g_flag_holder[6][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[6][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[6][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag7_is_here() {
    g_flag_holder[7][8] = '-';
    g_flag_holder[7][13] = '-';
    g_flag_holder[7][18] = '-';
    g_flag_holder[7][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[7][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[7][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag8_is_here() {
    g_flag_holder[8][8] = '-';
    g_flag_holder[8][13] = '-';
    g_flag_holder[8][18] = '-';
    g_flag_holder[8][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[8][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[8][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag9_is_here() {
    g_flag_holder[9][8] = '-';
    g_flag_holder[9][13] = '-';
    g_flag_holder[9][18] = '-';
    g_flag_holder[9][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[9][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[9][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag10_is_here() {
    g_flag_holder[10][8] = '-';
    g_flag_holder[10][13] = '-';
    g_flag_holder[10][18] = '-';
    g_flag_holder[10][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[10][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[10][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag11_is_here() {
    g_flag_holder[11][8] = '-';
    g_flag_holder[11][13] = '-';
    g_flag_holder[11][18] = '-';
    g_flag_holder[11][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[11][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[11][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag12_is_here() {
    g_flag_holder[12][8] = '-';
    g_flag_holder[12][13] = '-';
    g_flag_holder[12][18] = '-';
    g_flag_holder[12][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[12][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[12][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag13_is_here() {
    g_flag_holder[13][8] = '-';
    g_flag_holder[13][13] = '-';
    g_flag_holder[13][18] = '-';
    g_flag_holder[13][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[13][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[13][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag14_is_here() {
    g_flag_holder[14][8] = '-';
    g_flag_holder[14][13] = '-';
    g_flag_holder[14][18] = '-';
    g_flag_holder[14][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[14][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[14][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag15_is_here() {
    g_flag_holder[15][8] = '-';
    g_flag_holder[15][13] = '-';
    g_flag_holder[15][18] = '-';
    g_flag_holder[15][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[15][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[15][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag16_is_here() {
    g_flag_holder[16][8] = '-';
    g_flag_holder[16][13] = '-';
    g_flag_holder[16][18] = '-';
    g_flag_holder[16][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[16][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[16][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag17_is_here() {
    g_flag_holder[17][8] = '-';
    g_flag_holder[17][13] = '-';
    g_flag_holder[17][18] = '-';
    g_flag_holder[17][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[17][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[17][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag18_is_here() {
    g_flag_holder[18][8] = '-';
    g_flag_holder[18][13] = '-';
    g_flag_holder[18][18] = '-';
    g_flag_holder[18][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[18][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[18][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag19_is_here() {
    g_flag_holder[19][8] = '-';
    g_flag_holder[19][13] = '-';
    g_flag_holder[19][18] = '-';
    g_flag_holder[19][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[19][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[19][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag20_is_here() {
    g_flag_holder[20][8] = '-';
    g_flag_holder[20][13] = '-';
    g_flag_holder[20][18] = '-';
    g_flag_holder[20][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[20][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[20][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag21_is_here() {
    g_flag_holder[21][8] = '-';
    g_flag_holder[21][13] = '-';
    g_flag_holder[21][18] = '-';
    g_flag_holder[21][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[21][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[21][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag22_is_here() {
    g_flag_holder[22][8] = '-';
    g_flag_holder[22][13] = '-';
    g_flag_holder[22][18] = '-';
    g_flag_holder[22][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[22][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[22][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag23_is_here() {
    g_flag_holder[23][8] = '-';
    g_flag_holder[23][13] = '-';
    g_flag_holder[23][18] = '-';
    g_flag_holder[23][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[23][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[23][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag24_is_here() {
    g_flag_holder[24][8] = '-';
    g_flag_holder[24][13] = '-';
    g_flag_holder[24][18] = '-';
    g_flag_holder[24][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[24][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[24][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag25_is_here() {
    g_flag_holder[25][8] = '-';
    g_flag_holder[25][13] = '-';
    g_flag_holder[25][18] = '-';
    g_flag_holder[25][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[25][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[25][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag26_is_here() {
    g_flag_holder[26][8] = '-';
    g_flag_holder[26][13] = '-';
    g_flag_holder[26][18] = '-';
    g_flag_holder[26][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[26][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[26][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag27_is_here() {
    g_flag_holder[27][8] = '-';
    g_flag_holder[27][13] = '-';
    g_flag_holder[27][18] = '-';
    g_flag_holder[27][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[27][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[27][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag28_is_here() {
    g_flag_holder[28][8] = '-';
    g_flag_holder[28][13] = '-';
    g_flag_holder[28][18] = '-';
    g_flag_holder[28][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[28][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[28][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag29_is_here() {
    g_flag_holder[29][8] = '-';
    g_flag_holder[29][13] = '-';
    g_flag_holder[29][18] = '-';
    g_flag_holder[29][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[29][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[29][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag30_is_here() {
    g_flag_holder[30][8] = '-';
    g_flag_holder[30][13] = '-';
    g_flag_holder[30][18] = '-';
    g_flag_holder[30][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[30][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[30][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag31_is_here() {
    g_flag_holder[31][8] = '-';
    g_flag_holder[31][13] = '-';
    g_flag_holder[31][18] = '-';
    g_flag_holder[31][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[31][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[31][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag32_is_here() {
    g_flag_holder[32][8] = '-';
    g_flag_holder[32][13] = '-';
    g_flag_holder[32][18] = '-';
    g_flag_holder[32][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[32][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[32][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag33_is_here() {
    g_flag_holder[33][8] = '-';
    g_flag_holder[33][13] = '-';
    g_flag_holder[33][18] = '-';
    g_flag_holder[33][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[33][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[33][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag34_is_here() {
    g_flag_holder[34][8] = '-';
    g_flag_holder[34][13] = '-';
    g_flag_holder[34][18] = '-';
    g_flag_holder[34][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[34][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[34][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag35_is_here() {
    g_flag_holder[35][8] = '-';
    g_flag_holder[35][13] = '-';
    g_flag_holder[35][18] = '-';
    g_flag_holder[35][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[35][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[35][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag36_is_here() {
    g_flag_holder[36][8] = '-';
    g_flag_holder[36][13] = '-';
    g_flag_holder[36][18] = '-';
    g_flag_holder[36][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[36][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[36][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag37_is_here() {
    g_flag_holder[37][8] = '-';
    g_flag_holder[37][13] = '-';
    g_flag_holder[37][18] = '-';
    g_flag_holder[37][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[37][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[37][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag38_is_here() {
    g_flag_holder[38][8] = '-';
    g_flag_holder[38][13] = '-';
    g_flag_holder[38][18] = '-';
    g_flag_holder[38][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[38][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[38][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag39_is_here() {
    g_flag_holder[39][8] = '-';
    g_flag_holder[39][13] = '-';
    g_flag_holder[39][18] = '-';
    g_flag_holder[39][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[39][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[39][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag40_is_here() {
    g_flag_holder[40][8] = '-';
    g_flag_holder[40][13] = '-';
    g_flag_holder[40][18] = '-';
    g_flag_holder[40][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[40][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[40][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag41_is_here() {
    g_flag_holder[41][8] = '-';
    g_flag_holder[41][13] = '-';
    g_flag_holder[41][18] = '-';
    g_flag_holder[41][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[41][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[41][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag42_is_here() {
    g_flag_holder[42][8] = '-';
    g_flag_holder[42][13] = '-';
    g_flag_holder[42][18] = '-';
    g_flag_holder[42][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[42][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[42][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag43_is_here() {
    g_flag_holder[43][8] = '-';
    g_flag_holder[43][13] = '-';
    g_flag_holder[43][18] = '-';
    g_flag_holder[43][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[43][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[43][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag44_is_here() {
    g_flag_holder[44][8] = '-';
    g_flag_holder[44][13] = '-';
    g_flag_holder[44][18] = '-';
    g_flag_holder[44][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[44][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[44][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag45_is_here() {
    g_flag_holder[45][8] = '-';
    g_flag_holder[45][13] = '-';
    g_flag_holder[45][18] = '-';
    g_flag_holder[45][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[45][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[45][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag46_is_here() {
    g_flag_holder[46][8] = '-';
    g_flag_holder[46][13] = '-';
    g_flag_holder[46][18] = '-';
    g_flag_holder[46][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[46][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[46][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag47_is_here() {
    g_flag_holder[47][8] = '-';
    g_flag_holder[47][13] = '-';
    g_flag_holder[47][18] = '-';
    g_flag_holder[47][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[47][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[47][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag48_is_here() {
    g_flag_holder[48][8] = '-';
    g_flag_holder[48][13] = '-';
    g_flag_holder[48][18] = '-';
    g_flag_holder[48][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[48][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[48][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag49_is_here() {
    g_flag_holder[49][8] = '-';
    g_flag_holder[49][13] = '-';
    g_flag_holder[49][18] = '-';
    g_flag_holder[49][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[49][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[49][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag50_is_here() {
    g_flag_holder[50][8] = '-';
    g_flag_holder[50][13] = '-';
    g_flag_holder[50][18] = '-';
    g_flag_holder[50][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[50][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[50][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag51_is_here() {
    g_flag_holder[51][8] = '-';
    g_flag_holder[51][13] = '-';
    g_flag_holder[51][18] = '-';
    g_flag_holder[51][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[51][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[51][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag52_is_here() {
    g_flag_holder[52][8] = '-';
    g_flag_holder[52][13] = '-';
    g_flag_holder[52][18] = '-';
    g_flag_holder[52][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[52][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[52][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag53_is_here() {
    g_flag_holder[53][8] = '-';
    g_flag_holder[53][13] = '-';
    g_flag_holder[53][18] = '-';
    g_flag_holder[53][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[53][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[53][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag54_is_here() {
    g_flag_holder[54][8] = '-';
    g_flag_holder[54][13] = '-';
    g_flag_holder[54][18] = '-';
    g_flag_holder[54][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[54][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[54][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag55_is_here() {
    g_flag_holder[55][8] = '-';
    g_flag_holder[55][13] = '-';
    g_flag_holder[55][18] = '-';
    g_flag_holder[55][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[55][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[55][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag56_is_here() {
    g_flag_holder[56][8] = '-';
    g_flag_holder[56][13] = '-';
    g_flag_holder[56][18] = '-';
    g_flag_holder[56][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[56][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[56][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag57_is_here() {
    g_flag_holder[57][8] = '-';
    g_flag_holder[57][13] = '-';
    g_flag_holder[57][18] = '-';
    g_flag_holder[57][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[57][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[57][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag58_is_here() {
    g_flag_holder[58][8] = '-';
    g_flag_holder[58][13] = '-';
    g_flag_holder[58][18] = '-';
    g_flag_holder[58][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[58][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[58][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag59_is_here() {
    g_flag_holder[59][8] = '-';
    g_flag_holder[59][13] = '-';
    g_flag_holder[59][18] = '-';
    g_flag_holder[59][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[59][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[59][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag60_is_here() {
    g_flag_holder[60][8] = '-';
    g_flag_holder[60][13] = '-';
    g_flag_holder[60][18] = '-';
    g_flag_holder[60][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[60][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[60][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag61_is_here() {
    g_flag_holder[61][8] = '-';
    g_flag_holder[61][13] = '-';
    g_flag_holder[61][18] = '-';
    g_flag_holder[61][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[61][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[61][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag62_is_here() {
    g_flag_holder[62][8] = '-';
    g_flag_holder[62][13] = '-';
    g_flag_holder[62][18] = '-';
    g_flag_holder[62][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[62][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[62][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag63_is_here() {
    g_flag_holder[63][8] = '-';
    g_flag_holder[63][13] = '-';
    g_flag_holder[63][18] = '-';
    g_flag_holder[63][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[63][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[63][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag64_is_here() {
    g_flag_holder[64][8] = '-';
    g_flag_holder[64][13] = '-';
    g_flag_holder[64][18] = '-';
    g_flag_holder[64][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[64][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[64][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag65_is_here() {
    g_flag_holder[65][8] = '-';
    g_flag_holder[65][13] = '-';
    g_flag_holder[65][18] = '-';
    g_flag_holder[65][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[65][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[65][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag66_is_here() {
    g_flag_holder[66][8] = '-';
    g_flag_holder[66][13] = '-';
    g_flag_holder[66][18] = '-';
    g_flag_holder[66][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[66][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[66][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag67_is_here() {
    g_flag_holder[67][8] = '-';
    g_flag_holder[67][13] = '-';
    g_flag_holder[67][18] = '-';
    g_flag_holder[67][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[67][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[67][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag68_is_here() {
    g_flag_holder[68][8] = '-';
    g_flag_holder[68][13] = '-';
    g_flag_holder[68][18] = '-';
    g_flag_holder[68][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[68][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[68][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag69_is_here() {
    g_flag_holder[69][8] = '-';
    g_flag_holder[69][13] = '-';
    g_flag_holder[69][18] = '-';
    g_flag_holder[69][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[69][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[69][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag70_is_here() {
    g_flag_holder[70][8] = '-';
    g_flag_holder[70][13] = '-';
    g_flag_holder[70][18] = '-';
    g_flag_holder[70][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[70][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[70][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag71_is_here() {
    g_flag_holder[71][8] = '-';
    g_flag_holder[71][13] = '-';
    g_flag_holder[71][18] = '-';
    g_flag_holder[71][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[71][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[71][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag72_is_here() {
    g_flag_holder[72][8] = '-';
    g_flag_holder[72][13] = '-';
    g_flag_holder[72][18] = '-';
    g_flag_holder[72][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[72][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[72][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag73_is_here() {
    g_flag_holder[73][8] = '-';
    g_flag_holder[73][13] = '-';
    g_flag_holder[73][18] = '-';
    g_flag_holder[73][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[73][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[73][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag74_is_here() {
    g_flag_holder[74][8] = '-';
    g_flag_holder[74][13] = '-';
    g_flag_holder[74][18] = '-';
    g_flag_holder[74][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[74][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[74][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag75_is_here() {
    g_flag_holder[75][8] = '-';
    g_flag_holder[75][13] = '-';
    g_flag_holder[75][18] = '-';
    g_flag_holder[75][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[75][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[75][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag76_is_here() {
    g_flag_holder[76][8] = '-';
    g_flag_holder[76][13] = '-';
    g_flag_holder[76][18] = '-';
    g_flag_holder[76][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[76][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[76][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag77_is_here() {
    g_flag_holder[77][8] = '-';
    g_flag_holder[77][13] = '-';
    g_flag_holder[77][18] = '-';
    g_flag_holder[77][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[77][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[77][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag78_is_here() {
    g_flag_holder[78][8] = '-';
    g_flag_holder[78][13] = '-';
    g_flag_holder[78][18] = '-';
    g_flag_holder[78][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[78][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[78][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag79_is_here() {
    g_flag_holder[79][8] = '-';
    g_flag_holder[79][13] = '-';
    g_flag_holder[79][18] = '-';
    g_flag_holder[79][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[79][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[79][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag80_is_here() {
    g_flag_holder[80][8] = '-';
    g_flag_holder[80][13] = '-';
    g_flag_holder[80][18] = '-';
    g_flag_holder[80][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[80][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[80][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag81_is_here() {
    g_flag_holder[81][8] = '-';
    g_flag_holder[81][13] = '-';
    g_flag_holder[81][18] = '-';
    g_flag_holder[81][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[81][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[81][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag82_is_here() {
    g_flag_holder[82][8] = '-';
    g_flag_holder[82][13] = '-';
    g_flag_holder[82][18] = '-';
    g_flag_holder[82][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[82][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[82][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag83_is_here() {
    g_flag_holder[83][8] = '-';
    g_flag_holder[83][13] = '-';
    g_flag_holder[83][18] = '-';
    g_flag_holder[83][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[83][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[83][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag84_is_here() {
    g_flag_holder[84][8] = '-';
    g_flag_holder[84][13] = '-';
    g_flag_holder[84][18] = '-';
    g_flag_holder[84][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[84][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[84][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag85_is_here() {
    g_flag_holder[85][8] = '-';
    g_flag_holder[85][13] = '-';
    g_flag_holder[85][18] = '-';
    g_flag_holder[85][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[85][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[85][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag86_is_here() {
    g_flag_holder[86][8] = '-';
    g_flag_holder[86][13] = '-';
    g_flag_holder[86][18] = '-';
    g_flag_holder[86][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[86][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[86][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag87_is_here() {
    g_flag_holder[87][8] = '-';
    g_flag_holder[87][13] = '-';
    g_flag_holder[87][18] = '-';
    g_flag_holder[87][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[87][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[87][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag88_is_here() {
    g_flag_holder[88][8] = '-';
    g_flag_holder[88][13] = '-';
    g_flag_holder[88][18] = '-';
    g_flag_holder[88][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[88][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[88][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag89_is_here() {
    g_flag_holder[89][8] = '-';
    g_flag_holder[89][13] = '-';
    g_flag_holder[89][18] = '-';
    g_flag_holder[89][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[89][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[89][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag90_is_here() {
    g_flag_holder[90][8] = '-';
    g_flag_holder[90][13] = '-';
    g_flag_holder[90][18] = '-';
    g_flag_holder[90][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[90][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[90][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag91_is_here() {
    g_flag_holder[91][8] = '-';
    g_flag_holder[91][13] = '-';
    g_flag_holder[91][18] = '-';
    g_flag_holder[91][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[91][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[91][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag92_is_here() {
    g_flag_holder[92][8] = '-';
    g_flag_holder[92][13] = '-';
    g_flag_holder[92][18] = '-';
    g_flag_holder[92][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[92][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[92][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag93_is_here() {
    g_flag_holder[93][8] = '-';
    g_flag_holder[93][13] = '-';
    g_flag_holder[93][18] = '-';
    g_flag_holder[93][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[93][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[93][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag94_is_here() {
    g_flag_holder[94][8] = '-';
    g_flag_holder[94][13] = '-';
    g_flag_holder[94][18] = '-';
    g_flag_holder[94][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[94][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[94][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag95_is_here() {
    g_flag_holder[95][8] = '-';
    g_flag_holder[95][13] = '-';
    g_flag_holder[95][18] = '-';
    g_flag_holder[95][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[95][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[95][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag96_is_here() {
    g_flag_holder[96][8] = '-';
    g_flag_holder[96][13] = '-';
    g_flag_holder[96][18] = '-';
    g_flag_holder[96][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[96][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[96][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag97_is_here() {
    g_flag_holder[97][8] = '-';
    g_flag_holder[97][13] = '-';
    g_flag_holder[97][18] = '-';
    g_flag_holder[97][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[97][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[97][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag98_is_here() {
    g_flag_holder[98][8] = '-';
    g_flag_holder[98][13] = '-';
    g_flag_holder[98][18] = '-';
    g_flag_holder[98][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[98][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[98][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag99_is_here() {
    g_flag_holder[99][8] = '-';
    g_flag_holder[99][13] = '-';
    g_flag_holder[99][18] = '-';
    g_flag_holder[99][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[99][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[99][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag100_is_here() {
    g_flag_holder[100][8] = '-';
    g_flag_holder[100][13] = '-';
    g_flag_holder[100][18] = '-';
    g_flag_holder[100][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[100][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[100][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag101_is_here() {
    g_flag_holder[101][8] = '-';
    g_flag_holder[101][13] = '-';
    g_flag_holder[101][18] = '-';
    g_flag_holder[101][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[101][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[101][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag102_is_here() {
    g_flag_holder[102][8] = '-';
    g_flag_holder[102][13] = '-';
    g_flag_holder[102][18] = '-';
    g_flag_holder[102][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[102][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[102][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag103_is_here() {
    g_flag_holder[103][8] = '-';
    g_flag_holder[103][13] = '-';
    g_flag_holder[103][18] = '-';
    g_flag_holder[103][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[103][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[103][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag104_is_here() {
    g_flag_holder[104][8] = '-';
    g_flag_holder[104][13] = '-';
    g_flag_holder[104][18] = '-';
    g_flag_holder[104][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[104][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[104][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag105_is_here() {
    g_flag_holder[105][8] = '-';
    g_flag_holder[105][13] = '-';
    g_flag_holder[105][18] = '-';
    g_flag_holder[105][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[105][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[105][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag106_is_here() {
    g_flag_holder[106][8] = '-';
    g_flag_holder[106][13] = '-';
    g_flag_holder[106][18] = '-';
    g_flag_holder[106][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[106][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[106][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag107_is_here() {
    g_flag_holder[107][8] = '-';
    g_flag_holder[107][13] = '-';
    g_flag_holder[107][18] = '-';
    g_flag_holder[107][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[107][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[107][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag108_is_here() {
    g_flag_holder[108][8] = '-';
    g_flag_holder[108][13] = '-';
    g_flag_holder[108][18] = '-';
    g_flag_holder[108][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[108][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[108][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag109_is_here() {
    g_flag_holder[109][8] = '-';
    g_flag_holder[109][13] = '-';
    g_flag_holder[109][18] = '-';
    g_flag_holder[109][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[109][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[109][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag110_is_here() {
    g_flag_holder[110][8] = '-';
    g_flag_holder[110][13] = '-';
    g_flag_holder[110][18] = '-';
    g_flag_holder[110][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[110][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[110][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag111_is_here() {
    g_flag_holder[111][8] = '-';
    g_flag_holder[111][13] = '-';
    g_flag_holder[111][18] = '-';
    g_flag_holder[111][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[111][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[111][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag112_is_here() {
    g_flag_holder[112][8] = '-';
    g_flag_holder[112][13] = '-';
    g_flag_holder[112][18] = '-';
    g_flag_holder[112][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[112][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[112][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag113_is_here() {
    g_flag_holder[113][8] = '-';
    g_flag_holder[113][13] = '-';
    g_flag_holder[113][18] = '-';
    g_flag_holder[113][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[113][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[113][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag114_is_here() {
    g_flag_holder[114][8] = '-';
    g_flag_holder[114][13] = '-';
    g_flag_holder[114][18] = '-';
    g_flag_holder[114][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[114][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[114][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag115_is_here() {
    g_flag_holder[115][8] = '-';
    g_flag_holder[115][13] = '-';
    g_flag_holder[115][18] = '-';
    g_flag_holder[115][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[115][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[115][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag116_is_here() {
    g_flag_holder[116][8] = '-';
    g_flag_holder[116][13] = '-';
    g_flag_holder[116][18] = '-';
    g_flag_holder[116][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[116][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[116][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag117_is_here() {
    g_flag_holder[117][8] = '-';
    g_flag_holder[117][13] = '-';
    g_flag_holder[117][18] = '-';
    g_flag_holder[117][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[117][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[117][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag118_is_here() {
    g_flag_holder[118][8] = '-';
    g_flag_holder[118][13] = '-';
    g_flag_holder[118][18] = '-';
    g_flag_holder[118][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[118][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[118][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag119_is_here() {
    g_flag_holder[119][8] = '-';
    g_flag_holder[119][13] = '-';
    g_flag_holder[119][18] = '-';
    g_flag_holder[119][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[119][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[119][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag120_is_here() {
    g_flag_holder[120][8] = '-';
    g_flag_holder[120][13] = '-';
    g_flag_holder[120][18] = '-';
    g_flag_holder[120][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[120][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[120][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag121_is_here() {
    g_flag_holder[121][8] = '-';
    g_flag_holder[121][13] = '-';
    g_flag_holder[121][18] = '-';
    g_flag_holder[121][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[121][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[121][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag122_is_here() {
    g_flag_holder[122][8] = '-';
    g_flag_holder[122][13] = '-';
    g_flag_holder[122][18] = '-';
    g_flag_holder[122][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[122][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[122][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag123_is_here() {
    g_flag_holder[123][8] = '-';
    g_flag_holder[123][13] = '-';
    g_flag_holder[123][18] = '-';
    g_flag_holder[123][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[123][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[123][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag124_is_here() {
    g_flag_holder[124][8] = '-';
    g_flag_holder[124][13] = '-';
    g_flag_holder[124][18] = '-';
    g_flag_holder[124][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[124][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[124][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag125_is_here() {
    g_flag_holder[125][8] = '-';
    g_flag_holder[125][13] = '-';
    g_flag_holder[125][18] = '-';
    g_flag_holder[125][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[125][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[125][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag126_is_here() {
    g_flag_holder[126][8] = '-';
    g_flag_holder[126][13] = '-';
    g_flag_holder[126][18] = '-';
    g_flag_holder[126][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[126][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[126][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag127_is_here() {
    g_flag_holder[127][8] = '-';
    g_flag_holder[127][13] = '-';
    g_flag_holder[127][18] = '-';
    g_flag_holder[127][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[127][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[127][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag128_is_here() {
    g_flag_holder[128][8] = '-';
    g_flag_holder[128][13] = '-';
    g_flag_holder[128][18] = '-';
    g_flag_holder[128][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[128][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[128][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag129_is_here() {
    g_flag_holder[129][8] = '-';
    g_flag_holder[129][13] = '-';
    g_flag_holder[129][18] = '-';
    g_flag_holder[129][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[129][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[129][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag130_is_here() {
    g_flag_holder[130][8] = '-';
    g_flag_holder[130][13] = '-';
    g_flag_holder[130][18] = '-';
    g_flag_holder[130][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[130][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[130][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag131_is_here() {
    g_flag_holder[131][8] = '-';
    g_flag_holder[131][13] = '-';
    g_flag_holder[131][18] = '-';
    g_flag_holder[131][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[131][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[131][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag132_is_here() {
    g_flag_holder[132][8] = '-';
    g_flag_holder[132][13] = '-';
    g_flag_holder[132][18] = '-';
    g_flag_holder[132][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[132][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[132][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag133_is_here() {
    g_flag_holder[133][8] = '-';
    g_flag_holder[133][13] = '-';
    g_flag_holder[133][18] = '-';
    g_flag_holder[133][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[133][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[133][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag134_is_here() {
    g_flag_holder[134][8] = '-';
    g_flag_holder[134][13] = '-';
    g_flag_holder[134][18] = '-';
    g_flag_holder[134][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[134][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[134][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag135_is_here() {
    g_flag_holder[135][8] = '-';
    g_flag_holder[135][13] = '-';
    g_flag_holder[135][18] = '-';
    g_flag_holder[135][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[135][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[135][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag136_is_here() {
    g_flag_holder[136][8] = '-';
    g_flag_holder[136][13] = '-';
    g_flag_holder[136][18] = '-';
    g_flag_holder[136][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[136][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[136][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag137_is_here() {
    g_flag_holder[137][8] = '-';
    g_flag_holder[137][13] = '-';
    g_flag_holder[137][18] = '-';
    g_flag_holder[137][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[137][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[137][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag138_is_here() {
    g_flag_holder[138][8] = '-';
    g_flag_holder[138][13] = '-';
    g_flag_holder[138][18] = '-';
    g_flag_holder[138][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[138][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[138][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag139_is_here() {
    g_flag_holder[139][8] = '-';
    g_flag_holder[139][13] = '-';
    g_flag_holder[139][18] = '-';
    g_flag_holder[139][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[139][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[139][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag140_is_here() {
    g_flag_holder[140][8] = '-';
    g_flag_holder[140][13] = '-';
    g_flag_holder[140][18] = '-';
    g_flag_holder[140][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[140][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[140][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag141_is_here() {
    g_flag_holder[141][8] = '-';
    g_flag_holder[141][13] = '-';
    g_flag_holder[141][18] = '-';
    g_flag_holder[141][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[141][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[141][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag142_is_here() {
    g_flag_holder[142][8] = '-';
    g_flag_holder[142][13] = '-';
    g_flag_holder[142][18] = '-';
    g_flag_holder[142][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[142][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[142][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag143_is_here() {
    g_flag_holder[143][8] = '-';
    g_flag_holder[143][13] = '-';
    g_flag_holder[143][18] = '-';
    g_flag_holder[143][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[143][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[143][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag144_is_here() {
    g_flag_holder[144][8] = '-';
    g_flag_holder[144][13] = '-';
    g_flag_holder[144][18] = '-';
    g_flag_holder[144][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[144][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[144][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag145_is_here() {
    g_flag_holder[145][8] = '-';
    g_flag_holder[145][13] = '-';
    g_flag_holder[145][18] = '-';
    g_flag_holder[145][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[145][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[145][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag146_is_here() {
    g_flag_holder[146][8] = '-';
    g_flag_holder[146][13] = '-';
    g_flag_holder[146][18] = '-';
    g_flag_holder[146][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[146][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[146][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag147_is_here() {
    g_flag_holder[147][8] = '-';
    g_flag_holder[147][13] = '-';
    g_flag_holder[147][18] = '-';
    g_flag_holder[147][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[147][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[147][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag148_is_here() {
    g_flag_holder[148][8] = '-';
    g_flag_holder[148][13] = '-';
    g_flag_holder[148][18] = '-';
    g_flag_holder[148][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[148][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[148][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag149_is_here() {
    g_flag_holder[149][8] = '-';
    g_flag_holder[149][13] = '-';
    g_flag_holder[149][18] = '-';
    g_flag_holder[149][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[149][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[149][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag150_is_here() {
    g_flag_holder[150][8] = '-';
    g_flag_holder[150][13] = '-';
    g_flag_holder[150][18] = '-';
    g_flag_holder[150][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[150][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[150][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag151_is_here() {
    g_flag_holder[151][8] = '-';
    g_flag_holder[151][13] = '-';
    g_flag_holder[151][18] = '-';
    g_flag_holder[151][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[151][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[151][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag152_is_here() {
    g_flag_holder[152][8] = '-';
    g_flag_holder[152][13] = '-';
    g_flag_holder[152][18] = '-';
    g_flag_holder[152][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[152][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[152][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag153_is_here() {
    g_flag_holder[153][8] = '-';
    g_flag_holder[153][13] = '-';
    g_flag_holder[153][18] = '-';
    g_flag_holder[153][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[153][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[153][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag154_is_here() {
    g_flag_holder[154][8] = '-';
    g_flag_holder[154][13] = '-';
    g_flag_holder[154][18] = '-';
    g_flag_holder[154][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[154][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[154][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag155_is_here() {
    g_flag_holder[155][8] = '-';
    g_flag_holder[155][13] = '-';
    g_flag_holder[155][18] = '-';
    g_flag_holder[155][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[155][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[155][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag156_is_here() {
    g_flag_holder[156][8] = '-';
    g_flag_holder[156][13] = '-';
    g_flag_holder[156][18] = '-';
    g_flag_holder[156][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[156][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[156][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag157_is_here() {
    g_flag_holder[157][8] = '-';
    g_flag_holder[157][13] = '-';
    g_flag_holder[157][18] = '-';
    g_flag_holder[157][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[157][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[157][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag158_is_here() {
    g_flag_holder[158][8] = '-';
    g_flag_holder[158][13] = '-';
    g_flag_holder[158][18] = '-';
    g_flag_holder[158][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[158][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[158][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag159_is_here() {
    g_flag_holder[159][8] = '-';
    g_flag_holder[159][13] = '-';
    g_flag_holder[159][18] = '-';
    g_flag_holder[159][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[159][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[159][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag160_is_here() {
    g_flag_holder[160][8] = '-';
    g_flag_holder[160][13] = '-';
    g_flag_holder[160][18] = '-';
    g_flag_holder[160][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[160][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[160][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag161_is_here() {
    g_flag_holder[161][8] = '-';
    g_flag_holder[161][13] = '-';
    g_flag_holder[161][18] = '-';
    g_flag_holder[161][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[161][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[161][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag162_is_here() {
    g_flag_holder[162][8] = '-';
    g_flag_holder[162][13] = '-';
    g_flag_holder[162][18] = '-';
    g_flag_holder[162][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[162][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[162][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag163_is_here() {
    g_flag_holder[163][8] = '-';
    g_flag_holder[163][13] = '-';
    g_flag_holder[163][18] = '-';
    g_flag_holder[163][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[163][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[163][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag164_is_here() {
    g_flag_holder[164][8] = '-';
    g_flag_holder[164][13] = '-';
    g_flag_holder[164][18] = '-';
    g_flag_holder[164][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[164][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[164][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag165_is_here() {
    g_flag_holder[165][8] = '-';
    g_flag_holder[165][13] = '-';
    g_flag_holder[165][18] = '-';
    g_flag_holder[165][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[165][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[165][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag166_is_here() {
    g_flag_holder[166][8] = '-';
    g_flag_holder[166][13] = '-';
    g_flag_holder[166][18] = '-';
    g_flag_holder[166][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[166][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[166][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag167_is_here() {
    g_flag_holder[167][8] = '-';
    g_flag_holder[167][13] = '-';
    g_flag_holder[167][18] = '-';
    g_flag_holder[167][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[167][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[167][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag168_is_here() {
    g_flag_holder[168][8] = '-';
    g_flag_holder[168][13] = '-';
    g_flag_holder[168][18] = '-';
    g_flag_holder[168][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[168][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[168][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag169_is_here() {
    g_flag_holder[169][8] = '-';
    g_flag_holder[169][13] = '-';
    g_flag_holder[169][18] = '-';
    g_flag_holder[169][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[169][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[169][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag170_is_here() {
    g_flag_holder[170][8] = '-';
    g_flag_holder[170][13] = '-';
    g_flag_holder[170][18] = '-';
    g_flag_holder[170][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[170][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[170][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag171_is_here() {
    g_flag_holder[171][8] = '-';
    g_flag_holder[171][13] = '-';
    g_flag_holder[171][18] = '-';
    g_flag_holder[171][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[171][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[171][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag172_is_here() {
    g_flag_holder[172][8] = '-';
    g_flag_holder[172][13] = '-';
    g_flag_holder[172][18] = '-';
    g_flag_holder[172][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[172][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[172][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag173_is_here() {
    g_flag_holder[173][8] = '-';
    g_flag_holder[173][13] = '-';
    g_flag_holder[173][18] = '-';
    g_flag_holder[173][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[173][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[173][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag174_is_here() {
    g_flag_holder[174][8] = '-';
    g_flag_holder[174][13] = '-';
    g_flag_holder[174][18] = '-';
    g_flag_holder[174][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[174][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[174][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag175_is_here() {
    g_flag_holder[175][8] = '-';
    g_flag_holder[175][13] = '-';
    g_flag_holder[175][18] = '-';
    g_flag_holder[175][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[175][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[175][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag176_is_here() {
    g_flag_holder[176][8] = '-';
    g_flag_holder[176][13] = '-';
    g_flag_holder[176][18] = '-';
    g_flag_holder[176][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[176][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[176][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag177_is_here() {
    g_flag_holder[177][8] = '-';
    g_flag_holder[177][13] = '-';
    g_flag_holder[177][18] = '-';
    g_flag_holder[177][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[177][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[177][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag178_is_here() {
    g_flag_holder[178][8] = '-';
    g_flag_holder[178][13] = '-';
    g_flag_holder[178][18] = '-';
    g_flag_holder[178][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[178][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[178][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag179_is_here() {
    g_flag_holder[179][8] = '-';
    g_flag_holder[179][13] = '-';
    g_flag_holder[179][18] = '-';
    g_flag_holder[179][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[179][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[179][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag180_is_here() {
    g_flag_holder[180][8] = '-';
    g_flag_holder[180][13] = '-';
    g_flag_holder[180][18] = '-';
    g_flag_holder[180][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[180][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[180][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag181_is_here() {
    g_flag_holder[181][8] = '-';
    g_flag_holder[181][13] = '-';
    g_flag_holder[181][18] = '-';
    g_flag_holder[181][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[181][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[181][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag182_is_here() {
    g_flag_holder[182][8] = '-';
    g_flag_holder[182][13] = '-';
    g_flag_holder[182][18] = '-';
    g_flag_holder[182][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[182][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[182][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag183_is_here() {
    g_flag_holder[183][8] = '-';
    g_flag_holder[183][13] = '-';
    g_flag_holder[183][18] = '-';
    g_flag_holder[183][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[183][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[183][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag184_is_here() {
    g_flag_holder[184][8] = '-';
    g_flag_holder[184][13] = '-';
    g_flag_holder[184][18] = '-';
    g_flag_holder[184][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[184][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[184][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag185_is_here() {
    g_flag_holder[185][8] = '-';
    g_flag_holder[185][13] = '-';
    g_flag_holder[185][18] = '-';
    g_flag_holder[185][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[185][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[185][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag186_is_here() {
    g_flag_holder[186][8] = '-';
    g_flag_holder[186][13] = '-';
    g_flag_holder[186][18] = '-';
    g_flag_holder[186][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[186][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[186][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag187_is_here() {
    g_flag_holder[187][8] = '-';
    g_flag_holder[187][13] = '-';
    g_flag_holder[187][18] = '-';
    g_flag_holder[187][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[187][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[187][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag188_is_here() {
    g_flag_holder[188][8] = '-';
    g_flag_holder[188][13] = '-';
    g_flag_holder[188][18] = '-';
    g_flag_holder[188][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[188][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[188][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag189_is_here() {
    g_flag_holder[189][8] = '-';
    g_flag_holder[189][13] = '-';
    g_flag_holder[189][18] = '-';
    g_flag_holder[189][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[189][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[189][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag190_is_here() {
    g_flag_holder[190][8] = '-';
    g_flag_holder[190][13] = '-';
    g_flag_holder[190][18] = '-';
    g_flag_holder[190][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[190][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[190][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag191_is_here() {
    g_flag_holder[191][8] = '-';
    g_flag_holder[191][13] = '-';
    g_flag_holder[191][18] = '-';
    g_flag_holder[191][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[191][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[191][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag192_is_here() {
    g_flag_holder[192][8] = '-';
    g_flag_holder[192][13] = '-';
    g_flag_holder[192][18] = '-';
    g_flag_holder[192][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[192][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[192][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag193_is_here() {
    g_flag_holder[193][8] = '-';
    g_flag_holder[193][13] = '-';
    g_flag_holder[193][18] = '-';
    g_flag_holder[193][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[193][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[193][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag194_is_here() {
    g_flag_holder[194][8] = '-';
    g_flag_holder[194][13] = '-';
    g_flag_holder[194][18] = '-';
    g_flag_holder[194][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[194][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[194][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag195_is_here() {
    g_flag_holder[195][8] = '-';
    g_flag_holder[195][13] = '-';
    g_flag_holder[195][18] = '-';
    g_flag_holder[195][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[195][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[195][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag196_is_here() {
    g_flag_holder[196][8] = '-';
    g_flag_holder[196][13] = '-';
    g_flag_holder[196][18] = '-';
    g_flag_holder[196][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[196][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[196][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag197_is_here() {
    g_flag_holder[197][8] = '-';
    g_flag_holder[197][13] = '-';
    g_flag_holder[197][18] = '-';
    g_flag_holder[197][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[197][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[197][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag198_is_here() {
    g_flag_holder[198][8] = '-';
    g_flag_holder[198][13] = '-';
    g_flag_holder[198][18] = '-';
    g_flag_holder[198][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[198][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[198][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag199_is_here() {
    g_flag_holder[199][8] = '-';
    g_flag_holder[199][13] = '-';
    g_flag_holder[199][18] = '-';
    g_flag_holder[199][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[199][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[199][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag200_is_here() {
    g_flag_holder[200][8] = '-';
    g_flag_holder[200][13] = '-';
    g_flag_holder[200][18] = '-';
    g_flag_holder[200][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[200][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[200][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag201_is_here() {
    g_flag_holder[201][8] = '-';
    g_flag_holder[201][13] = '-';
    g_flag_holder[201][18] = '-';
    g_flag_holder[201][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[201][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[201][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag202_is_here() {
    g_flag_holder[202][8] = '-';
    g_flag_holder[202][13] = '-';
    g_flag_holder[202][18] = '-';
    g_flag_holder[202][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[202][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[202][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag203_is_here() {
    g_flag_holder[203][8] = '-';
    g_flag_holder[203][13] = '-';
    g_flag_holder[203][18] = '-';
    g_flag_holder[203][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[203][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[203][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag204_is_here() {
    g_flag_holder[204][8] = '-';
    g_flag_holder[204][13] = '-';
    g_flag_holder[204][18] = '-';
    g_flag_holder[204][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[204][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[204][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag205_is_here() {
    g_flag_holder[205][8] = '-';
    g_flag_holder[205][13] = '-';
    g_flag_holder[205][18] = '-';
    g_flag_holder[205][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[205][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[205][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag206_is_here() {
    g_flag_holder[206][8] = '-';
    g_flag_holder[206][13] = '-';
    g_flag_holder[206][18] = '-';
    g_flag_holder[206][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[206][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[206][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag207_is_here() {
    g_flag_holder[207][8] = '-';
    g_flag_holder[207][13] = '-';
    g_flag_holder[207][18] = '-';
    g_flag_holder[207][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[207][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[207][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag208_is_here() {
    g_flag_holder[208][8] = '-';
    g_flag_holder[208][13] = '-';
    g_flag_holder[208][18] = '-';
    g_flag_holder[208][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[208][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[208][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag209_is_here() {
    g_flag_holder[209][8] = '-';
    g_flag_holder[209][13] = '-';
    g_flag_holder[209][18] = '-';
    g_flag_holder[209][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[209][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[209][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag210_is_here() {
    g_flag_holder[210][8] = '-';
    g_flag_holder[210][13] = '-';
    g_flag_holder[210][18] = '-';
    g_flag_holder[210][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[210][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[210][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag211_is_here() {
    g_flag_holder[211][8] = '-';
    g_flag_holder[211][13] = '-';
    g_flag_holder[211][18] = '-';
    g_flag_holder[211][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[211][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[211][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag212_is_here() {
    g_flag_holder[212][8] = '-';
    g_flag_holder[212][13] = '-';
    g_flag_holder[212][18] = '-';
    g_flag_holder[212][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[212][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[212][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag213_is_here() {
    g_flag_holder[213][8] = '-';
    g_flag_holder[213][13] = '-';
    g_flag_holder[213][18] = '-';
    g_flag_holder[213][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[213][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[213][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag214_is_here() {
    g_flag_holder[214][8] = '-';
    g_flag_holder[214][13] = '-';
    g_flag_holder[214][18] = '-';
    g_flag_holder[214][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[214][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[214][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag215_is_here() {
    g_flag_holder[215][8] = '-';
    g_flag_holder[215][13] = '-';
    g_flag_holder[215][18] = '-';
    g_flag_holder[215][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[215][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[215][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag216_is_here() {
    g_flag_holder[216][8] = '-';
    g_flag_holder[216][13] = '-';
    g_flag_holder[216][18] = '-';
    g_flag_holder[216][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[216][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[216][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag217_is_here() {
    g_flag_holder[217][8] = '-';
    g_flag_holder[217][13] = '-';
    g_flag_holder[217][18] = '-';
    g_flag_holder[217][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[217][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[217][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag218_is_here() {
    g_flag_holder[218][8] = '-';
    g_flag_holder[218][13] = '-';
    g_flag_holder[218][18] = '-';
    g_flag_holder[218][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[218][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[218][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag219_is_here() {
    g_flag_holder[219][8] = '-';
    g_flag_holder[219][13] = '-';
    g_flag_holder[219][18] = '-';
    g_flag_holder[219][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[219][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[219][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag220_is_here() {
    g_flag_holder[220][8] = '-';
    g_flag_holder[220][13] = '-';
    g_flag_holder[220][18] = '-';
    g_flag_holder[220][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[220][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[220][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag221_is_here() {
    g_flag_holder[221][8] = '-';
    g_flag_holder[221][13] = '-';
    g_flag_holder[221][18] = '-';
    g_flag_holder[221][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[221][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[221][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag222_is_here() {
    g_flag_holder[222][8] = '-';
    g_flag_holder[222][13] = '-';
    g_flag_holder[222][18] = '-';
    g_flag_holder[222][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[222][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[222][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag223_is_here() {
    g_flag_holder[223][8] = '-';
    g_flag_holder[223][13] = '-';
    g_flag_holder[223][18] = '-';
    g_flag_holder[223][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[223][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[223][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag224_is_here() {
    g_flag_holder[224][8] = '-';
    g_flag_holder[224][13] = '-';
    g_flag_holder[224][18] = '-';
    g_flag_holder[224][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[224][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[224][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag225_is_here() {
    g_flag_holder[225][8] = '-';
    g_flag_holder[225][13] = '-';
    g_flag_holder[225][18] = '-';
    g_flag_holder[225][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[225][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[225][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag226_is_here() {
    g_flag_holder[226][8] = '-';
    g_flag_holder[226][13] = '-';
    g_flag_holder[226][18] = '-';
    g_flag_holder[226][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[226][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[226][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag227_is_here() {
    g_flag_holder[227][8] = '-';
    g_flag_holder[227][13] = '-';
    g_flag_holder[227][18] = '-';
    g_flag_holder[227][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[227][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[227][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag228_is_here() {
    g_flag_holder[228][8] = '-';
    g_flag_holder[228][13] = '-';
    g_flag_holder[228][18] = '-';
    g_flag_holder[228][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[228][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[228][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag229_is_here() {
    g_flag_holder[229][8] = '-';
    g_flag_holder[229][13] = '-';
    g_flag_holder[229][18] = '-';
    g_flag_holder[229][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[229][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[229][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag230_is_here() {
    g_flag_holder[230][8] = '-';
    g_flag_holder[230][13] = '-';
    g_flag_holder[230][18] = '-';
    g_flag_holder[230][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[230][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[230][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag231_is_here() {
    g_flag_holder[231][8] = '-';
    g_flag_holder[231][13] = '-';
    g_flag_holder[231][18] = '-';
    g_flag_holder[231][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[231][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[231][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag232_is_here() {
    g_flag_holder[232][8] = '-';
    g_flag_holder[232][13] = '-';
    g_flag_holder[232][18] = '-';
    g_flag_holder[232][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[232][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[232][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag233_is_here() {
    g_flag_holder[233][8] = '-';
    g_flag_holder[233][13] = '-';
    g_flag_holder[233][18] = '-';
    g_flag_holder[233][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[233][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[233][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag234_is_here() {
    g_flag_holder[234][8] = '-';
    g_flag_holder[234][13] = '-';
    g_flag_holder[234][18] = '-';
    g_flag_holder[234][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[234][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[234][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag235_is_here() {
    g_flag_holder[235][8] = '-';
    g_flag_holder[235][13] = '-';
    g_flag_holder[235][18] = '-';
    g_flag_holder[235][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[235][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[235][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag236_is_here() {
    g_flag_holder[236][8] = '-';
    g_flag_holder[236][13] = '-';
    g_flag_holder[236][18] = '-';
    g_flag_holder[236][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[236][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[236][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag237_is_here() {
    g_flag_holder[237][8] = '-';
    g_flag_holder[237][13] = '-';
    g_flag_holder[237][18] = '-';
    g_flag_holder[237][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[237][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[237][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag238_is_here() {
    g_flag_holder[238][8] = '-';
    g_flag_holder[238][13] = '-';
    g_flag_holder[238][18] = '-';
    g_flag_holder[238][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[238][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[238][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag239_is_here() {
    g_flag_holder[239][8] = '-';
    g_flag_holder[239][13] = '-';
    g_flag_holder[239][18] = '-';
    g_flag_holder[239][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[239][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[239][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag240_is_here() {
    g_flag_holder[240][8] = '-';
    g_flag_holder[240][13] = '-';
    g_flag_holder[240][18] = '-';
    g_flag_holder[240][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[240][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[240][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag241_is_here() {
    g_flag_holder[241][8] = '-';
    g_flag_holder[241][13] = '-';
    g_flag_holder[241][18] = '-';
    g_flag_holder[241][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[241][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[241][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag242_is_here() {
    g_flag_holder[242][8] = '-';
    g_flag_holder[242][13] = '-';
    g_flag_holder[242][18] = '-';
    g_flag_holder[242][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[242][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[242][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag243_is_here() {
    g_flag_holder[243][8] = '-';
    g_flag_holder[243][13] = '-';
    g_flag_holder[243][18] = '-';
    g_flag_holder[243][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[243][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[243][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag244_is_here() {
    g_flag_holder[244][8] = '-';
    g_flag_holder[244][13] = '-';
    g_flag_holder[244][18] = '-';
    g_flag_holder[244][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[244][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[244][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag245_is_here() {
    g_flag_holder[245][8] = '-';
    g_flag_holder[245][13] = '-';
    g_flag_holder[245][18] = '-';
    g_flag_holder[245][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[245][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[245][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag246_is_here() {
    g_flag_holder[246][8] = '-';
    g_flag_holder[246][13] = '-';
    g_flag_holder[246][18] = '-';
    g_flag_holder[246][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[246][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[246][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag247_is_here() {
    g_flag_holder[247][8] = '-';
    g_flag_holder[247][13] = '-';
    g_flag_holder[247][18] = '-';
    g_flag_holder[247][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[247][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[247][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag248_is_here() {
    g_flag_holder[248][8] = '-';
    g_flag_holder[248][13] = '-';
    g_flag_holder[248][18] = '-';
    g_flag_holder[248][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[248][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[248][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag249_is_here() {
    g_flag_holder[249][8] = '-';
    g_flag_holder[249][13] = '-';
    g_flag_holder[249][18] = '-';
    g_flag_holder[249][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[249][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[249][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag250_is_here() {
    g_flag_holder[250][8] = '-';
    g_flag_holder[250][13] = '-';
    g_flag_holder[250][18] = '-';
    g_flag_holder[250][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[250][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[250][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag251_is_here() {
    g_flag_holder[251][8] = '-';
    g_flag_holder[251][13] = '-';
    g_flag_holder[251][18] = '-';
    g_flag_holder[251][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[251][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[251][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag252_is_here() {
    g_flag_holder[252][8] = '-';
    g_flag_holder[252][13] = '-';
    g_flag_holder[252][18] = '-';
    g_flag_holder[252][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[252][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[252][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag253_is_here() {
    g_flag_holder[253][8] = '-';
    g_flag_holder[253][13] = '-';
    g_flag_holder[253][18] = '-';
    g_flag_holder[253][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[253][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[253][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag254_is_here() {
    g_flag_holder[254][8] = '-';
    g_flag_holder[254][13] = '-';
    g_flag_holder[254][18] = '-';
    g_flag_holder[254][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[254][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[254][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag255_is_here() {
    g_flag_holder[255][8] = '-';
    g_flag_holder[255][13] = '-';
    g_flag_holder[255][18] = '-';
    g_flag_holder[255][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[255][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[255][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag256_is_here() {
    g_flag_holder[256][8] = '-';
    g_flag_holder[256][13] = '-';
    g_flag_holder[256][18] = '-';
    g_flag_holder[256][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[256][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[256][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag257_is_here() {
    g_flag_holder[257][8] = '-';
    g_flag_holder[257][13] = '-';
    g_flag_holder[257][18] = '-';
    g_flag_holder[257][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[257][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[257][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag258_is_here() {
    g_flag_holder[258][8] = '-';
    g_flag_holder[258][13] = '-';
    g_flag_holder[258][18] = '-';
    g_flag_holder[258][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[258][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[258][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag259_is_here() {
    g_flag_holder[259][8] = '-';
    g_flag_holder[259][13] = '-';
    g_flag_holder[259][18] = '-';
    g_flag_holder[259][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[259][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[259][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag260_is_here() {
    g_flag_holder[260][8] = '-';
    g_flag_holder[260][13] = '-';
    g_flag_holder[260][18] = '-';
    g_flag_holder[260][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[260][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[260][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag261_is_here() {
    g_flag_holder[261][8] = '-';
    g_flag_holder[261][13] = '-';
    g_flag_holder[261][18] = '-';
    g_flag_holder[261][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[261][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[261][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag262_is_here() {
    g_flag_holder[262][8] = '-';
    g_flag_holder[262][13] = '-';
    g_flag_holder[262][18] = '-';
    g_flag_holder[262][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[262][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[262][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag263_is_here() {
    g_flag_holder[263][8] = '-';
    g_flag_holder[263][13] = '-';
    g_flag_holder[263][18] = '-';
    g_flag_holder[263][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[263][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[263][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag264_is_here() {
    g_flag_holder[264][8] = '-';
    g_flag_holder[264][13] = '-';
    g_flag_holder[264][18] = '-';
    g_flag_holder[264][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[264][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[264][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag265_is_here() {
    g_flag_holder[265][8] = '-';
    g_flag_holder[265][13] = '-';
    g_flag_holder[265][18] = '-';
    g_flag_holder[265][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[265][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[265][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag266_is_here() {
    g_flag_holder[266][8] = '-';
    g_flag_holder[266][13] = '-';
    g_flag_holder[266][18] = '-';
    g_flag_holder[266][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[266][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[266][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag267_is_here() {
    g_flag_holder[267][8] = '-';
    g_flag_holder[267][13] = '-';
    g_flag_holder[267][18] = '-';
    g_flag_holder[267][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[267][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[267][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag268_is_here() {
    g_flag_holder[268][8] = '-';
    g_flag_holder[268][13] = '-';
    g_flag_holder[268][18] = '-';
    g_flag_holder[268][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[268][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[268][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag269_is_here() {
    g_flag_holder[269][8] = '-';
    g_flag_holder[269][13] = '-';
    g_flag_holder[269][18] = '-';
    g_flag_holder[269][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[269][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[269][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag270_is_here() {
    g_flag_holder[270][8] = '-';
    g_flag_holder[270][13] = '-';
    g_flag_holder[270][18] = '-';
    g_flag_holder[270][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[270][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[270][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag271_is_here() {
    g_flag_holder[271][8] = '-';
    g_flag_holder[271][13] = '-';
    g_flag_holder[271][18] = '-';
    g_flag_holder[271][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[271][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[271][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag272_is_here() {
    g_flag_holder[272][8] = '-';
    g_flag_holder[272][13] = '-';
    g_flag_holder[272][18] = '-';
    g_flag_holder[272][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[272][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[272][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag273_is_here() {
    g_flag_holder[273][8] = '-';
    g_flag_holder[273][13] = '-';
    g_flag_holder[273][18] = '-';
    g_flag_holder[273][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[273][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[273][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag274_is_here() {
    g_flag_holder[274][8] = '-';
    g_flag_holder[274][13] = '-';
    g_flag_holder[274][18] = '-';
    g_flag_holder[274][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[274][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[274][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag275_is_here() {
    g_flag_holder[275][8] = '-';
    g_flag_holder[275][13] = '-';
    g_flag_holder[275][18] = '-';
    g_flag_holder[275][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[275][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[275][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag276_is_here() {
    g_flag_holder[276][8] = '-';
    g_flag_holder[276][13] = '-';
    g_flag_holder[276][18] = '-';
    g_flag_holder[276][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[276][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[276][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag277_is_here() {
    g_flag_holder[277][8] = '-';
    g_flag_holder[277][13] = '-';
    g_flag_holder[277][18] = '-';
    g_flag_holder[277][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[277][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[277][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag278_is_here() {
    g_flag_holder[278][8] = '-';
    g_flag_holder[278][13] = '-';
    g_flag_holder[278][18] = '-';
    g_flag_holder[278][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[278][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[278][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag279_is_here() {
    g_flag_holder[279][8] = '-';
    g_flag_holder[279][13] = '-';
    g_flag_holder[279][18] = '-';
    g_flag_holder[279][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[279][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[279][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag280_is_here() {
    g_flag_holder[280][8] = '-';
    g_flag_holder[280][13] = '-';
    g_flag_holder[280][18] = '-';
    g_flag_holder[280][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[280][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[280][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag281_is_here() {
    g_flag_holder[281][8] = '-';
    g_flag_holder[281][13] = '-';
    g_flag_holder[281][18] = '-';
    g_flag_holder[281][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[281][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[281][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag282_is_here() {
    g_flag_holder[282][8] = '-';
    g_flag_holder[282][13] = '-';
    g_flag_holder[282][18] = '-';
    g_flag_holder[282][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[282][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[282][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag283_is_here() {
    g_flag_holder[283][8] = '-';
    g_flag_holder[283][13] = '-';
    g_flag_holder[283][18] = '-';
    g_flag_holder[283][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[283][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[283][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag284_is_here() {
    g_flag_holder[284][8] = '-';
    g_flag_holder[284][13] = '-';
    g_flag_holder[284][18] = '-';
    g_flag_holder[284][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[284][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[284][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag285_is_here() {
    g_flag_holder[285][8] = '-';
    g_flag_holder[285][13] = '-';
    g_flag_holder[285][18] = '-';
    g_flag_holder[285][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[285][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[285][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag286_is_here() {
    g_flag_holder[286][8] = '-';
    g_flag_holder[286][13] = '-';
    g_flag_holder[286][18] = '-';
    g_flag_holder[286][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[286][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[286][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag287_is_here() {
    g_flag_holder[287][8] = '-';
    g_flag_holder[287][13] = '-';
    g_flag_holder[287][18] = '-';
    g_flag_holder[287][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[287][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[287][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag288_is_here() {
    g_flag_holder[288][8] = '-';
    g_flag_holder[288][13] = '-';
    g_flag_holder[288][18] = '-';
    g_flag_holder[288][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[288][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[288][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag289_is_here() {
    g_flag_holder[289][8] = '-';
    g_flag_holder[289][13] = '-';
    g_flag_holder[289][18] = '-';
    g_flag_holder[289][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[289][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[289][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag290_is_here() {
    g_flag_holder[290][8] = '-';
    g_flag_holder[290][13] = '-';
    g_flag_holder[290][18] = '-';
    g_flag_holder[290][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[290][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[290][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag291_is_here() {
    g_flag_holder[291][8] = '-';
    g_flag_holder[291][13] = '-';
    g_flag_holder[291][18] = '-';
    g_flag_holder[291][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[291][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[291][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag292_is_here() {
    g_flag_holder[292][8] = '-';
    g_flag_holder[292][13] = '-';
    g_flag_holder[292][18] = '-';
    g_flag_holder[292][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[292][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[292][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag293_is_here() {
    g_flag_holder[293][8] = '-';
    g_flag_holder[293][13] = '-';
    g_flag_holder[293][18] = '-';
    g_flag_holder[293][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[293][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[293][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag294_is_here() {
    g_flag_holder[294][8] = '-';
    g_flag_holder[294][13] = '-';
    g_flag_holder[294][18] = '-';
    g_flag_holder[294][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[294][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[294][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag295_is_here() {
    g_flag_holder[295][8] = '-';
    g_flag_holder[295][13] = '-';
    g_flag_holder[295][18] = '-';
    g_flag_holder[295][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[295][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[295][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag296_is_here() {
    g_flag_holder[296][8] = '-';
    g_flag_holder[296][13] = '-';
    g_flag_holder[296][18] = '-';
    g_flag_holder[296][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[296][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[296][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag297_is_here() {
    g_flag_holder[297][8] = '-';
    g_flag_holder[297][13] = '-';
    g_flag_holder[297][18] = '-';
    g_flag_holder[297][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[297][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[297][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag298_is_here() {
    g_flag_holder[298][8] = '-';
    g_flag_holder[298][13] = '-';
    g_flag_holder[298][18] = '-';
    g_flag_holder[298][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[298][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[298][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag299_is_here() {
    g_flag_holder[299][8] = '-';
    g_flag_holder[299][13] = '-';
    g_flag_holder[299][18] = '-';
    g_flag_holder[299][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[299][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[299][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag300_is_here() {
    g_flag_holder[300][8] = '-';
    g_flag_holder[300][13] = '-';
    g_flag_holder[300][18] = '-';
    g_flag_holder[300][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[300][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[300][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag301_is_here() {
    g_flag_holder[301][8] = '-';
    g_flag_holder[301][13] = '-';
    g_flag_holder[301][18] = '-';
    g_flag_holder[301][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[301][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[301][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag302_is_here() {
    g_flag_holder[302][8] = '-';
    g_flag_holder[302][13] = '-';
    g_flag_holder[302][18] = '-';
    g_flag_holder[302][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[302][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[302][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag303_is_here() {
    g_flag_holder[303][8] = '-';
    g_flag_holder[303][13] = '-';
    g_flag_holder[303][18] = '-';
    g_flag_holder[303][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[303][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[303][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag304_is_here() {
    g_flag_holder[304][8] = '-';
    g_flag_holder[304][13] = '-';
    g_flag_holder[304][18] = '-';
    g_flag_holder[304][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[304][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[304][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag305_is_here() {
    g_flag_holder[305][8] = '-';
    g_flag_holder[305][13] = '-';
    g_flag_holder[305][18] = '-';
    g_flag_holder[305][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[305][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[305][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag306_is_here() {
    g_flag_holder[306][8] = '-';
    g_flag_holder[306][13] = '-';
    g_flag_holder[306][18] = '-';
    g_flag_holder[306][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[306][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[306][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag307_is_here() {
    g_flag_holder[307][8] = '-';
    g_flag_holder[307][13] = '-';
    g_flag_holder[307][18] = '-';
    g_flag_holder[307][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[307][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[307][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag308_is_here() {
    g_flag_holder[308][8] = '-';
    g_flag_holder[308][13] = '-';
    g_flag_holder[308][18] = '-';
    g_flag_holder[308][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[308][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[308][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag309_is_here() {
    g_flag_holder[309][8] = '-';
    g_flag_holder[309][13] = '-';
    g_flag_holder[309][18] = '-';
    g_flag_holder[309][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[309][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[309][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag310_is_here() {
    g_flag_holder[310][8] = '-';
    g_flag_holder[310][13] = '-';
    g_flag_holder[310][18] = '-';
    g_flag_holder[310][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[310][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[310][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag311_is_here() {
    g_flag_holder[311][8] = '-';
    g_flag_holder[311][13] = '-';
    g_flag_holder[311][18] = '-';
    g_flag_holder[311][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[311][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[311][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag312_is_here() {
    g_flag_holder[312][8] = '-';
    g_flag_holder[312][13] = '-';
    g_flag_holder[312][18] = '-';
    g_flag_holder[312][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[312][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[312][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag313_is_here() {
    g_flag_holder[313][8] = '-';
    g_flag_holder[313][13] = '-';
    g_flag_holder[313][18] = '-';
    g_flag_holder[313][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[313][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[313][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag314_is_here() {
    g_flag_holder[314][8] = '-';
    g_flag_holder[314][13] = '-';
    g_flag_holder[314][18] = '-';
    g_flag_holder[314][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[314][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[314][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag315_is_here() {
    g_flag_holder[315][8] = '-';
    g_flag_holder[315][13] = '-';
    g_flag_holder[315][18] = '-';
    g_flag_holder[315][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[315][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[315][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag316_is_here() {
    g_flag_holder[316][8] = '-';
    g_flag_holder[316][13] = '-';
    g_flag_holder[316][18] = '-';
    g_flag_holder[316][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[316][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[316][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag317_is_here() {
    g_flag_holder[317][8] = '-';
    g_flag_holder[317][13] = '-';
    g_flag_holder[317][18] = '-';
    g_flag_holder[317][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[317][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[317][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag318_is_here() {
    g_flag_holder[318][8] = '-';
    g_flag_holder[318][13] = '-';
    g_flag_holder[318][18] = '-';
    g_flag_holder[318][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[318][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[318][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag319_is_here() {
    g_flag_holder[319][8] = '-';
    g_flag_holder[319][13] = '-';
    g_flag_holder[319][18] = '-';
    g_flag_holder[319][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[319][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[319][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag320_is_here() {
    g_flag_holder[320][8] = '-';
    g_flag_holder[320][13] = '-';
    g_flag_holder[320][18] = '-';
    g_flag_holder[320][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[320][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[320][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag321_is_here() {
    g_flag_holder[321][8] = '-';
    g_flag_holder[321][13] = '-';
    g_flag_holder[321][18] = '-';
    g_flag_holder[321][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[321][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[321][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag322_is_here() {
    g_flag_holder[322][8] = '-';
    g_flag_holder[322][13] = '-';
    g_flag_holder[322][18] = '-';
    g_flag_holder[322][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[322][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[322][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag323_is_here() {
    g_flag_holder[323][8] = '-';
    g_flag_holder[323][13] = '-';
    g_flag_holder[323][18] = '-';
    g_flag_holder[323][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[323][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[323][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag324_is_here() {
    g_flag_holder[324][8] = '-';
    g_flag_holder[324][13] = '-';
    g_flag_holder[324][18] = '-';
    g_flag_holder[324][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[324][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[324][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag325_is_here() {
    g_flag_holder[325][8] = '-';
    g_flag_holder[325][13] = '-';
    g_flag_holder[325][18] = '-';
    g_flag_holder[325][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[325][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[325][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag326_is_here() {
    g_flag_holder[326][8] = '-';
    g_flag_holder[326][13] = '-';
    g_flag_holder[326][18] = '-';
    g_flag_holder[326][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[326][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[326][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag327_is_here() {
    g_flag_holder[327][8] = '-';
    g_flag_holder[327][13] = '-';
    g_flag_holder[327][18] = '-';
    g_flag_holder[327][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[327][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[327][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag328_is_here() {
    g_flag_holder[328][8] = '-';
    g_flag_holder[328][13] = '-';
    g_flag_holder[328][18] = '-';
    g_flag_holder[328][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[328][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[328][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag329_is_here() {
    g_flag_holder[329][8] = '-';
    g_flag_holder[329][13] = '-';
    g_flag_holder[329][18] = '-';
    g_flag_holder[329][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[329][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[329][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag330_is_here() {
    g_flag_holder[330][8] = '-';
    g_flag_holder[330][13] = '-';
    g_flag_holder[330][18] = '-';
    g_flag_holder[330][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[330][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[330][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag331_is_here() {
    g_flag_holder[331][8] = '-';
    g_flag_holder[331][13] = '-';
    g_flag_holder[331][18] = '-';
    g_flag_holder[331][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[331][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[331][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag332_is_here() {
    g_flag_holder[332][8] = '-';
    g_flag_holder[332][13] = '-';
    g_flag_holder[332][18] = '-';
    g_flag_holder[332][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[332][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[332][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag333_is_here() {
    g_flag_holder[333][8] = '-';
    g_flag_holder[333][13] = '-';
    g_flag_holder[333][18] = '-';
    g_flag_holder[333][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[333][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[333][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag334_is_here() {
    g_flag_holder[334][8] = '-';
    g_flag_holder[334][13] = '-';
    g_flag_holder[334][18] = '-';
    g_flag_holder[334][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[334][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[334][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag335_is_here() {
    g_flag_holder[335][8] = '-';
    g_flag_holder[335][13] = '-';
    g_flag_holder[335][18] = '-';
    g_flag_holder[335][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[335][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[335][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag336_is_here() {
    g_flag_holder[336][8] = '-';
    g_flag_holder[336][13] = '-';
    g_flag_holder[336][18] = '-';
    g_flag_holder[336][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[336][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[336][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag337_is_here() {
    g_flag_holder[337][8] = '-';
    g_flag_holder[337][13] = '-';
    g_flag_holder[337][18] = '-';
    g_flag_holder[337][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[337][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[337][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag338_is_here() {
    g_flag_holder[338][8] = '-';
    g_flag_holder[338][13] = '-';
    g_flag_holder[338][18] = '-';
    g_flag_holder[338][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[338][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[338][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag339_is_here() {
    g_flag_holder[339][8] = '-';
    g_flag_holder[339][13] = '-';
    g_flag_holder[339][18] = '-';
    g_flag_holder[339][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[339][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[339][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag340_is_here() {
    g_flag_holder[340][8] = '-';
    g_flag_holder[340][13] = '-';
    g_flag_holder[340][18] = '-';
    g_flag_holder[340][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[340][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[340][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag341_is_here() {
    g_flag_holder[341][8] = '-';
    g_flag_holder[341][13] = '-';
    g_flag_holder[341][18] = '-';
    g_flag_holder[341][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[341][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[341][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag342_is_here() {
    g_flag_holder[342][8] = '-';
    g_flag_holder[342][13] = '-';
    g_flag_holder[342][18] = '-';
    g_flag_holder[342][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[342][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[342][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag343_is_here() {
    g_flag_holder[343][8] = '-';
    g_flag_holder[343][13] = '-';
    g_flag_holder[343][18] = '-';
    g_flag_holder[343][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[343][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[343][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag344_is_here() {
    g_flag_holder[344][8] = '-';
    g_flag_holder[344][13] = '-';
    g_flag_holder[344][18] = '-';
    g_flag_holder[344][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[344][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[344][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag345_is_here() {
    g_flag_holder[345][8] = '-';
    g_flag_holder[345][13] = '-';
    g_flag_holder[345][18] = '-';
    g_flag_holder[345][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[345][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[345][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag346_is_here() {
    g_flag_holder[346][8] = '-';
    g_flag_holder[346][13] = '-';
    g_flag_holder[346][18] = '-';
    g_flag_holder[346][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[346][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[346][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag347_is_here() {
    g_flag_holder[347][8] = '-';
    g_flag_holder[347][13] = '-';
    g_flag_holder[347][18] = '-';
    g_flag_holder[347][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[347][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[347][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag348_is_here() {
    g_flag_holder[348][8] = '-';
    g_flag_holder[348][13] = '-';
    g_flag_holder[348][18] = '-';
    g_flag_holder[348][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[348][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[348][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag349_is_here() {
    g_flag_holder[349][8] = '-';
    g_flag_holder[349][13] = '-';
    g_flag_holder[349][18] = '-';
    g_flag_holder[349][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[349][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[349][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag350_is_here() {
    g_flag_holder[350][8] = '-';
    g_flag_holder[350][13] = '-';
    g_flag_holder[350][18] = '-';
    g_flag_holder[350][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[350][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[350][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag351_is_here() {
    g_flag_holder[351][8] = '-';
    g_flag_holder[351][13] = '-';
    g_flag_holder[351][18] = '-';
    g_flag_holder[351][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[351][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[351][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag352_is_here() {
    g_flag_holder[352][8] = '-';
    g_flag_holder[352][13] = '-';
    g_flag_holder[352][18] = '-';
    g_flag_holder[352][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[352][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[352][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag353_is_here() {
    g_flag_holder[353][8] = '-';
    g_flag_holder[353][13] = '-';
    g_flag_holder[353][18] = '-';
    g_flag_holder[353][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[353][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[353][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag354_is_here() {
    g_flag_holder[354][8] = '-';
    g_flag_holder[354][13] = '-';
    g_flag_holder[354][18] = '-';
    g_flag_holder[354][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[354][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[354][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag355_is_here() {
    g_flag_holder[355][8] = '-';
    g_flag_holder[355][13] = '-';
    g_flag_holder[355][18] = '-';
    g_flag_holder[355][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[355][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[355][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag356_is_here() {
    g_flag_holder[356][8] = '-';
    g_flag_holder[356][13] = '-';
    g_flag_holder[356][18] = '-';
    g_flag_holder[356][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[356][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[356][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag357_is_here() {
    g_flag_holder[357][8] = '-';
    g_flag_holder[357][13] = '-';
    g_flag_holder[357][18] = '-';
    g_flag_holder[357][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[357][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[357][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag358_is_here() {
    g_flag_holder[358][8] = '-';
    g_flag_holder[358][13] = '-';
    g_flag_holder[358][18] = '-';
    g_flag_holder[358][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[358][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[358][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag359_is_here() {
    g_flag_holder[359][8] = '-';
    g_flag_holder[359][13] = '-';
    g_flag_holder[359][18] = '-';
    g_flag_holder[359][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[359][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[359][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag360_is_here() {
    g_flag_holder[360][8] = '-';
    g_flag_holder[360][13] = '-';
    g_flag_holder[360][18] = '-';
    g_flag_holder[360][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[360][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[360][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag361_is_here() {
    g_flag_holder[361][8] = '-';
    g_flag_holder[361][13] = '-';
    g_flag_holder[361][18] = '-';
    g_flag_holder[361][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[361][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[361][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag362_is_here() {
    g_flag_holder[362][8] = '-';
    g_flag_holder[362][13] = '-';
    g_flag_holder[362][18] = '-';
    g_flag_holder[362][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[362][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[362][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag363_is_here() {
    g_flag_holder[363][8] = '-';
    g_flag_holder[363][13] = '-';
    g_flag_holder[363][18] = '-';
    g_flag_holder[363][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[363][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[363][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag364_is_here() {
    g_flag_holder[364][8] = '-';
    g_flag_holder[364][13] = '-';
    g_flag_holder[364][18] = '-';
    g_flag_holder[364][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[364][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[364][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag365_is_here() {
    g_flag_holder[365][8] = '-';
    g_flag_holder[365][13] = '-';
    g_flag_holder[365][18] = '-';
    g_flag_holder[365][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[365][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[365][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag366_is_here() {
    g_flag_holder[366][8] = '-';
    g_flag_holder[366][13] = '-';
    g_flag_holder[366][18] = '-';
    g_flag_holder[366][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[366][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[366][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag367_is_here() {
    g_flag_holder[367][8] = '-';
    g_flag_holder[367][13] = '-';
    g_flag_holder[367][18] = '-';
    g_flag_holder[367][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[367][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[367][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag368_is_here() {
    g_flag_holder[368][8] = '-';
    g_flag_holder[368][13] = '-';
    g_flag_holder[368][18] = '-';
    g_flag_holder[368][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[368][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[368][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag369_is_here() {
    g_flag_holder[369][8] = '-';
    g_flag_holder[369][13] = '-';
    g_flag_holder[369][18] = '-';
    g_flag_holder[369][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[369][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[369][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag370_is_here() {
    g_flag_holder[370][8] = '-';
    g_flag_holder[370][13] = '-';
    g_flag_holder[370][18] = '-';
    g_flag_holder[370][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[370][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[370][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag371_is_here() {
    g_flag_holder[371][8] = '-';
    g_flag_holder[371][13] = '-';
    g_flag_holder[371][18] = '-';
    g_flag_holder[371][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[371][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[371][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag372_is_here() {
    g_flag_holder[372][8] = '-';
    g_flag_holder[372][13] = '-';
    g_flag_holder[372][18] = '-';
    g_flag_holder[372][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[372][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[372][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag373_is_here() {
    g_flag_holder[373][8] = '-';
    g_flag_holder[373][13] = '-';
    g_flag_holder[373][18] = '-';
    g_flag_holder[373][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[373][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[373][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag374_is_here() {
    g_flag_holder[374][8] = '-';
    g_flag_holder[374][13] = '-';
    g_flag_holder[374][18] = '-';
    g_flag_holder[374][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[374][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[374][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag375_is_here() {
    g_flag_holder[375][8] = '-';
    g_flag_holder[375][13] = '-';
    g_flag_holder[375][18] = '-';
    g_flag_holder[375][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[375][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[375][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag376_is_here() {
    g_flag_holder[376][8] = '-';
    g_flag_holder[376][13] = '-';
    g_flag_holder[376][18] = '-';
    g_flag_holder[376][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[376][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[376][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag377_is_here() {
    g_flag_holder[377][8] = '-';
    g_flag_holder[377][13] = '-';
    g_flag_holder[377][18] = '-';
    g_flag_holder[377][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[377][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[377][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag378_is_here() {
    g_flag_holder[378][8] = '-';
    g_flag_holder[378][13] = '-';
    g_flag_holder[378][18] = '-';
    g_flag_holder[378][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[378][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[378][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag379_is_here() {
    g_flag_holder[379][8] = '-';
    g_flag_holder[379][13] = '-';
    g_flag_holder[379][18] = '-';
    g_flag_holder[379][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[379][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[379][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag380_is_here() {
    g_flag_holder[380][8] = '-';
    g_flag_holder[380][13] = '-';
    g_flag_holder[380][18] = '-';
    g_flag_holder[380][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[380][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[380][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag381_is_here() {
    g_flag_holder[381][8] = '-';
    g_flag_holder[381][13] = '-';
    g_flag_holder[381][18] = '-';
    g_flag_holder[381][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[381][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[381][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag382_is_here() {
    g_flag_holder[382][8] = '-';
    g_flag_holder[382][13] = '-';
    g_flag_holder[382][18] = '-';
    g_flag_holder[382][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[382][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[382][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag383_is_here() {
    g_flag_holder[383][8] = '-';
    g_flag_holder[383][13] = '-';
    g_flag_holder[383][18] = '-';
    g_flag_holder[383][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[383][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[383][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag384_is_here() {
    g_flag_holder[384][8] = '-';
    g_flag_holder[384][13] = '-';
    g_flag_holder[384][18] = '-';
    g_flag_holder[384][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[384][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[384][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag385_is_here() {
    g_flag_holder[385][8] = '-';
    g_flag_holder[385][13] = '-';
    g_flag_holder[385][18] = '-';
    g_flag_holder[385][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[385][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[385][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag386_is_here() {
    g_flag_holder[386][8] = '-';
    g_flag_holder[386][13] = '-';
    g_flag_holder[386][18] = '-';
    g_flag_holder[386][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[386][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[386][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag387_is_here() {
    g_flag_holder[387][8] = '-';
    g_flag_holder[387][13] = '-';
    g_flag_holder[387][18] = '-';
    g_flag_holder[387][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[387][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[387][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag388_is_here() {
    g_flag_holder[388][8] = '-';
    g_flag_holder[388][13] = '-';
    g_flag_holder[388][18] = '-';
    g_flag_holder[388][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[388][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[388][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag389_is_here() {
    g_flag_holder[389][8] = '-';
    g_flag_holder[389][13] = '-';
    g_flag_holder[389][18] = '-';
    g_flag_holder[389][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[389][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[389][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag390_is_here() {
    g_flag_holder[390][8] = '-';
    g_flag_holder[390][13] = '-';
    g_flag_holder[390][18] = '-';
    g_flag_holder[390][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[390][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[390][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag391_is_here() {
    g_flag_holder[391][8] = '-';
    g_flag_holder[391][13] = '-';
    g_flag_holder[391][18] = '-';
    g_flag_holder[391][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[391][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[391][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag392_is_here() {
    g_flag_holder[392][8] = '-';
    g_flag_holder[392][13] = '-';
    g_flag_holder[392][18] = '-';
    g_flag_holder[392][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[392][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[392][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag393_is_here() {
    g_flag_holder[393][8] = '-';
    g_flag_holder[393][13] = '-';
    g_flag_holder[393][18] = '-';
    g_flag_holder[393][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[393][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[393][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag394_is_here() {
    g_flag_holder[394][8] = '-';
    g_flag_holder[394][13] = '-';
    g_flag_holder[394][18] = '-';
    g_flag_holder[394][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[394][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[394][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag395_is_here() {
    g_flag_holder[395][8] = '-';
    g_flag_holder[395][13] = '-';
    g_flag_holder[395][18] = '-';
    g_flag_holder[395][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[395][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[395][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag396_is_here() {
    g_flag_holder[396][8] = '-';
    g_flag_holder[396][13] = '-';
    g_flag_holder[396][18] = '-';
    g_flag_holder[396][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[396][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[396][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag397_is_here() {
    g_flag_holder[397][8] = '-';
    g_flag_holder[397][13] = '-';
    g_flag_holder[397][18] = '-';
    g_flag_holder[397][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[397][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[397][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag398_is_here() {
    g_flag_holder[398][8] = '-';
    g_flag_holder[398][13] = '-';
    g_flag_holder[398][18] = '-';
    g_flag_holder[398][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[398][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[398][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag399_is_here() {
    g_flag_holder[399][8] = '-';
    g_flag_holder[399][13] = '-';
    g_flag_holder[399][18] = '-';
    g_flag_holder[399][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[399][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[399][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag400_is_here() {
    g_flag_holder[400][8] = '-';
    g_flag_holder[400][13] = '-';
    g_flag_holder[400][18] = '-';
    g_flag_holder[400][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[400][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[400][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag401_is_here() {
    g_flag_holder[401][8] = '-';
    g_flag_holder[401][13] = '-';
    g_flag_holder[401][18] = '-';
    g_flag_holder[401][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[401][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[401][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag402_is_here() {
    g_flag_holder[402][8] = '-';
    g_flag_holder[402][13] = '-';
    g_flag_holder[402][18] = '-';
    g_flag_holder[402][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[402][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[402][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag403_is_here() {
    g_flag_holder[403][8] = '-';
    g_flag_holder[403][13] = '-';
    g_flag_holder[403][18] = '-';
    g_flag_holder[403][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[403][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[403][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag404_is_here() {
    g_flag_holder[404][8] = '-';
    g_flag_holder[404][13] = '-';
    g_flag_holder[404][18] = '-';
    g_flag_holder[404][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[404][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[404][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag405_is_here() {
    g_flag_holder[405][8] = '-';
    g_flag_holder[405][13] = '-';
    g_flag_holder[405][18] = '-';
    g_flag_holder[405][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[405][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[405][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag406_is_here() {
    g_flag_holder[406][8] = '-';
    g_flag_holder[406][13] = '-';
    g_flag_holder[406][18] = '-';
    g_flag_holder[406][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[406][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[406][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag407_is_here() {
    g_flag_holder[407][8] = '-';
    g_flag_holder[407][13] = '-';
    g_flag_holder[407][18] = '-';
    g_flag_holder[407][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[407][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[407][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag408_is_here() {
    g_flag_holder[408][8] = '-';
    g_flag_holder[408][13] = '-';
    g_flag_holder[408][18] = '-';
    g_flag_holder[408][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[408][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[408][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag409_is_here() {
    g_flag_holder[409][8] = '-';
    g_flag_holder[409][13] = '-';
    g_flag_holder[409][18] = '-';
    g_flag_holder[409][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[409][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[409][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag410_is_here() {
    g_flag_holder[410][8] = '-';
    g_flag_holder[410][13] = '-';
    g_flag_holder[410][18] = '-';
    g_flag_holder[410][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[410][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[410][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag411_is_here() {
    g_flag_holder[411][8] = '-';
    g_flag_holder[411][13] = '-';
    g_flag_holder[411][18] = '-';
    g_flag_holder[411][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[411][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[411][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag412_is_here() {
    g_flag_holder[412][8] = '-';
    g_flag_holder[412][13] = '-';
    g_flag_holder[412][18] = '-';
    g_flag_holder[412][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[412][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[412][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag413_is_here() {
    g_flag_holder[413][8] = '-';
    g_flag_holder[413][13] = '-';
    g_flag_holder[413][18] = '-';
    g_flag_holder[413][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[413][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[413][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag414_is_here() {
    g_flag_holder[414][8] = '-';
    g_flag_holder[414][13] = '-';
    g_flag_holder[414][18] = '-';
    g_flag_holder[414][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[414][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[414][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag415_is_here() {
    g_flag_holder[415][8] = '-';
    g_flag_holder[415][13] = '-';
    g_flag_holder[415][18] = '-';
    g_flag_holder[415][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[415][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[415][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag416_is_here() {
    g_flag_holder[416][8] = '-';
    g_flag_holder[416][13] = '-';
    g_flag_holder[416][18] = '-';
    g_flag_holder[416][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[416][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[416][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag417_is_here() {
    g_flag_holder[417][8] = '-';
    g_flag_holder[417][13] = '-';
    g_flag_holder[417][18] = '-';
    g_flag_holder[417][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[417][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[417][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag418_is_here() {
    g_flag_holder[418][8] = '-';
    g_flag_holder[418][13] = '-';
    g_flag_holder[418][18] = '-';
    g_flag_holder[418][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[418][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[418][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag419_is_here() {
    g_flag_holder[419][8] = '-';
    g_flag_holder[419][13] = '-';
    g_flag_holder[419][18] = '-';
    g_flag_holder[419][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[419][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[419][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag420_is_here() {
    g_flag_holder[420][8] = '-';
    g_flag_holder[420][13] = '-';
    g_flag_holder[420][18] = '-';
    g_flag_holder[420][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[420][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[420][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag421_is_here() {
    g_flag_holder[421][8] = '-';
    g_flag_holder[421][13] = '-';
    g_flag_holder[421][18] = '-';
    g_flag_holder[421][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[421][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[421][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag422_is_here() {
    g_flag_holder[422][8] = '-';
    g_flag_holder[422][13] = '-';
    g_flag_holder[422][18] = '-';
    g_flag_holder[422][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[422][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[422][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag423_is_here() {
    g_flag_holder[423][8] = '-';
    g_flag_holder[423][13] = '-';
    g_flag_holder[423][18] = '-';
    g_flag_holder[423][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[423][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[423][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag424_is_here() {
    g_flag_holder[424][8] = '-';
    g_flag_holder[424][13] = '-';
    g_flag_holder[424][18] = '-';
    g_flag_holder[424][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[424][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[424][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag425_is_here() {
    g_flag_holder[425][8] = '-';
    g_flag_holder[425][13] = '-';
    g_flag_holder[425][18] = '-';
    g_flag_holder[425][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[425][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[425][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag426_is_here() {
    g_flag_holder[426][8] = '-';
    g_flag_holder[426][13] = '-';
    g_flag_holder[426][18] = '-';
    g_flag_holder[426][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[426][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[426][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag427_is_here() {
    g_flag_holder[427][8] = '-';
    g_flag_holder[427][13] = '-';
    g_flag_holder[427][18] = '-';
    g_flag_holder[427][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[427][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[427][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag428_is_here() {
    g_flag_holder[428][8] = '-';
    g_flag_holder[428][13] = '-';
    g_flag_holder[428][18] = '-';
    g_flag_holder[428][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[428][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[428][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag429_is_here() {
    g_flag_holder[429][8] = '-';
    g_flag_holder[429][13] = '-';
    g_flag_holder[429][18] = '-';
    g_flag_holder[429][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[429][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[429][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag430_is_here() {
    g_flag_holder[430][8] = '-';
    g_flag_holder[430][13] = '-';
    g_flag_holder[430][18] = '-';
    g_flag_holder[430][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[430][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[430][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag431_is_here() {
    g_flag_holder[431][8] = '-';
    g_flag_holder[431][13] = '-';
    g_flag_holder[431][18] = '-';
    g_flag_holder[431][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[431][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[431][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag432_is_here() {
    g_flag_holder[432][8] = '-';
    g_flag_holder[432][13] = '-';
    g_flag_holder[432][18] = '-';
    g_flag_holder[432][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[432][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[432][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag433_is_here() {
    g_flag_holder[433][8] = '-';
    g_flag_holder[433][13] = '-';
    g_flag_holder[433][18] = '-';
    g_flag_holder[433][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[433][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[433][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag434_is_here() {
    g_flag_holder[434][8] = '-';
    g_flag_holder[434][13] = '-';
    g_flag_holder[434][18] = '-';
    g_flag_holder[434][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[434][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[434][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag435_is_here() {
    g_flag_holder[435][8] = '-';
    g_flag_holder[435][13] = '-';
    g_flag_holder[435][18] = '-';
    g_flag_holder[435][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[435][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[435][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag436_is_here() {
    g_flag_holder[436][8] = '-';
    g_flag_holder[436][13] = '-';
    g_flag_holder[436][18] = '-';
    g_flag_holder[436][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[436][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[436][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag437_is_here() {
    g_flag_holder[437][8] = '-';
    g_flag_holder[437][13] = '-';
    g_flag_holder[437][18] = '-';
    g_flag_holder[437][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[437][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[437][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag438_is_here() {
    g_flag_holder[438][8] = '-';
    g_flag_holder[438][13] = '-';
    g_flag_holder[438][18] = '-';
    g_flag_holder[438][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[438][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[438][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag439_is_here() {
    g_flag_holder[439][8] = '-';
    g_flag_holder[439][13] = '-';
    g_flag_holder[439][18] = '-';
    g_flag_holder[439][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[439][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[439][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag440_is_here() {
    g_flag_holder[440][8] = '-';
    g_flag_holder[440][13] = '-';
    g_flag_holder[440][18] = '-';
    g_flag_holder[440][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[440][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[440][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag441_is_here() {
    g_flag_holder[441][8] = '-';
    g_flag_holder[441][13] = '-';
    g_flag_holder[441][18] = '-';
    g_flag_holder[441][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[441][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[441][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag442_is_here() {
    g_flag_holder[442][8] = '-';
    g_flag_holder[442][13] = '-';
    g_flag_holder[442][18] = '-';
    g_flag_holder[442][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[442][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[442][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag443_is_here() {
    g_flag_holder[443][8] = '-';
    g_flag_holder[443][13] = '-';
    g_flag_holder[443][18] = '-';
    g_flag_holder[443][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[443][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[443][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag444_is_here() {
    g_flag_holder[444][8] = '-';
    g_flag_holder[444][13] = '-';
    g_flag_holder[444][18] = '-';
    g_flag_holder[444][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[444][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[444][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag445_is_here() {
    g_flag_holder[445][8] = '-';
    g_flag_holder[445][13] = '-';
    g_flag_holder[445][18] = '-';
    g_flag_holder[445][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[445][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[445][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag446_is_here() {
    g_flag_holder[446][8] = '-';
    g_flag_holder[446][13] = '-';
    g_flag_holder[446][18] = '-';
    g_flag_holder[446][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[446][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[446][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag447_is_here() {
    g_flag_holder[447][8] = '-';
    g_flag_holder[447][13] = '-';
    g_flag_holder[447][18] = '-';
    g_flag_holder[447][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[447][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[447][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag448_is_here() {
    g_flag_holder[448][8] = '-';
    g_flag_holder[448][13] = '-';
    g_flag_holder[448][18] = '-';
    g_flag_holder[448][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[448][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[448][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag449_is_here() {
    g_flag_holder[449][8] = '-';
    g_flag_holder[449][13] = '-';
    g_flag_holder[449][18] = '-';
    g_flag_holder[449][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[449][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[449][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag450_is_here() {
    g_flag_holder[450][8] = '-';
    g_flag_holder[450][13] = '-';
    g_flag_holder[450][18] = '-';
    g_flag_holder[450][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[450][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[450][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag451_is_here() {
    g_flag_holder[451][8] = '-';
    g_flag_holder[451][13] = '-';
    g_flag_holder[451][18] = '-';
    g_flag_holder[451][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[451][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[451][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag452_is_here() {
    g_flag_holder[452][8] = '-';
    g_flag_holder[452][13] = '-';
    g_flag_holder[452][18] = '-';
    g_flag_holder[452][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[452][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[452][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag453_is_here() {
    g_flag_holder[453][8] = '-';
    g_flag_holder[453][13] = '-';
    g_flag_holder[453][18] = '-';
    g_flag_holder[453][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[453][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[453][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag454_is_here() {
    g_flag_holder[454][8] = '-';
    g_flag_holder[454][13] = '-';
    g_flag_holder[454][18] = '-';
    g_flag_holder[454][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[454][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[454][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag455_is_here() {
    g_flag_holder[455][8] = '-';
    g_flag_holder[455][13] = '-';
    g_flag_holder[455][18] = '-';
    g_flag_holder[455][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[455][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[455][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag456_is_here() {
    g_flag_holder[456][8] = '-';
    g_flag_holder[456][13] = '-';
    g_flag_holder[456][18] = '-';
    g_flag_holder[456][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[456][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[456][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag457_is_here() {
    g_flag_holder[457][8] = '-';
    g_flag_holder[457][13] = '-';
    g_flag_holder[457][18] = '-';
    g_flag_holder[457][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[457][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[457][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag458_is_here() {
    g_flag_holder[458][8] = '-';
    g_flag_holder[458][13] = '-';
    g_flag_holder[458][18] = '-';
    g_flag_holder[458][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[458][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[458][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag459_is_here() {
    g_flag_holder[459][8] = '-';
    g_flag_holder[459][13] = '-';
    g_flag_holder[459][18] = '-';
    g_flag_holder[459][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[459][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[459][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag460_is_here() {
    g_flag_holder[460][8] = '-';
    g_flag_holder[460][13] = '-';
    g_flag_holder[460][18] = '-';
    g_flag_holder[460][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[460][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[460][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag461_is_here() {
    g_flag_holder[461][8] = '-';
    g_flag_holder[461][13] = '-';
    g_flag_holder[461][18] = '-';
    g_flag_holder[461][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[461][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[461][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag462_is_here() {
    g_flag_holder[462][8] = '-';
    g_flag_holder[462][13] = '-';
    g_flag_holder[462][18] = '-';
    g_flag_holder[462][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[462][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[462][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag463_is_here() {
    g_flag_holder[463][8] = '-';
    g_flag_holder[463][13] = '-';
    g_flag_holder[463][18] = '-';
    g_flag_holder[463][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[463][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[463][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag464_is_here() {
    g_flag_holder[464][8] = '-';
    g_flag_holder[464][13] = '-';
    g_flag_holder[464][18] = '-';
    g_flag_holder[464][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[464][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[464][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag465_is_here() {
    g_flag_holder[465][8] = '-';
    g_flag_holder[465][13] = '-';
    g_flag_holder[465][18] = '-';
    g_flag_holder[465][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[465][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[465][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag466_is_here() {
    g_flag_holder[466][8] = '-';
    g_flag_holder[466][13] = '-';
    g_flag_holder[466][18] = '-';
    g_flag_holder[466][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[466][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[466][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag467_is_here() {
    g_flag_holder[467][8] = '-';
    g_flag_holder[467][13] = '-';
    g_flag_holder[467][18] = '-';
    g_flag_holder[467][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[467][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[467][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag468_is_here() {
    g_flag_holder[468][8] = '-';
    g_flag_holder[468][13] = '-';
    g_flag_holder[468][18] = '-';
    g_flag_holder[468][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[468][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[468][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag469_is_here() {
    g_flag_holder[469][8] = '-';
    g_flag_holder[469][13] = '-';
    g_flag_holder[469][18] = '-';
    g_flag_holder[469][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[469][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[469][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag470_is_here() {
    g_flag_holder[470][8] = '-';
    g_flag_holder[470][13] = '-';
    g_flag_holder[470][18] = '-';
    g_flag_holder[470][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[470][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[470][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag471_is_here() {
    g_flag_holder[471][8] = '-';
    g_flag_holder[471][13] = '-';
    g_flag_holder[471][18] = '-';
    g_flag_holder[471][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[471][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[471][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag472_is_here() {
    g_flag_holder[472][8] = '-';
    g_flag_holder[472][13] = '-';
    g_flag_holder[472][18] = '-';
    g_flag_holder[472][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[472][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[472][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag473_is_here() {
    g_flag_holder[473][8] = '-';
    g_flag_holder[473][13] = '-';
    g_flag_holder[473][18] = '-';
    g_flag_holder[473][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[473][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[473][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag474_is_here() {
    g_flag_holder[474][8] = '-';
    g_flag_holder[474][13] = '-';
    g_flag_holder[474][18] = '-';
    g_flag_holder[474][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[474][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[474][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag475_is_here() {
    g_flag_holder[475][8] = '-';
    g_flag_holder[475][13] = '-';
    g_flag_holder[475][18] = '-';
    g_flag_holder[475][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[475][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[475][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag476_is_here() {
    g_flag_holder[476][8] = '-';
    g_flag_holder[476][13] = '-';
    g_flag_holder[476][18] = '-';
    g_flag_holder[476][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[476][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[476][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag477_is_here() {
    g_flag_holder[477][8] = '-';
    g_flag_holder[477][13] = '-';
    g_flag_holder[477][18] = '-';
    g_flag_holder[477][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[477][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[477][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag478_is_here() {
    g_flag_holder[478][8] = '-';
    g_flag_holder[478][13] = '-';
    g_flag_holder[478][18] = '-';
    g_flag_holder[478][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[478][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[478][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag479_is_here() {
    g_flag_holder[479][8] = '-';
    g_flag_holder[479][13] = '-';
    g_flag_holder[479][18] = '-';
    g_flag_holder[479][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[479][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[479][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag480_is_here() {
    g_flag_holder[480][8] = '-';
    g_flag_holder[480][13] = '-';
    g_flag_holder[480][18] = '-';
    g_flag_holder[480][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[480][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[480][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag481_is_here() {
    g_flag_holder[481][8] = '-';
    g_flag_holder[481][13] = '-';
    g_flag_holder[481][18] = '-';
    g_flag_holder[481][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[481][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[481][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag482_is_here() {
    g_flag_holder[482][8] = '-';
    g_flag_holder[482][13] = '-';
    g_flag_holder[482][18] = '-';
    g_flag_holder[482][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[482][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[482][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag483_is_here() {
    g_flag_holder[483][8] = '-';
    g_flag_holder[483][13] = '-';
    g_flag_holder[483][18] = '-';
    g_flag_holder[483][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[483][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[483][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag484_is_here() {
    g_flag_holder[484][8] = '-';
    g_flag_holder[484][13] = '-';
    g_flag_holder[484][18] = '-';
    g_flag_holder[484][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[484][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[484][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag485_is_here() {
    g_flag_holder[485][8] = '-';
    g_flag_holder[485][13] = '-';
    g_flag_holder[485][18] = '-';
    g_flag_holder[485][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[485][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[485][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag486_is_here() {
    g_flag_holder[486][8] = '-';
    g_flag_holder[486][13] = '-';
    g_flag_holder[486][18] = '-';
    g_flag_holder[486][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[486][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[486][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag487_is_here() {
    g_flag_holder[487][8] = '-';
    g_flag_holder[487][13] = '-';
    g_flag_holder[487][18] = '-';
    g_flag_holder[487][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[487][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[487][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag488_is_here() {
    g_flag_holder[488][8] = '-';
    g_flag_holder[488][13] = '-';
    g_flag_holder[488][18] = '-';
    g_flag_holder[488][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[488][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[488][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag489_is_here() {
    g_flag_holder[489][8] = '-';
    g_flag_holder[489][13] = '-';
    g_flag_holder[489][18] = '-';
    g_flag_holder[489][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[489][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[489][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag490_is_here() {
    g_flag_holder[490][8] = '-';
    g_flag_holder[490][13] = '-';
    g_flag_holder[490][18] = '-';
    g_flag_holder[490][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[490][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[490][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag491_is_here() {
    g_flag_holder[491][8] = '-';
    g_flag_holder[491][13] = '-';
    g_flag_holder[491][18] = '-';
    g_flag_holder[491][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[491][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[491][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag492_is_here() {
    g_flag_holder[492][8] = '-';
    g_flag_holder[492][13] = '-';
    g_flag_holder[492][18] = '-';
    g_flag_holder[492][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[492][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[492][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag493_is_here() {
    g_flag_holder[493][8] = '-';
    g_flag_holder[493][13] = '-';
    g_flag_holder[493][18] = '-';
    g_flag_holder[493][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[493][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[493][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag494_is_here() {
    g_flag_holder[494][8] = '-';
    g_flag_holder[494][13] = '-';
    g_flag_holder[494][18] = '-';
    g_flag_holder[494][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[494][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[494][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag495_is_here() {
    g_flag_holder[495][8] = '-';
    g_flag_holder[495][13] = '-';
    g_flag_holder[495][18] = '-';
    g_flag_holder[495][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[495][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[495][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag496_is_here() {
    g_flag_holder[496][8] = '-';
    g_flag_holder[496][13] = '-';
    g_flag_holder[496][18] = '-';
    g_flag_holder[496][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[496][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[496][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag497_is_here() {
    g_flag_holder[497][8] = '-';
    g_flag_holder[497][13] = '-';
    g_flag_holder[497][18] = '-';
    g_flag_holder[497][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[497][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[497][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag498_is_here() {
    g_flag_holder[498][8] = '-';
    g_flag_holder[498][13] = '-';
    g_flag_holder[498][18] = '-';
    g_flag_holder[498][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[498][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[498][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag499_is_here() {
    g_flag_holder[499][8] = '-';
    g_flag_holder[499][13] = '-';
    g_flag_holder[499][18] = '-';
    g_flag_holder[499][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[499][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[499][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag500_is_here() {
    g_flag_holder[500][8] = '-';
    g_flag_holder[500][13] = '-';
    g_flag_holder[500][18] = '-';
    g_flag_holder[500][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[500][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[500][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag501_is_here() {
    g_flag_holder[501][8] = '-';
    g_flag_holder[501][13] = '-';
    g_flag_holder[501][18] = '-';
    g_flag_holder[501][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[501][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[501][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag502_is_here() {
    g_flag_holder[502][8] = '-';
    g_flag_holder[502][13] = '-';
    g_flag_holder[502][18] = '-';
    g_flag_holder[502][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[502][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[502][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag503_is_here() {
    g_flag_holder[503][8] = '-';
    g_flag_holder[503][13] = '-';
    g_flag_holder[503][18] = '-';
    g_flag_holder[503][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[503][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[503][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag504_is_here() {
    g_flag_holder[504][8] = '-';
    g_flag_holder[504][13] = '-';
    g_flag_holder[504][18] = '-';
    g_flag_holder[504][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[504][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[504][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag505_is_here() {
    g_flag_holder[505][8] = '-';
    g_flag_holder[505][13] = '-';
    g_flag_holder[505][18] = '-';
    g_flag_holder[505][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[505][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[505][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag506_is_here() {
    g_flag_holder[506][8] = '-';
    g_flag_holder[506][13] = '-';
    g_flag_holder[506][18] = '-';
    g_flag_holder[506][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[506][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[506][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag507_is_here() {
    g_flag_holder[507][8] = '-';
    g_flag_holder[507][13] = '-';
    g_flag_holder[507][18] = '-';
    g_flag_holder[507][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[507][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[507][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag508_is_here() {
    g_flag_holder[508][8] = '-';
    g_flag_holder[508][13] = '-';
    g_flag_holder[508][18] = '-';
    g_flag_holder[508][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[508][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[508][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag509_is_here() {
    g_flag_holder[509][8] = '-';
    g_flag_holder[509][13] = '-';
    g_flag_holder[509][18] = '-';
    g_flag_holder[509][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[509][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[509][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag510_is_here() {
    g_flag_holder[510][8] = '-';
    g_flag_holder[510][13] = '-';
    g_flag_holder[510][18] = '-';
    g_flag_holder[510][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[510][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[510][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag511_is_here() {
    g_flag_holder[511][8] = '-';
    g_flag_holder[511][13] = '-';
    g_flag_holder[511][18] = '-';
    g_flag_holder[511][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[511][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[511][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag512_is_here() {
    g_flag_holder[512][8] = '-';
    g_flag_holder[512][13] = '-';
    g_flag_holder[512][18] = '-';
    g_flag_holder[512][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[512][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[512][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag513_is_here() {
    g_flag_holder[513][8] = '-';
    g_flag_holder[513][13] = '-';
    g_flag_holder[513][18] = '-';
    g_flag_holder[513][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[513][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[513][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag514_is_here() {
    g_flag_holder[514][8] = '-';
    g_flag_holder[514][13] = '-';
    g_flag_holder[514][18] = '-';
    g_flag_holder[514][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[514][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[514][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag515_is_here() {
    g_flag_holder[515][8] = '-';
    g_flag_holder[515][13] = '-';
    g_flag_holder[515][18] = '-';
    g_flag_holder[515][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[515][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[515][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag516_is_here() {
    g_flag_holder[516][8] = '-';
    g_flag_holder[516][13] = '-';
    g_flag_holder[516][18] = '-';
    g_flag_holder[516][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[516][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[516][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag517_is_here() {
    g_flag_holder[517][8] = '-';
    g_flag_holder[517][13] = '-';
    g_flag_holder[517][18] = '-';
    g_flag_holder[517][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[517][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[517][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag518_is_here() {
    g_flag_holder[518][8] = '-';
    g_flag_holder[518][13] = '-';
    g_flag_holder[518][18] = '-';
    g_flag_holder[518][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[518][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[518][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag519_is_here() {
    g_flag_holder[519][8] = '-';
    g_flag_holder[519][13] = '-';
    g_flag_holder[519][18] = '-';
    g_flag_holder[519][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[519][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[519][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag520_is_here() {
    g_flag_holder[520][8] = '-';
    g_flag_holder[520][13] = '-';
    g_flag_holder[520][18] = '-';
    g_flag_holder[520][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[520][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[520][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag521_is_here() {
    g_flag_holder[521][8] = '-';
    g_flag_holder[521][13] = '-';
    g_flag_holder[521][18] = '-';
    g_flag_holder[521][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[521][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[521][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag522_is_here() {
    g_flag_holder[522][8] = '-';
    g_flag_holder[522][13] = '-';
    g_flag_holder[522][18] = '-';
    g_flag_holder[522][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[522][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[522][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag523_is_here() {
    g_flag_holder[523][8] = '-';
    g_flag_holder[523][13] = '-';
    g_flag_holder[523][18] = '-';
    g_flag_holder[523][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[523][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[523][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag524_is_here() {
    g_flag_holder[524][8] = '-';
    g_flag_holder[524][13] = '-';
    g_flag_holder[524][18] = '-';
    g_flag_holder[524][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[524][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[524][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag525_is_here() {
    g_flag_holder[525][8] = '-';
    g_flag_holder[525][13] = '-';
    g_flag_holder[525][18] = '-';
    g_flag_holder[525][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[525][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[525][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag526_is_here() {
    g_flag_holder[526][8] = '-';
    g_flag_holder[526][13] = '-';
    g_flag_holder[526][18] = '-';
    g_flag_holder[526][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[526][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[526][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag527_is_here() {
    g_flag_holder[527][8] = '-';
    g_flag_holder[527][13] = '-';
    g_flag_holder[527][18] = '-';
    g_flag_holder[527][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[527][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[527][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag528_is_here() {
    g_flag_holder[528][8] = '-';
    g_flag_holder[528][13] = '-';
    g_flag_holder[528][18] = '-';
    g_flag_holder[528][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[528][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[528][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag529_is_here() {
    g_flag_holder[529][8] = '-';
    g_flag_holder[529][13] = '-';
    g_flag_holder[529][18] = '-';
    g_flag_holder[529][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[529][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[529][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag530_is_here() {
    g_flag_holder[530][8] = '-';
    g_flag_holder[530][13] = '-';
    g_flag_holder[530][18] = '-';
    g_flag_holder[530][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[530][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[530][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag531_is_here() {
    g_flag_holder[531][8] = '-';
    g_flag_holder[531][13] = '-';
    g_flag_holder[531][18] = '-';
    g_flag_holder[531][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[531][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[531][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag532_is_here() {
    g_flag_holder[532][8] = '-';
    g_flag_holder[532][13] = '-';
    g_flag_holder[532][18] = '-';
    g_flag_holder[532][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[532][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[532][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag533_is_here() {
    g_flag_holder[533][8] = '-';
    g_flag_holder[533][13] = '-';
    g_flag_holder[533][18] = '-';
    g_flag_holder[533][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[533][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[533][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag534_is_here() {
    g_flag_holder[534][8] = '-';
    g_flag_holder[534][13] = '-';
    g_flag_holder[534][18] = '-';
    g_flag_holder[534][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[534][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[534][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag535_is_here() {
    g_flag_holder[535][8] = '-';
    g_flag_holder[535][13] = '-';
    g_flag_holder[535][18] = '-';
    g_flag_holder[535][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[535][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[535][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag536_is_here() {
    g_flag_holder[536][8] = '-';
    g_flag_holder[536][13] = '-';
    g_flag_holder[536][18] = '-';
    g_flag_holder[536][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[536][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[536][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag537_is_here() {
    g_flag_holder[537][8] = '-';
    g_flag_holder[537][13] = '-';
    g_flag_holder[537][18] = '-';
    g_flag_holder[537][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[537][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[537][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag538_is_here() {
    g_flag_holder[538][8] = '-';
    g_flag_holder[538][13] = '-';
    g_flag_holder[538][18] = '-';
    g_flag_holder[538][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[538][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[538][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag539_is_here() {
    g_flag_holder[539][8] = '-';
    g_flag_holder[539][13] = '-';
    g_flag_holder[539][18] = '-';
    g_flag_holder[539][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[539][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[539][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag540_is_here() {
    g_flag_holder[540][8] = '-';
    g_flag_holder[540][13] = '-';
    g_flag_holder[540][18] = '-';
    g_flag_holder[540][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[540][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[540][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag541_is_here() {
    g_flag_holder[541][8] = '-';
    g_flag_holder[541][13] = '-';
    g_flag_holder[541][18] = '-';
    g_flag_holder[541][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[541][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[541][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag542_is_here() {
    g_flag_holder[542][8] = '-';
    g_flag_holder[542][13] = '-';
    g_flag_holder[542][18] = '-';
    g_flag_holder[542][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[542][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[542][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag543_is_here() {
    g_flag_holder[543][8] = '-';
    g_flag_holder[543][13] = '-';
    g_flag_holder[543][18] = '-';
    g_flag_holder[543][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[543][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[543][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag544_is_here() {
    g_flag_holder[544][8] = '-';
    g_flag_holder[544][13] = '-';
    g_flag_holder[544][18] = '-';
    g_flag_holder[544][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[544][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[544][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag545_is_here() {
    g_flag_holder[545][8] = '-';
    g_flag_holder[545][13] = '-';
    g_flag_holder[545][18] = '-';
    g_flag_holder[545][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[545][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[545][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag546_is_here() {
    g_flag_holder[546][8] = '-';
    g_flag_holder[546][13] = '-';
    g_flag_holder[546][18] = '-';
    g_flag_holder[546][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[546][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[546][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag547_is_here() {
    g_flag_holder[547][8] = '-';
    g_flag_holder[547][13] = '-';
    g_flag_holder[547][18] = '-';
    g_flag_holder[547][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[547][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[547][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag548_is_here() {
    g_flag_holder[548][8] = '-';
    g_flag_holder[548][13] = '-';
    g_flag_holder[548][18] = '-';
    g_flag_holder[548][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[548][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[548][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag549_is_here() {
    g_flag_holder[549][8] = '-';
    g_flag_holder[549][13] = '-';
    g_flag_holder[549][18] = '-';
    g_flag_holder[549][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[549][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[549][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag550_is_here() {
    g_flag_holder[550][8] = '-';
    g_flag_holder[550][13] = '-';
    g_flag_holder[550][18] = '-';
    g_flag_holder[550][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[550][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[550][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag551_is_here() {
    g_flag_holder[551][8] = '-';
    g_flag_holder[551][13] = '-';
    g_flag_holder[551][18] = '-';
    g_flag_holder[551][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[551][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[551][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag552_is_here() {
    g_flag_holder[552][8] = '-';
    g_flag_holder[552][13] = '-';
    g_flag_holder[552][18] = '-';
    g_flag_holder[552][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[552][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[552][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag553_is_here() {
    g_flag_holder[553][8] = '-';
    g_flag_holder[553][13] = '-';
    g_flag_holder[553][18] = '-';
    g_flag_holder[553][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[553][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[553][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag554_is_here() {
    g_flag_holder[554][8] = '-';
    g_flag_holder[554][13] = '-';
    g_flag_holder[554][18] = '-';
    g_flag_holder[554][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[554][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[554][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag555_is_here() {
    g_flag_holder[555][8] = '-';
    g_flag_holder[555][13] = '-';
    g_flag_holder[555][18] = '-';
    g_flag_holder[555][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[555][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[555][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag556_is_here() {
    g_flag_holder[556][8] = '-';
    g_flag_holder[556][13] = '-';
    g_flag_holder[556][18] = '-';
    g_flag_holder[556][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[556][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[556][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag557_is_here() {
    g_flag_holder[557][8] = '-';
    g_flag_holder[557][13] = '-';
    g_flag_holder[557][18] = '-';
    g_flag_holder[557][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[557][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[557][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag558_is_here() {
    g_flag_holder[558][8] = '-';
    g_flag_holder[558][13] = '-';
    g_flag_holder[558][18] = '-';
    g_flag_holder[558][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[558][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[558][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag559_is_here() {
    g_flag_holder[559][8] = '-';
    g_flag_holder[559][13] = '-';
    g_flag_holder[559][18] = '-';
    g_flag_holder[559][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[559][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[559][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag560_is_here() {
    g_flag_holder[560][8] = '-';
    g_flag_holder[560][13] = '-';
    g_flag_holder[560][18] = '-';
    g_flag_holder[560][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[560][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[560][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag561_is_here() {
    g_flag_holder[561][8] = '-';
    g_flag_holder[561][13] = '-';
    g_flag_holder[561][18] = '-';
    g_flag_holder[561][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[561][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[561][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag562_is_here() {
    g_flag_holder[562][8] = '-';
    g_flag_holder[562][13] = '-';
    g_flag_holder[562][18] = '-';
    g_flag_holder[562][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[562][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[562][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag563_is_here() {
    g_flag_holder[563][8] = '-';
    g_flag_holder[563][13] = '-';
    g_flag_holder[563][18] = '-';
    g_flag_holder[563][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[563][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[563][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag564_is_here() {
    g_flag_holder[564][8] = '-';
    g_flag_holder[564][13] = '-';
    g_flag_holder[564][18] = '-';
    g_flag_holder[564][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[564][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[564][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag565_is_here() {
    g_flag_holder[565][8] = '-';
    g_flag_holder[565][13] = '-';
    g_flag_holder[565][18] = '-';
    g_flag_holder[565][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[565][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[565][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag566_is_here() {
    g_flag_holder[566][8] = '-';
    g_flag_holder[566][13] = '-';
    g_flag_holder[566][18] = '-';
    g_flag_holder[566][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[566][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[566][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag567_is_here() {
    g_flag_holder[567][8] = '-';
    g_flag_holder[567][13] = '-';
    g_flag_holder[567][18] = '-';
    g_flag_holder[567][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[567][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[567][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag568_is_here() {
    g_flag_holder[568][8] = '-';
    g_flag_holder[568][13] = '-';
    g_flag_holder[568][18] = '-';
    g_flag_holder[568][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[568][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[568][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag569_is_here() {
    g_flag_holder[569][8] = '-';
    g_flag_holder[569][13] = '-';
    g_flag_holder[569][18] = '-';
    g_flag_holder[569][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[569][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[569][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag570_is_here() {
    g_flag_holder[570][8] = '-';
    g_flag_holder[570][13] = '-';
    g_flag_holder[570][18] = '-';
    g_flag_holder[570][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[570][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[570][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag571_is_here() {
    g_flag_holder[571][8] = '-';
    g_flag_holder[571][13] = '-';
    g_flag_holder[571][18] = '-';
    g_flag_holder[571][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[571][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[571][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag572_is_here() {
    g_flag_holder[572][8] = '-';
    g_flag_holder[572][13] = '-';
    g_flag_holder[572][18] = '-';
    g_flag_holder[572][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[572][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[572][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag573_is_here() {
    g_flag_holder[573][8] = '-';
    g_flag_holder[573][13] = '-';
    g_flag_holder[573][18] = '-';
    g_flag_holder[573][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[573][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[573][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag574_is_here() {
    g_flag_holder[574][8] = '-';
    g_flag_holder[574][13] = '-';
    g_flag_holder[574][18] = '-';
    g_flag_holder[574][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[574][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[574][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag575_is_here() {
    g_flag_holder[575][8] = '-';
    g_flag_holder[575][13] = '-';
    g_flag_holder[575][18] = '-';
    g_flag_holder[575][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[575][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[575][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag576_is_here() {
    g_flag_holder[576][8] = '-';
    g_flag_holder[576][13] = '-';
    g_flag_holder[576][18] = '-';
    g_flag_holder[576][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[576][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[576][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag577_is_here() {
    g_flag_holder[577][8] = '-';
    g_flag_holder[577][13] = '-';
    g_flag_holder[577][18] = '-';
    g_flag_holder[577][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[577][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[577][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag578_is_here() {
    g_flag_holder[578][8] = '-';
    g_flag_holder[578][13] = '-';
    g_flag_holder[578][18] = '-';
    g_flag_holder[578][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[578][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[578][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag579_is_here() {
    g_flag_holder[579][8] = '-';
    g_flag_holder[579][13] = '-';
    g_flag_holder[579][18] = '-';
    g_flag_holder[579][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[579][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[579][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag580_is_here() {
    g_flag_holder[580][8] = '-';
    g_flag_holder[580][13] = '-';
    g_flag_holder[580][18] = '-';
    g_flag_holder[580][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[580][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[580][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag581_is_here() {
    g_flag_holder[581][8] = '-';
    g_flag_holder[581][13] = '-';
    g_flag_holder[581][18] = '-';
    g_flag_holder[581][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[581][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[581][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag582_is_here() {
    g_flag_holder[582][8] = '-';
    g_flag_holder[582][13] = '-';
    g_flag_holder[582][18] = '-';
    g_flag_holder[582][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[582][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[582][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag583_is_here() {
    g_flag_holder[583][8] = '-';
    g_flag_holder[583][13] = '-';
    g_flag_holder[583][18] = '-';
    g_flag_holder[583][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[583][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[583][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag584_is_here() {
    g_flag_holder[584][8] = '-';
    g_flag_holder[584][13] = '-';
    g_flag_holder[584][18] = '-';
    g_flag_holder[584][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[584][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[584][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag585_is_here() {
    g_flag_holder[585][8] = '-';
    g_flag_holder[585][13] = '-';
    g_flag_holder[585][18] = '-';
    g_flag_holder[585][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[585][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[585][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag586_is_here() {
    g_flag_holder[586][8] = '-';
    g_flag_holder[586][13] = '-';
    g_flag_holder[586][18] = '-';
    g_flag_holder[586][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[586][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[586][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag587_is_here() {
    g_flag_holder[587][8] = '-';
    g_flag_holder[587][13] = '-';
    g_flag_holder[587][18] = '-';
    g_flag_holder[587][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[587][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[587][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag588_is_here() {
    g_flag_holder[588][8] = '-';
    g_flag_holder[588][13] = '-';
    g_flag_holder[588][18] = '-';
    g_flag_holder[588][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[588][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[588][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag589_is_here() {
    g_flag_holder[589][8] = '-';
    g_flag_holder[589][13] = '-';
    g_flag_holder[589][18] = '-';
    g_flag_holder[589][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[589][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[589][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag590_is_here() {
    g_flag_holder[590][8] = '-';
    g_flag_holder[590][13] = '-';
    g_flag_holder[590][18] = '-';
    g_flag_holder[590][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[590][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[590][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag591_is_here() {
    g_flag_holder[591][8] = '-';
    g_flag_holder[591][13] = '-';
    g_flag_holder[591][18] = '-';
    g_flag_holder[591][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[591][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[591][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag592_is_here() {
    g_flag_holder[592][8] = '-';
    g_flag_holder[592][13] = '-';
    g_flag_holder[592][18] = '-';
    g_flag_holder[592][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[592][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[592][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag593_is_here() {
    g_flag_holder[593][8] = '-';
    g_flag_holder[593][13] = '-';
    g_flag_holder[593][18] = '-';
    g_flag_holder[593][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[593][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[593][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag594_is_here() {
    g_flag_holder[594][8] = '-';
    g_flag_holder[594][13] = '-';
    g_flag_holder[594][18] = '-';
    g_flag_holder[594][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[594][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[594][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag595_is_here() {
    g_flag_holder[595][8] = '-';
    g_flag_holder[595][13] = '-';
    g_flag_holder[595][18] = '-';
    g_flag_holder[595][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[595][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[595][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag596_is_here() {
    g_flag_holder[596][8] = '-';
    g_flag_holder[596][13] = '-';
    g_flag_holder[596][18] = '-';
    g_flag_holder[596][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[596][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[596][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag597_is_here() {
    g_flag_holder[597][8] = '-';
    g_flag_holder[597][13] = '-';
    g_flag_holder[597][18] = '-';
    g_flag_holder[597][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[597][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[597][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag598_is_here() {
    g_flag_holder[598][8] = '-';
    g_flag_holder[598][13] = '-';
    g_flag_holder[598][18] = '-';
    g_flag_holder[598][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[598][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[598][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag599_is_here() {
    g_flag_holder[599][8] = '-';
    g_flag_holder[599][13] = '-';
    g_flag_holder[599][18] = '-';
    g_flag_holder[599][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[599][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[599][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag600_is_here() {
    g_flag_holder[600][8] = '-';
    g_flag_holder[600][13] = '-';
    g_flag_holder[600][18] = '-';
    g_flag_holder[600][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[600][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[600][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag601_is_here() {
    g_flag_holder[601][8] = '-';
    g_flag_holder[601][13] = '-';
    g_flag_holder[601][18] = '-';
    g_flag_holder[601][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[601][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[601][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag602_is_here() {
    g_flag_holder[602][8] = '-';
    g_flag_holder[602][13] = '-';
    g_flag_holder[602][18] = '-';
    g_flag_holder[602][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[602][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[602][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag603_is_here() {
    g_flag_holder[603][8] = '-';
    g_flag_holder[603][13] = '-';
    g_flag_holder[603][18] = '-';
    g_flag_holder[603][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[603][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[603][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag604_is_here() {
    g_flag_holder[604][8] = '-';
    g_flag_holder[604][13] = '-';
    g_flag_holder[604][18] = '-';
    g_flag_holder[604][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[604][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[604][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag605_is_here() {
    g_flag_holder[605][8] = '-';
    g_flag_holder[605][13] = '-';
    g_flag_holder[605][18] = '-';
    g_flag_holder[605][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[605][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[605][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag606_is_here() {
    g_flag_holder[606][8] = '-';
    g_flag_holder[606][13] = '-';
    g_flag_holder[606][18] = '-';
    g_flag_holder[606][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[606][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[606][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag607_is_here() {
    g_flag_holder[607][8] = '-';
    g_flag_holder[607][13] = '-';
    g_flag_holder[607][18] = '-';
    g_flag_holder[607][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[607][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[607][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag608_is_here() {
    g_flag_holder[608][8] = '-';
    g_flag_holder[608][13] = '-';
    g_flag_holder[608][18] = '-';
    g_flag_holder[608][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[608][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[608][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag609_is_here() {
    g_flag_holder[609][8] = '-';
    g_flag_holder[609][13] = '-';
    g_flag_holder[609][18] = '-';
    g_flag_holder[609][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[609][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[609][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag610_is_here() {
    g_flag_holder[610][8] = '-';
    g_flag_holder[610][13] = '-';
    g_flag_holder[610][18] = '-';
    g_flag_holder[610][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[610][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[610][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag611_is_here() {
    g_flag_holder[611][8] = '-';
    g_flag_holder[611][13] = '-';
    g_flag_holder[611][18] = '-';
    g_flag_holder[611][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[611][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[611][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag612_is_here() {
    g_flag_holder[612][8] = '-';
    g_flag_holder[612][13] = '-';
    g_flag_holder[612][18] = '-';
    g_flag_holder[612][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[612][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[612][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag613_is_here() {
    g_flag_holder[613][8] = '-';
    g_flag_holder[613][13] = '-';
    g_flag_holder[613][18] = '-';
    g_flag_holder[613][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[613][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[613][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag614_is_here() {
    g_flag_holder[614][8] = '-';
    g_flag_holder[614][13] = '-';
    g_flag_holder[614][18] = '-';
    g_flag_holder[614][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[614][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[614][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag615_is_here() {
    g_flag_holder[615][8] = '-';
    g_flag_holder[615][13] = '-';
    g_flag_holder[615][18] = '-';
    g_flag_holder[615][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[615][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[615][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag616_is_here() {
    g_flag_holder[616][8] = '-';
    g_flag_holder[616][13] = '-';
    g_flag_holder[616][18] = '-';
    g_flag_holder[616][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[616][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[616][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag617_is_here() {
    g_flag_holder[617][8] = '-';
    g_flag_holder[617][13] = '-';
    g_flag_holder[617][18] = '-';
    g_flag_holder[617][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[617][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[617][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag618_is_here() {
    g_flag_holder[618][8] = '-';
    g_flag_holder[618][13] = '-';
    g_flag_holder[618][18] = '-';
    g_flag_holder[618][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[618][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[618][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag619_is_here() {
    g_flag_holder[619][8] = '-';
    g_flag_holder[619][13] = '-';
    g_flag_holder[619][18] = '-';
    g_flag_holder[619][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[619][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[619][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag620_is_here() {
    g_flag_holder[620][8] = '-';
    g_flag_holder[620][13] = '-';
    g_flag_holder[620][18] = '-';
    g_flag_holder[620][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[620][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[620][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag621_is_here() {
    g_flag_holder[621][8] = '-';
    g_flag_holder[621][13] = '-';
    g_flag_holder[621][18] = '-';
    g_flag_holder[621][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[621][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[621][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag622_is_here() {
    g_flag_holder[622][8] = '-';
    g_flag_holder[622][13] = '-';
    g_flag_holder[622][18] = '-';
    g_flag_holder[622][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[622][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[622][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag623_is_here() {
    g_flag_holder[623][8] = '-';
    g_flag_holder[623][13] = '-';
    g_flag_holder[623][18] = '-';
    g_flag_holder[623][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[623][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[623][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag624_is_here() {
    g_flag_holder[624][8] = '-';
    g_flag_holder[624][13] = '-';
    g_flag_holder[624][18] = '-';
    g_flag_holder[624][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[624][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[624][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag625_is_here() {
    g_flag_holder[625][8] = '-';
    g_flag_holder[625][13] = '-';
    g_flag_holder[625][18] = '-';
    g_flag_holder[625][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[625][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[625][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag626_is_here() {
    g_flag_holder[626][8] = '-';
    g_flag_holder[626][13] = '-';
    g_flag_holder[626][18] = '-';
    g_flag_holder[626][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[626][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[626][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag627_is_here() {
    g_flag_holder[627][8] = '-';
    g_flag_holder[627][13] = '-';
    g_flag_holder[627][18] = '-';
    g_flag_holder[627][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[627][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[627][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag628_is_here() {
    g_flag_holder[628][8] = '-';
    g_flag_holder[628][13] = '-';
    g_flag_holder[628][18] = '-';
    g_flag_holder[628][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[628][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[628][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag629_is_here() {
    g_flag_holder[629][8] = '-';
    g_flag_holder[629][13] = '-';
    g_flag_holder[629][18] = '-';
    g_flag_holder[629][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[629][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[629][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag630_is_here() {
    g_flag_holder[630][8] = '-';
    g_flag_holder[630][13] = '-';
    g_flag_holder[630][18] = '-';
    g_flag_holder[630][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[630][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[630][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag631_is_here() {
    g_flag_holder[631][8] = '-';
    g_flag_holder[631][13] = '-';
    g_flag_holder[631][18] = '-';
    g_flag_holder[631][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[631][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[631][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag632_is_here() {
    g_flag_holder[632][8] = '-';
    g_flag_holder[632][13] = '-';
    g_flag_holder[632][18] = '-';
    g_flag_holder[632][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[632][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[632][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag633_is_here() {
    g_flag_holder[633][8] = '-';
    g_flag_holder[633][13] = '-';
    g_flag_holder[633][18] = '-';
    g_flag_holder[633][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[633][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[633][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag634_is_here() {
    g_flag_holder[634][8] = '-';
    g_flag_holder[634][13] = '-';
    g_flag_holder[634][18] = '-';
    g_flag_holder[634][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[634][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[634][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag635_is_here() {
    g_flag_holder[635][8] = '-';
    g_flag_holder[635][13] = '-';
    g_flag_holder[635][18] = '-';
    g_flag_holder[635][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[635][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[635][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag636_is_here() {
    g_flag_holder[636][8] = '-';
    g_flag_holder[636][13] = '-';
    g_flag_holder[636][18] = '-';
    g_flag_holder[636][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[636][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[636][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag637_is_here() {
    g_flag_holder[637][8] = '-';
    g_flag_holder[637][13] = '-';
    g_flag_holder[637][18] = '-';
    g_flag_holder[637][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[637][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[637][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag638_is_here() {
    g_flag_holder[638][8] = '-';
    g_flag_holder[638][13] = '-';
    g_flag_holder[638][18] = '-';
    g_flag_holder[638][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[638][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[638][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag639_is_here() {
    g_flag_holder[639][8] = '-';
    g_flag_holder[639][13] = '-';
    g_flag_holder[639][18] = '-';
    g_flag_holder[639][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[639][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[639][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag640_is_here() {
    g_flag_holder[640][8] = '-';
    g_flag_holder[640][13] = '-';
    g_flag_holder[640][18] = '-';
    g_flag_holder[640][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[640][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[640][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag641_is_here() {
    g_flag_holder[641][8] = '-';
    g_flag_holder[641][13] = '-';
    g_flag_holder[641][18] = '-';
    g_flag_holder[641][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[641][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[641][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag642_is_here() {
    g_flag_holder[642][8] = '-';
    g_flag_holder[642][13] = '-';
    g_flag_holder[642][18] = '-';
    g_flag_holder[642][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[642][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[642][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag643_is_here() {
    g_flag_holder[643][8] = '-';
    g_flag_holder[643][13] = '-';
    g_flag_holder[643][18] = '-';
    g_flag_holder[643][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[643][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[643][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag644_is_here() {
    g_flag_holder[644][8] = '-';
    g_flag_holder[644][13] = '-';
    g_flag_holder[644][18] = '-';
    g_flag_holder[644][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[644][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[644][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag645_is_here() {
    g_flag_holder[645][8] = '-';
    g_flag_holder[645][13] = '-';
    g_flag_holder[645][18] = '-';
    g_flag_holder[645][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[645][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[645][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag646_is_here() {
    g_flag_holder[646][8] = '-';
    g_flag_holder[646][13] = '-';
    g_flag_holder[646][18] = '-';
    g_flag_holder[646][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[646][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[646][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag647_is_here() {
    g_flag_holder[647][8] = '-';
    g_flag_holder[647][13] = '-';
    g_flag_holder[647][18] = '-';
    g_flag_holder[647][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[647][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[647][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag648_is_here() {
    g_flag_holder[648][8] = '-';
    g_flag_holder[648][13] = '-';
    g_flag_holder[648][18] = '-';
    g_flag_holder[648][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[648][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[648][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag649_is_here() {
    g_flag_holder[649][8] = '-';
    g_flag_holder[649][13] = '-';
    g_flag_holder[649][18] = '-';
    g_flag_holder[649][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[649][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[649][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag650_is_here() {
    g_flag_holder[650][8] = '-';
    g_flag_holder[650][13] = '-';
    g_flag_holder[650][18] = '-';
    g_flag_holder[650][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[650][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[650][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag651_is_here() {
    g_flag_holder[651][8] = '-';
    g_flag_holder[651][13] = '-';
    g_flag_holder[651][18] = '-';
    g_flag_holder[651][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[651][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[651][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag652_is_here() {
    g_flag_holder[652][8] = '-';
    g_flag_holder[652][13] = '-';
    g_flag_holder[652][18] = '-';
    g_flag_holder[652][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[652][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[652][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag653_is_here() {
    g_flag_holder[653][8] = '-';
    g_flag_holder[653][13] = '-';
    g_flag_holder[653][18] = '-';
    g_flag_holder[653][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[653][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[653][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag654_is_here() {
    g_flag_holder[654][8] = '-';
    g_flag_holder[654][13] = '-';
    g_flag_holder[654][18] = '-';
    g_flag_holder[654][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[654][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[654][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag655_is_here() {
    g_flag_holder[655][8] = '-';
    g_flag_holder[655][13] = '-';
    g_flag_holder[655][18] = '-';
    g_flag_holder[655][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[655][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[655][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag656_is_here() {
    g_flag_holder[656][8] = '-';
    g_flag_holder[656][13] = '-';
    g_flag_holder[656][18] = '-';
    g_flag_holder[656][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[656][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[656][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag657_is_here() {
    g_flag_holder[657][8] = '-';
    g_flag_holder[657][13] = '-';
    g_flag_holder[657][18] = '-';
    g_flag_holder[657][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[657][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[657][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag658_is_here() {
    g_flag_holder[658][8] = '-';
    g_flag_holder[658][13] = '-';
    g_flag_holder[658][18] = '-';
    g_flag_holder[658][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[658][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[658][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag659_is_here() {
    g_flag_holder[659][8] = '-';
    g_flag_holder[659][13] = '-';
    g_flag_holder[659][18] = '-';
    g_flag_holder[659][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[659][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[659][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag660_is_here() {
    g_flag_holder[660][8] = '-';
    g_flag_holder[660][13] = '-';
    g_flag_holder[660][18] = '-';
    g_flag_holder[660][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[660][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[660][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag661_is_here() {
    g_flag_holder[661][8] = '-';
    g_flag_holder[661][13] = '-';
    g_flag_holder[661][18] = '-';
    g_flag_holder[661][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[661][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[661][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag662_is_here() {
    g_flag_holder[662][8] = '-';
    g_flag_holder[662][13] = '-';
    g_flag_holder[662][18] = '-';
    g_flag_holder[662][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[662][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[662][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag663_is_here() {
    g_flag_holder[663][8] = '-';
    g_flag_holder[663][13] = '-';
    g_flag_holder[663][18] = '-';
    g_flag_holder[663][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[663][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[663][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag664_is_here() {
    g_flag_holder[664][8] = '-';
    g_flag_holder[664][13] = '-';
    g_flag_holder[664][18] = '-';
    g_flag_holder[664][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[664][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[664][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag665_is_here() {
    g_flag_holder[665][8] = '-';
    g_flag_holder[665][13] = '-';
    g_flag_holder[665][18] = '-';
    g_flag_holder[665][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[665][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[665][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag666_is_here() {
    g_flag_holder[666][8] = '-';
    g_flag_holder[666][13] = '-';
    g_flag_holder[666][18] = '-';
    g_flag_holder[666][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[666][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[666][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag667_is_here() {
    g_flag_holder[667][8] = '-';
    g_flag_holder[667][13] = '-';
    g_flag_holder[667][18] = '-';
    g_flag_holder[667][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[667][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[667][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag668_is_here() {
    g_flag_holder[668][8] = '-';
    g_flag_holder[668][13] = '-';
    g_flag_holder[668][18] = '-';
    g_flag_holder[668][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[668][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[668][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag669_is_here() {
    g_flag_holder[669][8] = '-';
    g_flag_holder[669][13] = '-';
    g_flag_holder[669][18] = '-';
    g_flag_holder[669][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[669][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[669][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag670_is_here() {
    g_flag_holder[670][8] = '-';
    g_flag_holder[670][13] = '-';
    g_flag_holder[670][18] = '-';
    g_flag_holder[670][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[670][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[670][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag671_is_here() {
    g_flag_holder[671][8] = '-';
    g_flag_holder[671][13] = '-';
    g_flag_holder[671][18] = '-';
    g_flag_holder[671][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[671][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[671][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag672_is_here() {
    g_flag_holder[672][8] = '-';
    g_flag_holder[672][13] = '-';
    g_flag_holder[672][18] = '-';
    g_flag_holder[672][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[672][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[672][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag673_is_here() {
    g_flag_holder[673][8] = '-';
    g_flag_holder[673][13] = '-';
    g_flag_holder[673][18] = '-';
    g_flag_holder[673][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[673][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[673][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag674_is_here() {
    g_flag_holder[674][8] = '-';
    g_flag_holder[674][13] = '-';
    g_flag_holder[674][18] = '-';
    g_flag_holder[674][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[674][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[674][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag675_is_here() {
    g_flag_holder[675][8] = '-';
    g_flag_holder[675][13] = '-';
    g_flag_holder[675][18] = '-';
    g_flag_holder[675][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[675][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[675][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag676_is_here() {
    g_flag_holder[676][8] = '-';
    g_flag_holder[676][13] = '-';
    g_flag_holder[676][18] = '-';
    g_flag_holder[676][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[676][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[676][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag677_is_here() {
    g_flag_holder[677][8] = '-';
    g_flag_holder[677][13] = '-';
    g_flag_holder[677][18] = '-';
    g_flag_holder[677][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[677][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[677][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag678_is_here() {
    g_flag_holder[678][8] = '-';
    g_flag_holder[678][13] = '-';
    g_flag_holder[678][18] = '-';
    g_flag_holder[678][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[678][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[678][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag679_is_here() {
    g_flag_holder[679][8] = '-';
    g_flag_holder[679][13] = '-';
    g_flag_holder[679][18] = '-';
    g_flag_holder[679][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[679][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[679][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag680_is_here() {
    g_flag_holder[680][8] = '-';
    g_flag_holder[680][13] = '-';
    g_flag_holder[680][18] = '-';
    g_flag_holder[680][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[680][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[680][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag681_is_here() {
    g_flag_holder[681][8] = '-';
    g_flag_holder[681][13] = '-';
    g_flag_holder[681][18] = '-';
    g_flag_holder[681][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[681][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[681][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag682_is_here() {
    g_flag_holder[682][8] = '-';
    g_flag_holder[682][13] = '-';
    g_flag_holder[682][18] = '-';
    g_flag_holder[682][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[682][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[682][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag683_is_here() {
    g_flag_holder[683][8] = '-';
    g_flag_holder[683][13] = '-';
    g_flag_holder[683][18] = '-';
    g_flag_holder[683][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[683][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[683][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag684_is_here() {
    g_flag_holder[684][8] = '-';
    g_flag_holder[684][13] = '-';
    g_flag_holder[684][18] = '-';
    g_flag_holder[684][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[684][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[684][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag685_is_here() {
    g_flag_holder[685][8] = '-';
    g_flag_holder[685][13] = '-';
    g_flag_holder[685][18] = '-';
    g_flag_holder[685][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[685][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[685][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag686_is_here() {
    g_flag_holder[686][8] = '-';
    g_flag_holder[686][13] = '-';
    g_flag_holder[686][18] = '-';
    g_flag_holder[686][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[686][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[686][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag687_is_here() {
    g_flag_holder[687][8] = '-';
    g_flag_holder[687][13] = '-';
    g_flag_holder[687][18] = '-';
    g_flag_holder[687][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[687][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[687][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag688_is_here() {
    g_flag_holder[688][8] = '-';
    g_flag_holder[688][13] = '-';
    g_flag_holder[688][18] = '-';
    g_flag_holder[688][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[688][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[688][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag689_is_here() {
    g_flag_holder[689][8] = '-';
    g_flag_holder[689][13] = '-';
    g_flag_holder[689][18] = '-';
    g_flag_holder[689][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[689][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[689][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag690_is_here() {
    g_flag_holder[690][8] = '-';
    g_flag_holder[690][13] = '-';
    g_flag_holder[690][18] = '-';
    g_flag_holder[690][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[690][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[690][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag691_is_here() {
    g_flag_holder[691][8] = '-';
    g_flag_holder[691][13] = '-';
    g_flag_holder[691][18] = '-';
    g_flag_holder[691][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[691][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[691][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag692_is_here() {
    g_flag_holder[692][8] = '-';
    g_flag_holder[692][13] = '-';
    g_flag_holder[692][18] = '-';
    g_flag_holder[692][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[692][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[692][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag693_is_here() {
    g_flag_holder[693][8] = '-';
    g_flag_holder[693][13] = '-';
    g_flag_holder[693][18] = '-';
    g_flag_holder[693][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[693][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[693][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag694_is_here() {
    g_flag_holder[694][8] = '-';
    g_flag_holder[694][13] = '-';
    g_flag_holder[694][18] = '-';
    g_flag_holder[694][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[694][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[694][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag695_is_here() {
    g_flag_holder[695][8] = '-';
    g_flag_holder[695][13] = '-';
    g_flag_holder[695][18] = '-';
    g_flag_holder[695][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[695][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[695][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag696_is_here() {
    g_flag_holder[696][8] = '-';
    g_flag_holder[696][13] = '-';
    g_flag_holder[696][18] = '-';
    g_flag_holder[696][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[696][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[696][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag697_is_here() {
    g_flag_holder[697][8] = '-';
    g_flag_holder[697][13] = '-';
    g_flag_holder[697][18] = '-';
    g_flag_holder[697][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[697][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[697][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag698_is_here() {
    g_flag_holder[698][8] = '-';
    g_flag_holder[698][13] = '-';
    g_flag_holder[698][18] = '-';
    g_flag_holder[698][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[698][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[698][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag699_is_here() {
    g_flag_holder[699][8] = '-';
    g_flag_holder[699][13] = '-';
    g_flag_holder[699][18] = '-';
    g_flag_holder[699][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[699][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[699][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag700_is_here() {
    g_flag_holder[700][8] = '-';
    g_flag_holder[700][13] = '-';
    g_flag_holder[700][18] = '-';
    g_flag_holder[700][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[700][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[700][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag701_is_here() {
    g_flag_holder[701][8] = '-';
    g_flag_holder[701][13] = '-';
    g_flag_holder[701][18] = '-';
    g_flag_holder[701][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[701][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[701][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag702_is_here() {
    g_flag_holder[702][8] = '-';
    g_flag_holder[702][13] = '-';
    g_flag_holder[702][18] = '-';
    g_flag_holder[702][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[702][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[702][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag703_is_here() {
    g_flag_holder[703][8] = '-';
    g_flag_holder[703][13] = '-';
    g_flag_holder[703][18] = '-';
    g_flag_holder[703][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[703][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[703][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag704_is_here() {
    g_flag_holder[704][8] = '-';
    g_flag_holder[704][13] = '-';
    g_flag_holder[704][18] = '-';
    g_flag_holder[704][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[704][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[704][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag705_is_here() {
    g_flag_holder[705][8] = '-';
    g_flag_holder[705][13] = '-';
    g_flag_holder[705][18] = '-';
    g_flag_holder[705][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[705][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[705][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag706_is_here() {
    g_flag_holder[706][8] = '-';
    g_flag_holder[706][13] = '-';
    g_flag_holder[706][18] = '-';
    g_flag_holder[706][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[706][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[706][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag707_is_here() {
    g_flag_holder[707][8] = '-';
    g_flag_holder[707][13] = '-';
    g_flag_holder[707][18] = '-';
    g_flag_holder[707][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[707][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[707][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag708_is_here() {
    g_flag_holder[708][8] = '-';
    g_flag_holder[708][13] = '-';
    g_flag_holder[708][18] = '-';
    g_flag_holder[708][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[708][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[708][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag709_is_here() {
    g_flag_holder[709][8] = '-';
    g_flag_holder[709][13] = '-';
    g_flag_holder[709][18] = '-';
    g_flag_holder[709][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[709][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[709][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag710_is_here() {
    g_flag_holder[710][8] = '-';
    g_flag_holder[710][13] = '-';
    g_flag_holder[710][18] = '-';
    g_flag_holder[710][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[710][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[710][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag711_is_here() {
    g_flag_holder[711][8] = '-';
    g_flag_holder[711][13] = '-';
    g_flag_holder[711][18] = '-';
    g_flag_holder[711][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[711][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[711][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag712_is_here() {
    g_flag_holder[712][8] = '-';
    g_flag_holder[712][13] = '-';
    g_flag_holder[712][18] = '-';
    g_flag_holder[712][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[712][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[712][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag713_is_here() {
    g_flag_holder[713][8] = '-';
    g_flag_holder[713][13] = '-';
    g_flag_holder[713][18] = '-';
    g_flag_holder[713][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[713][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[713][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag714_is_here() {
    g_flag_holder[714][8] = '-';
    g_flag_holder[714][13] = '-';
    g_flag_holder[714][18] = '-';
    g_flag_holder[714][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[714][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[714][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag715_is_here() {
    g_flag_holder[715][8] = '-';
    g_flag_holder[715][13] = '-';
    g_flag_holder[715][18] = '-';
    g_flag_holder[715][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[715][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[715][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag716_is_here() {
    g_flag_holder[716][8] = '-';
    g_flag_holder[716][13] = '-';
    g_flag_holder[716][18] = '-';
    g_flag_holder[716][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[716][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[716][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag717_is_here() {
    g_flag_holder[717][8] = '-';
    g_flag_holder[717][13] = '-';
    g_flag_holder[717][18] = '-';
    g_flag_holder[717][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[717][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[717][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag718_is_here() {
    g_flag_holder[718][8] = '-';
    g_flag_holder[718][13] = '-';
    g_flag_holder[718][18] = '-';
    g_flag_holder[718][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[718][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[718][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag719_is_here() {
    g_flag_holder[719][8] = '-';
    g_flag_holder[719][13] = '-';
    g_flag_holder[719][18] = '-';
    g_flag_holder[719][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[719][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[719][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag720_is_here() {
    g_flag_holder[720][8] = '-';
    g_flag_holder[720][13] = '-';
    g_flag_holder[720][18] = '-';
    g_flag_holder[720][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[720][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[720][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag721_is_here() {
    g_flag_holder[721][8] = '-';
    g_flag_holder[721][13] = '-';
    g_flag_holder[721][18] = '-';
    g_flag_holder[721][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[721][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[721][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag722_is_here() {
    g_flag_holder[722][8] = '-';
    g_flag_holder[722][13] = '-';
    g_flag_holder[722][18] = '-';
    g_flag_holder[722][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[722][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[722][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag723_is_here() {
    g_flag_holder[723][8] = '-';
    g_flag_holder[723][13] = '-';
    g_flag_holder[723][18] = '-';
    g_flag_holder[723][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[723][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[723][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag724_is_here() {
    g_flag_holder[724][8] = '-';
    g_flag_holder[724][13] = '-';
    g_flag_holder[724][18] = '-';
    g_flag_holder[724][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[724][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[724][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag725_is_here() {
    g_flag_holder[725][8] = '-';
    g_flag_holder[725][13] = '-';
    g_flag_holder[725][18] = '-';
    g_flag_holder[725][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[725][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[725][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag726_is_here() {
    g_flag_holder[726][8] = '-';
    g_flag_holder[726][13] = '-';
    g_flag_holder[726][18] = '-';
    g_flag_holder[726][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[726][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[726][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag727_is_here() {
    g_flag_holder[727][8] = '-';
    g_flag_holder[727][13] = '-';
    g_flag_holder[727][18] = '-';
    g_flag_holder[727][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[727][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[727][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag728_is_here() {
    g_flag_holder[728][8] = '-';
    g_flag_holder[728][13] = '-';
    g_flag_holder[728][18] = '-';
    g_flag_holder[728][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[728][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[728][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag729_is_here() {
    g_flag_holder[729][8] = '-';
    g_flag_holder[729][13] = '-';
    g_flag_holder[729][18] = '-';
    g_flag_holder[729][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[729][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[729][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag730_is_here() {
    g_flag_holder[730][8] = '-';
    g_flag_holder[730][13] = '-';
    g_flag_holder[730][18] = '-';
    g_flag_holder[730][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[730][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[730][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag731_is_here() {
    g_flag_holder[731][8] = '-';
    g_flag_holder[731][13] = '-';
    g_flag_holder[731][18] = '-';
    g_flag_holder[731][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[731][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[731][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag732_is_here() {
    g_flag_holder[732][8] = '-';
    g_flag_holder[732][13] = '-';
    g_flag_holder[732][18] = '-';
    g_flag_holder[732][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[732][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[732][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag733_is_here() {
    g_flag_holder[733][8] = '-';
    g_flag_holder[733][13] = '-';
    g_flag_holder[733][18] = '-';
    g_flag_holder[733][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[733][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[733][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag734_is_here() {
    g_flag_holder[734][8] = '-';
    g_flag_holder[734][13] = '-';
    g_flag_holder[734][18] = '-';
    g_flag_holder[734][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[734][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[734][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag735_is_here() {
    g_flag_holder[735][8] = '-';
    g_flag_holder[735][13] = '-';
    g_flag_holder[735][18] = '-';
    g_flag_holder[735][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[735][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[735][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag736_is_here() {
    g_flag_holder[736][8] = '-';
    g_flag_holder[736][13] = '-';
    g_flag_holder[736][18] = '-';
    g_flag_holder[736][23] = '-';

    // g_0_idx = rand() % 36;
    // while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
    //     g_0_idx = rand() % 36;
    // }
    // g_flag_holder[736][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23) continue;
        g_flag_holder[736][i] = g_dic[rand() % 15];
    }
    // puts(g_flag_holder[736]);
}


void __attribute__ ((constructor)) flag737_is_here() {
    g_flag_holder[737][8] = '-';
    g_flag_holder[737][13] = '-';
    g_flag_holder[737][18] = '-';
    g_flag_holder[737][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[737][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[737][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag738_is_here() {
    g_flag_holder[738][8] = '-';
    g_flag_holder[738][13] = '-';
    g_flag_holder[738][18] = '-';
    g_flag_holder[738][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[738][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[738][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag739_is_here() {
    g_flag_holder[739][8] = '-';
    g_flag_holder[739][13] = '-';
    g_flag_holder[739][18] = '-';
    g_flag_holder[739][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[739][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[739][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag740_is_here() {
    g_flag_holder[740][8] = '-';
    g_flag_holder[740][13] = '-';
    g_flag_holder[740][18] = '-';
    g_flag_holder[740][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[740][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[740][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag741_is_here() {
    g_flag_holder[741][8] = '-';
    g_flag_holder[741][13] = '-';
    g_flag_holder[741][18] = '-';
    g_flag_holder[741][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[741][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[741][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag742_is_here() {
    g_flag_holder[742][8] = '-';
    g_flag_holder[742][13] = '-';
    g_flag_holder[742][18] = '-';
    g_flag_holder[742][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[742][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[742][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag743_is_here() {
    g_flag_holder[743][8] = '-';
    g_flag_holder[743][13] = '-';
    g_flag_holder[743][18] = '-';
    g_flag_holder[743][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[743][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[743][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag744_is_here() {
    g_flag_holder[744][8] = '-';
    g_flag_holder[744][13] = '-';
    g_flag_holder[744][18] = '-';
    g_flag_holder[744][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[744][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[744][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag745_is_here() {
    g_flag_holder[745][8] = '-';
    g_flag_holder[745][13] = '-';
    g_flag_holder[745][18] = '-';
    g_flag_holder[745][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[745][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[745][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag746_is_here() {
    g_flag_holder[746][8] = '-';
    g_flag_holder[746][13] = '-';
    g_flag_holder[746][18] = '-';
    g_flag_holder[746][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[746][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[746][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag747_is_here() {
    g_flag_holder[747][8] = '-';
    g_flag_holder[747][13] = '-';
    g_flag_holder[747][18] = '-';
    g_flag_holder[747][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[747][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[747][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag748_is_here() {
    g_flag_holder[748][8] = '-';
    g_flag_holder[748][13] = '-';
    g_flag_holder[748][18] = '-';
    g_flag_holder[748][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[748][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[748][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag749_is_here() {
    g_flag_holder[749][8] = '-';
    g_flag_holder[749][13] = '-';
    g_flag_holder[749][18] = '-';
    g_flag_holder[749][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[749][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[749][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag750_is_here() {
    g_flag_holder[750][8] = '-';
    g_flag_holder[750][13] = '-';
    g_flag_holder[750][18] = '-';
    g_flag_holder[750][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[750][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[750][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag751_is_here() {
    g_flag_holder[751][8] = '-';
    g_flag_holder[751][13] = '-';
    g_flag_holder[751][18] = '-';
    g_flag_holder[751][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[751][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[751][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag752_is_here() {
    g_flag_holder[752][8] = '-';
    g_flag_holder[752][13] = '-';
    g_flag_holder[752][18] = '-';
    g_flag_holder[752][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[752][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[752][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag753_is_here() {
    g_flag_holder[753][8] = '-';
    g_flag_holder[753][13] = '-';
    g_flag_holder[753][18] = '-';
    g_flag_holder[753][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[753][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[753][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag754_is_here() {
    g_flag_holder[754][8] = '-';
    g_flag_holder[754][13] = '-';
    g_flag_holder[754][18] = '-';
    g_flag_holder[754][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[754][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[754][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag755_is_here() {
    g_flag_holder[755][8] = '-';
    g_flag_holder[755][13] = '-';
    g_flag_holder[755][18] = '-';
    g_flag_holder[755][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[755][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[755][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag756_is_here() {
    g_flag_holder[756][8] = '-';
    g_flag_holder[756][13] = '-';
    g_flag_holder[756][18] = '-';
    g_flag_holder[756][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[756][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[756][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag757_is_here() {
    g_flag_holder[757][8] = '-';
    g_flag_holder[757][13] = '-';
    g_flag_holder[757][18] = '-';
    g_flag_holder[757][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[757][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[757][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag758_is_here() {
    g_flag_holder[758][8] = '-';
    g_flag_holder[758][13] = '-';
    g_flag_holder[758][18] = '-';
    g_flag_holder[758][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[758][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[758][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag759_is_here() {
    g_flag_holder[759][8] = '-';
    g_flag_holder[759][13] = '-';
    g_flag_holder[759][18] = '-';
    g_flag_holder[759][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[759][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[759][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag760_is_here() {
    g_flag_holder[760][8] = '-';
    g_flag_holder[760][13] = '-';
    g_flag_holder[760][18] = '-';
    g_flag_holder[760][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[760][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[760][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag761_is_here() {
    g_flag_holder[761][8] = '-';
    g_flag_holder[761][13] = '-';
    g_flag_holder[761][18] = '-';
    g_flag_holder[761][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[761][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[761][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag762_is_here() {
    g_flag_holder[762][8] = '-';
    g_flag_holder[762][13] = '-';
    g_flag_holder[762][18] = '-';
    g_flag_holder[762][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[762][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[762][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag763_is_here() {
    g_flag_holder[763][8] = '-';
    g_flag_holder[763][13] = '-';
    g_flag_holder[763][18] = '-';
    g_flag_holder[763][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[763][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[763][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag764_is_here() {
    g_flag_holder[764][8] = '-';
    g_flag_holder[764][13] = '-';
    g_flag_holder[764][18] = '-';
    g_flag_holder[764][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[764][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[764][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag765_is_here() {
    g_flag_holder[765][8] = '-';
    g_flag_holder[765][13] = '-';
    g_flag_holder[765][18] = '-';
    g_flag_holder[765][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[765][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[765][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag766_is_here() {
    g_flag_holder[766][8] = '-';
    g_flag_holder[766][13] = '-';
    g_flag_holder[766][18] = '-';
    g_flag_holder[766][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[766][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[766][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag767_is_here() {
    g_flag_holder[767][8] = '-';
    g_flag_holder[767][13] = '-';
    g_flag_holder[767][18] = '-';
    g_flag_holder[767][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[767][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[767][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag768_is_here() {
    g_flag_holder[768][8] = '-';
    g_flag_holder[768][13] = '-';
    g_flag_holder[768][18] = '-';
    g_flag_holder[768][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[768][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[768][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag769_is_here() {
    g_flag_holder[769][8] = '-';
    g_flag_holder[769][13] = '-';
    g_flag_holder[769][18] = '-';
    g_flag_holder[769][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[769][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[769][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag770_is_here() {
    g_flag_holder[770][8] = '-';
    g_flag_holder[770][13] = '-';
    g_flag_holder[770][18] = '-';
    g_flag_holder[770][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[770][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[770][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag771_is_here() {
    g_flag_holder[771][8] = '-';
    g_flag_holder[771][13] = '-';
    g_flag_holder[771][18] = '-';
    g_flag_holder[771][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[771][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[771][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag772_is_here() {
    g_flag_holder[772][8] = '-';
    g_flag_holder[772][13] = '-';
    g_flag_holder[772][18] = '-';
    g_flag_holder[772][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[772][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[772][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag773_is_here() {
    g_flag_holder[773][8] = '-';
    g_flag_holder[773][13] = '-';
    g_flag_holder[773][18] = '-';
    g_flag_holder[773][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[773][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[773][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag774_is_here() {
    g_flag_holder[774][8] = '-';
    g_flag_holder[774][13] = '-';
    g_flag_holder[774][18] = '-';
    g_flag_holder[774][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[774][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[774][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag775_is_here() {
    g_flag_holder[775][8] = '-';
    g_flag_holder[775][13] = '-';
    g_flag_holder[775][18] = '-';
    g_flag_holder[775][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[775][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[775][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag776_is_here() {
    g_flag_holder[776][8] = '-';
    g_flag_holder[776][13] = '-';
    g_flag_holder[776][18] = '-';
    g_flag_holder[776][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[776][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[776][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag777_is_here() {
    g_flag_holder[777][8] = '-';
    g_flag_holder[777][13] = '-';
    g_flag_holder[777][18] = '-';
    g_flag_holder[777][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[777][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[777][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag778_is_here() {
    g_flag_holder[778][8] = '-';
    g_flag_holder[778][13] = '-';
    g_flag_holder[778][18] = '-';
    g_flag_holder[778][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[778][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[778][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag779_is_here() {
    g_flag_holder[779][8] = '-';
    g_flag_holder[779][13] = '-';
    g_flag_holder[779][18] = '-';
    g_flag_holder[779][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[779][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[779][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag780_is_here() {
    g_flag_holder[780][8] = '-';
    g_flag_holder[780][13] = '-';
    g_flag_holder[780][18] = '-';
    g_flag_holder[780][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[780][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[780][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag781_is_here() {
    g_flag_holder[781][8] = '-';
    g_flag_holder[781][13] = '-';
    g_flag_holder[781][18] = '-';
    g_flag_holder[781][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[781][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[781][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag782_is_here() {
    g_flag_holder[782][8] = '-';
    g_flag_holder[782][13] = '-';
    g_flag_holder[782][18] = '-';
    g_flag_holder[782][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[782][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[782][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag783_is_here() {
    g_flag_holder[783][8] = '-';
    g_flag_holder[783][13] = '-';
    g_flag_holder[783][18] = '-';
    g_flag_holder[783][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[783][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[783][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag784_is_here() {
    g_flag_holder[784][8] = '-';
    g_flag_holder[784][13] = '-';
    g_flag_holder[784][18] = '-';
    g_flag_holder[784][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[784][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[784][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag785_is_here() {
    g_flag_holder[785][8] = '-';
    g_flag_holder[785][13] = '-';
    g_flag_holder[785][18] = '-';
    g_flag_holder[785][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[785][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[785][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag786_is_here() {
    g_flag_holder[786][8] = '-';
    g_flag_holder[786][13] = '-';
    g_flag_holder[786][18] = '-';
    g_flag_holder[786][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[786][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[786][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag787_is_here() {
    g_flag_holder[787][8] = '-';
    g_flag_holder[787][13] = '-';
    g_flag_holder[787][18] = '-';
    g_flag_holder[787][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[787][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[787][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag788_is_here() {
    g_flag_holder[788][8] = '-';
    g_flag_holder[788][13] = '-';
    g_flag_holder[788][18] = '-';
    g_flag_holder[788][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[788][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[788][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag789_is_here() {
    g_flag_holder[789][8] = '-';
    g_flag_holder[789][13] = '-';
    g_flag_holder[789][18] = '-';
    g_flag_holder[789][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[789][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[789][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag790_is_here() {
    g_flag_holder[790][8] = '-';
    g_flag_holder[790][13] = '-';
    g_flag_holder[790][18] = '-';
    g_flag_holder[790][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[790][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[790][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag791_is_here() {
    g_flag_holder[791][8] = '-';
    g_flag_holder[791][13] = '-';
    g_flag_holder[791][18] = '-';
    g_flag_holder[791][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[791][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[791][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag792_is_here() {
    g_flag_holder[792][8] = '-';
    g_flag_holder[792][13] = '-';
    g_flag_holder[792][18] = '-';
    g_flag_holder[792][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[792][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[792][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag793_is_here() {
    g_flag_holder[793][8] = '-';
    g_flag_holder[793][13] = '-';
    g_flag_holder[793][18] = '-';
    g_flag_holder[793][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[793][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[793][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag794_is_here() {
    g_flag_holder[794][8] = '-';
    g_flag_holder[794][13] = '-';
    g_flag_holder[794][18] = '-';
    g_flag_holder[794][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[794][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[794][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag795_is_here() {
    g_flag_holder[795][8] = '-';
    g_flag_holder[795][13] = '-';
    g_flag_holder[795][18] = '-';
    g_flag_holder[795][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[795][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[795][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag796_is_here() {
    g_flag_holder[796][8] = '-';
    g_flag_holder[796][13] = '-';
    g_flag_holder[796][18] = '-';
    g_flag_holder[796][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[796][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[796][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag797_is_here() {
    g_flag_holder[797][8] = '-';
    g_flag_holder[797][13] = '-';
    g_flag_holder[797][18] = '-';
    g_flag_holder[797][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[797][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[797][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag798_is_here() {
    g_flag_holder[798][8] = '-';
    g_flag_holder[798][13] = '-';
    g_flag_holder[798][18] = '-';
    g_flag_holder[798][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[798][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[798][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag799_is_here() {
    g_flag_holder[799][8] = '-';
    g_flag_holder[799][13] = '-';
    g_flag_holder[799][18] = '-';
    g_flag_holder[799][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[799][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[799][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag800_is_here() {
    g_flag_holder[800][8] = '-';
    g_flag_holder[800][13] = '-';
    g_flag_holder[800][18] = '-';
    g_flag_holder[800][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[800][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[800][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag801_is_here() {
    g_flag_holder[801][8] = '-';
    g_flag_holder[801][13] = '-';
    g_flag_holder[801][18] = '-';
    g_flag_holder[801][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[801][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[801][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag802_is_here() {
    g_flag_holder[802][8] = '-';
    g_flag_holder[802][13] = '-';
    g_flag_holder[802][18] = '-';
    g_flag_holder[802][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[802][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[802][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag803_is_here() {
    g_flag_holder[803][8] = '-';
    g_flag_holder[803][13] = '-';
    g_flag_holder[803][18] = '-';
    g_flag_holder[803][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[803][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[803][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag804_is_here() {
    g_flag_holder[804][8] = '-';
    g_flag_holder[804][13] = '-';
    g_flag_holder[804][18] = '-';
    g_flag_holder[804][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[804][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[804][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag805_is_here() {
    g_flag_holder[805][8] = '-';
    g_flag_holder[805][13] = '-';
    g_flag_holder[805][18] = '-';
    g_flag_holder[805][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[805][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[805][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag806_is_here() {
    g_flag_holder[806][8] = '-';
    g_flag_holder[806][13] = '-';
    g_flag_holder[806][18] = '-';
    g_flag_holder[806][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[806][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[806][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag807_is_here() {
    g_flag_holder[807][8] = '-';
    g_flag_holder[807][13] = '-';
    g_flag_holder[807][18] = '-';
    g_flag_holder[807][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[807][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[807][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag808_is_here() {
    g_flag_holder[808][8] = '-';
    g_flag_holder[808][13] = '-';
    g_flag_holder[808][18] = '-';
    g_flag_holder[808][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[808][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[808][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag809_is_here() {
    g_flag_holder[809][8] = '-';
    g_flag_holder[809][13] = '-';
    g_flag_holder[809][18] = '-';
    g_flag_holder[809][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[809][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[809][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag810_is_here() {
    g_flag_holder[810][8] = '-';
    g_flag_holder[810][13] = '-';
    g_flag_holder[810][18] = '-';
    g_flag_holder[810][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[810][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[810][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag811_is_here() {
    g_flag_holder[811][8] = '-';
    g_flag_holder[811][13] = '-';
    g_flag_holder[811][18] = '-';
    g_flag_holder[811][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[811][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[811][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag812_is_here() {
    g_flag_holder[812][8] = '-';
    g_flag_holder[812][13] = '-';
    g_flag_holder[812][18] = '-';
    g_flag_holder[812][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[812][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[812][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag813_is_here() {
    g_flag_holder[813][8] = '-';
    g_flag_holder[813][13] = '-';
    g_flag_holder[813][18] = '-';
    g_flag_holder[813][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[813][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[813][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag814_is_here() {
    g_flag_holder[814][8] = '-';
    g_flag_holder[814][13] = '-';
    g_flag_holder[814][18] = '-';
    g_flag_holder[814][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[814][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[814][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag815_is_here() {
    g_flag_holder[815][8] = '-';
    g_flag_holder[815][13] = '-';
    g_flag_holder[815][18] = '-';
    g_flag_holder[815][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[815][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[815][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag816_is_here() {
    g_flag_holder[816][8] = '-';
    g_flag_holder[816][13] = '-';
    g_flag_holder[816][18] = '-';
    g_flag_holder[816][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[816][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[816][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag817_is_here() {
    g_flag_holder[817][8] = '-';
    g_flag_holder[817][13] = '-';
    g_flag_holder[817][18] = '-';
    g_flag_holder[817][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[817][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[817][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag818_is_here() {
    g_flag_holder[818][8] = '-';
    g_flag_holder[818][13] = '-';
    g_flag_holder[818][18] = '-';
    g_flag_holder[818][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[818][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[818][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag819_is_here() {
    g_flag_holder[819][8] = '-';
    g_flag_holder[819][13] = '-';
    g_flag_holder[819][18] = '-';
    g_flag_holder[819][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[819][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[819][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag820_is_here() {
    g_flag_holder[820][8] = '-';
    g_flag_holder[820][13] = '-';
    g_flag_holder[820][18] = '-';
    g_flag_holder[820][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[820][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[820][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag821_is_here() {
    g_flag_holder[821][8] = '-';
    g_flag_holder[821][13] = '-';
    g_flag_holder[821][18] = '-';
    g_flag_holder[821][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[821][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[821][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag822_is_here() {
    g_flag_holder[822][8] = '-';
    g_flag_holder[822][13] = '-';
    g_flag_holder[822][18] = '-';
    g_flag_holder[822][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[822][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[822][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag823_is_here() {
    g_flag_holder[823][8] = '-';
    g_flag_holder[823][13] = '-';
    g_flag_holder[823][18] = '-';
    g_flag_holder[823][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[823][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[823][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag824_is_here() {
    g_flag_holder[824][8] = '-';
    g_flag_holder[824][13] = '-';
    g_flag_holder[824][18] = '-';
    g_flag_holder[824][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[824][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[824][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag825_is_here() {
    g_flag_holder[825][8] = '-';
    g_flag_holder[825][13] = '-';
    g_flag_holder[825][18] = '-';
    g_flag_holder[825][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[825][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[825][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag826_is_here() {
    g_flag_holder[826][8] = '-';
    g_flag_holder[826][13] = '-';
    g_flag_holder[826][18] = '-';
    g_flag_holder[826][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[826][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[826][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag827_is_here() {
    g_flag_holder[827][8] = '-';
    g_flag_holder[827][13] = '-';
    g_flag_holder[827][18] = '-';
    g_flag_holder[827][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[827][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[827][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag828_is_here() {
    g_flag_holder[828][8] = '-';
    g_flag_holder[828][13] = '-';
    g_flag_holder[828][18] = '-';
    g_flag_holder[828][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[828][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[828][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag829_is_here() {
    g_flag_holder[829][8] = '-';
    g_flag_holder[829][13] = '-';
    g_flag_holder[829][18] = '-';
    g_flag_holder[829][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[829][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[829][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag830_is_here() {
    g_flag_holder[830][8] = '-';
    g_flag_holder[830][13] = '-';
    g_flag_holder[830][18] = '-';
    g_flag_holder[830][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[830][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[830][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag831_is_here() {
    g_flag_holder[831][8] = '-';
    g_flag_holder[831][13] = '-';
    g_flag_holder[831][18] = '-';
    g_flag_holder[831][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[831][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[831][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag832_is_here() {
    g_flag_holder[832][8] = '-';
    g_flag_holder[832][13] = '-';
    g_flag_holder[832][18] = '-';
    g_flag_holder[832][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[832][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[832][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag833_is_here() {
    g_flag_holder[833][8] = '-';
    g_flag_holder[833][13] = '-';
    g_flag_holder[833][18] = '-';
    g_flag_holder[833][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[833][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[833][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag834_is_here() {
    g_flag_holder[834][8] = '-';
    g_flag_holder[834][13] = '-';
    g_flag_holder[834][18] = '-';
    g_flag_holder[834][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[834][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[834][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag835_is_here() {
    g_flag_holder[835][8] = '-';
    g_flag_holder[835][13] = '-';
    g_flag_holder[835][18] = '-';
    g_flag_holder[835][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[835][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[835][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag836_is_here() {
    g_flag_holder[836][8] = '-';
    g_flag_holder[836][13] = '-';
    g_flag_holder[836][18] = '-';
    g_flag_holder[836][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[836][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[836][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag837_is_here() {
    g_flag_holder[837][8] = '-';
    g_flag_holder[837][13] = '-';
    g_flag_holder[837][18] = '-';
    g_flag_holder[837][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[837][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[837][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag838_is_here() {
    g_flag_holder[838][8] = '-';
    g_flag_holder[838][13] = '-';
    g_flag_holder[838][18] = '-';
    g_flag_holder[838][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[838][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[838][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag839_is_here() {
    g_flag_holder[839][8] = '-';
    g_flag_holder[839][13] = '-';
    g_flag_holder[839][18] = '-';
    g_flag_holder[839][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[839][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[839][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag840_is_here() {
    g_flag_holder[840][8] = '-';
    g_flag_holder[840][13] = '-';
    g_flag_holder[840][18] = '-';
    g_flag_holder[840][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[840][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[840][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag841_is_here() {
    g_flag_holder[841][8] = '-';
    g_flag_holder[841][13] = '-';
    g_flag_holder[841][18] = '-';
    g_flag_holder[841][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[841][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[841][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag842_is_here() {
    g_flag_holder[842][8] = '-';
    g_flag_holder[842][13] = '-';
    g_flag_holder[842][18] = '-';
    g_flag_holder[842][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[842][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[842][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag843_is_here() {
    g_flag_holder[843][8] = '-';
    g_flag_holder[843][13] = '-';
    g_flag_holder[843][18] = '-';
    g_flag_holder[843][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[843][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[843][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag844_is_here() {
    g_flag_holder[844][8] = '-';
    g_flag_holder[844][13] = '-';
    g_flag_holder[844][18] = '-';
    g_flag_holder[844][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[844][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[844][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag845_is_here() {
    g_flag_holder[845][8] = '-';
    g_flag_holder[845][13] = '-';
    g_flag_holder[845][18] = '-';
    g_flag_holder[845][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[845][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[845][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag846_is_here() {
    g_flag_holder[846][8] = '-';
    g_flag_holder[846][13] = '-';
    g_flag_holder[846][18] = '-';
    g_flag_holder[846][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[846][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[846][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag847_is_here() {
    g_flag_holder[847][8] = '-';
    g_flag_holder[847][13] = '-';
    g_flag_holder[847][18] = '-';
    g_flag_holder[847][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[847][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[847][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag848_is_here() {
    g_flag_holder[848][8] = '-';
    g_flag_holder[848][13] = '-';
    g_flag_holder[848][18] = '-';
    g_flag_holder[848][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[848][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[848][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag849_is_here() {
    g_flag_holder[849][8] = '-';
    g_flag_holder[849][13] = '-';
    g_flag_holder[849][18] = '-';
    g_flag_holder[849][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[849][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[849][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag850_is_here() {
    g_flag_holder[850][8] = '-';
    g_flag_holder[850][13] = '-';
    g_flag_holder[850][18] = '-';
    g_flag_holder[850][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[850][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[850][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag851_is_here() {
    g_flag_holder[851][8] = '-';
    g_flag_holder[851][13] = '-';
    g_flag_holder[851][18] = '-';
    g_flag_holder[851][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[851][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[851][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag852_is_here() {
    g_flag_holder[852][8] = '-';
    g_flag_holder[852][13] = '-';
    g_flag_holder[852][18] = '-';
    g_flag_holder[852][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[852][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[852][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag853_is_here() {
    g_flag_holder[853][8] = '-';
    g_flag_holder[853][13] = '-';
    g_flag_holder[853][18] = '-';
    g_flag_holder[853][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[853][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[853][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag854_is_here() {
    g_flag_holder[854][8] = '-';
    g_flag_holder[854][13] = '-';
    g_flag_holder[854][18] = '-';
    g_flag_holder[854][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[854][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[854][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag855_is_here() {
    g_flag_holder[855][8] = '-';
    g_flag_holder[855][13] = '-';
    g_flag_holder[855][18] = '-';
    g_flag_holder[855][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[855][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[855][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag856_is_here() {
    g_flag_holder[856][8] = '-';
    g_flag_holder[856][13] = '-';
    g_flag_holder[856][18] = '-';
    g_flag_holder[856][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[856][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[856][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag857_is_here() {
    g_flag_holder[857][8] = '-';
    g_flag_holder[857][13] = '-';
    g_flag_holder[857][18] = '-';
    g_flag_holder[857][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[857][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[857][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag858_is_here() {
    g_flag_holder[858][8] = '-';
    g_flag_holder[858][13] = '-';
    g_flag_holder[858][18] = '-';
    g_flag_holder[858][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[858][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[858][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag859_is_here() {
    g_flag_holder[859][8] = '-';
    g_flag_holder[859][13] = '-';
    g_flag_holder[859][18] = '-';
    g_flag_holder[859][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[859][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[859][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag860_is_here() {
    g_flag_holder[860][8] = '-';
    g_flag_holder[860][13] = '-';
    g_flag_holder[860][18] = '-';
    g_flag_holder[860][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[860][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[860][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag861_is_here() {
    g_flag_holder[861][8] = '-';
    g_flag_holder[861][13] = '-';
    g_flag_holder[861][18] = '-';
    g_flag_holder[861][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[861][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[861][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag862_is_here() {
    g_flag_holder[862][8] = '-';
    g_flag_holder[862][13] = '-';
    g_flag_holder[862][18] = '-';
    g_flag_holder[862][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[862][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[862][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag863_is_here() {
    g_flag_holder[863][8] = '-';
    g_flag_holder[863][13] = '-';
    g_flag_holder[863][18] = '-';
    g_flag_holder[863][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[863][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[863][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag864_is_here() {
    g_flag_holder[864][8] = '-';
    g_flag_holder[864][13] = '-';
    g_flag_holder[864][18] = '-';
    g_flag_holder[864][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[864][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[864][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag865_is_here() {
    g_flag_holder[865][8] = '-';
    g_flag_holder[865][13] = '-';
    g_flag_holder[865][18] = '-';
    g_flag_holder[865][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[865][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[865][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag866_is_here() {
    g_flag_holder[866][8] = '-';
    g_flag_holder[866][13] = '-';
    g_flag_holder[866][18] = '-';
    g_flag_holder[866][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[866][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[866][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag867_is_here() {
    g_flag_holder[867][8] = '-';
    g_flag_holder[867][13] = '-';
    g_flag_holder[867][18] = '-';
    g_flag_holder[867][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[867][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[867][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag868_is_here() {
    g_flag_holder[868][8] = '-';
    g_flag_holder[868][13] = '-';
    g_flag_holder[868][18] = '-';
    g_flag_holder[868][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[868][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[868][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag869_is_here() {
    g_flag_holder[869][8] = '-';
    g_flag_holder[869][13] = '-';
    g_flag_holder[869][18] = '-';
    g_flag_holder[869][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[869][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[869][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag870_is_here() {
    g_flag_holder[870][8] = '-';
    g_flag_holder[870][13] = '-';
    g_flag_holder[870][18] = '-';
    g_flag_holder[870][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[870][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[870][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag871_is_here() {
    g_flag_holder[871][8] = '-';
    g_flag_holder[871][13] = '-';
    g_flag_holder[871][18] = '-';
    g_flag_holder[871][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[871][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[871][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag872_is_here() {
    g_flag_holder[872][8] = '-';
    g_flag_holder[872][13] = '-';
    g_flag_holder[872][18] = '-';
    g_flag_holder[872][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[872][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[872][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag873_is_here() {
    g_flag_holder[873][8] = '-';
    g_flag_holder[873][13] = '-';
    g_flag_holder[873][18] = '-';
    g_flag_holder[873][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[873][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[873][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag874_is_here() {
    g_flag_holder[874][8] = '-';
    g_flag_holder[874][13] = '-';
    g_flag_holder[874][18] = '-';
    g_flag_holder[874][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[874][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[874][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag875_is_here() {
    g_flag_holder[875][8] = '-';
    g_flag_holder[875][13] = '-';
    g_flag_holder[875][18] = '-';
    g_flag_holder[875][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[875][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[875][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag876_is_here() {
    g_flag_holder[876][8] = '-';
    g_flag_holder[876][13] = '-';
    g_flag_holder[876][18] = '-';
    g_flag_holder[876][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[876][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[876][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag877_is_here() {
    g_flag_holder[877][8] = '-';
    g_flag_holder[877][13] = '-';
    g_flag_holder[877][18] = '-';
    g_flag_holder[877][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[877][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[877][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag878_is_here() {
    g_flag_holder[878][8] = '-';
    g_flag_holder[878][13] = '-';
    g_flag_holder[878][18] = '-';
    g_flag_holder[878][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[878][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[878][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag879_is_here() {
    g_flag_holder[879][8] = '-';
    g_flag_holder[879][13] = '-';
    g_flag_holder[879][18] = '-';
    g_flag_holder[879][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[879][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[879][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag880_is_here() {
    g_flag_holder[880][8] = '-';
    g_flag_holder[880][13] = '-';
    g_flag_holder[880][18] = '-';
    g_flag_holder[880][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[880][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[880][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag881_is_here() {
    g_flag_holder[881][8] = '-';
    g_flag_holder[881][13] = '-';
    g_flag_holder[881][18] = '-';
    g_flag_holder[881][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[881][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[881][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag882_is_here() {
    g_flag_holder[882][8] = '-';
    g_flag_holder[882][13] = '-';
    g_flag_holder[882][18] = '-';
    g_flag_holder[882][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[882][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[882][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag883_is_here() {
    g_flag_holder[883][8] = '-';
    g_flag_holder[883][13] = '-';
    g_flag_holder[883][18] = '-';
    g_flag_holder[883][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[883][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[883][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag884_is_here() {
    g_flag_holder[884][8] = '-';
    g_flag_holder[884][13] = '-';
    g_flag_holder[884][18] = '-';
    g_flag_holder[884][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[884][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[884][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag885_is_here() {
    g_flag_holder[885][8] = '-';
    g_flag_holder[885][13] = '-';
    g_flag_holder[885][18] = '-';
    g_flag_holder[885][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[885][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[885][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag886_is_here() {
    g_flag_holder[886][8] = '-';
    g_flag_holder[886][13] = '-';
    g_flag_holder[886][18] = '-';
    g_flag_holder[886][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[886][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[886][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag887_is_here() {
    g_flag_holder[887][8] = '-';
    g_flag_holder[887][13] = '-';
    g_flag_holder[887][18] = '-';
    g_flag_holder[887][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[887][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[887][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag888_is_here() {
    g_flag_holder[888][8] = '-';
    g_flag_holder[888][13] = '-';
    g_flag_holder[888][18] = '-';
    g_flag_holder[888][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[888][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[888][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag889_is_here() {
    g_flag_holder[889][8] = '-';
    g_flag_holder[889][13] = '-';
    g_flag_holder[889][18] = '-';
    g_flag_holder[889][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[889][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[889][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag890_is_here() {
    g_flag_holder[890][8] = '-';
    g_flag_holder[890][13] = '-';
    g_flag_holder[890][18] = '-';
    g_flag_holder[890][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[890][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[890][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag891_is_here() {
    g_flag_holder[891][8] = '-';
    g_flag_holder[891][13] = '-';
    g_flag_holder[891][18] = '-';
    g_flag_holder[891][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[891][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[891][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag892_is_here() {
    g_flag_holder[892][8] = '-';
    g_flag_holder[892][13] = '-';
    g_flag_holder[892][18] = '-';
    g_flag_holder[892][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[892][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[892][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag893_is_here() {
    g_flag_holder[893][8] = '-';
    g_flag_holder[893][13] = '-';
    g_flag_holder[893][18] = '-';
    g_flag_holder[893][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[893][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[893][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag894_is_here() {
    g_flag_holder[894][8] = '-';
    g_flag_holder[894][13] = '-';
    g_flag_holder[894][18] = '-';
    g_flag_holder[894][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[894][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[894][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag895_is_here() {
    g_flag_holder[895][8] = '-';
    g_flag_holder[895][13] = '-';
    g_flag_holder[895][18] = '-';
    g_flag_holder[895][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[895][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[895][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag896_is_here() {
    g_flag_holder[896][8] = '-';
    g_flag_holder[896][13] = '-';
    g_flag_holder[896][18] = '-';
    g_flag_holder[896][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[896][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[896][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag897_is_here() {
    g_flag_holder[897][8] = '-';
    g_flag_holder[897][13] = '-';
    g_flag_holder[897][18] = '-';
    g_flag_holder[897][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[897][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[897][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag898_is_here() {
    g_flag_holder[898][8] = '-';
    g_flag_holder[898][13] = '-';
    g_flag_holder[898][18] = '-';
    g_flag_holder[898][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[898][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[898][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag899_is_here() {
    g_flag_holder[899][8] = '-';
    g_flag_holder[899][13] = '-';
    g_flag_holder[899][18] = '-';
    g_flag_holder[899][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[899][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[899][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag900_is_here() {
    g_flag_holder[900][8] = '-';
    g_flag_holder[900][13] = '-';
    g_flag_holder[900][18] = '-';
    g_flag_holder[900][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[900][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[900][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag901_is_here() {
    g_flag_holder[901][8] = '-';
    g_flag_holder[901][13] = '-';
    g_flag_holder[901][18] = '-';
    g_flag_holder[901][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[901][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[901][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag902_is_here() {
    g_flag_holder[902][8] = '-';
    g_flag_holder[902][13] = '-';
    g_flag_holder[902][18] = '-';
    g_flag_holder[902][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[902][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[902][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag903_is_here() {
    g_flag_holder[903][8] = '-';
    g_flag_holder[903][13] = '-';
    g_flag_holder[903][18] = '-';
    g_flag_holder[903][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[903][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[903][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag904_is_here() {
    g_flag_holder[904][8] = '-';
    g_flag_holder[904][13] = '-';
    g_flag_holder[904][18] = '-';
    g_flag_holder[904][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[904][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[904][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag905_is_here() {
    g_flag_holder[905][8] = '-';
    g_flag_holder[905][13] = '-';
    g_flag_holder[905][18] = '-';
    g_flag_holder[905][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[905][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[905][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag906_is_here() {
    g_flag_holder[906][8] = '-';
    g_flag_holder[906][13] = '-';
    g_flag_holder[906][18] = '-';
    g_flag_holder[906][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[906][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[906][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag907_is_here() {
    g_flag_holder[907][8] = '-';
    g_flag_holder[907][13] = '-';
    g_flag_holder[907][18] = '-';
    g_flag_holder[907][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[907][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[907][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag908_is_here() {
    g_flag_holder[908][8] = '-';
    g_flag_holder[908][13] = '-';
    g_flag_holder[908][18] = '-';
    g_flag_holder[908][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[908][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[908][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag909_is_here() {
    g_flag_holder[909][8] = '-';
    g_flag_holder[909][13] = '-';
    g_flag_holder[909][18] = '-';
    g_flag_holder[909][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[909][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[909][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag910_is_here() {
    g_flag_holder[910][8] = '-';
    g_flag_holder[910][13] = '-';
    g_flag_holder[910][18] = '-';
    g_flag_holder[910][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[910][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[910][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag911_is_here() {
    g_flag_holder[911][8] = '-';
    g_flag_holder[911][13] = '-';
    g_flag_holder[911][18] = '-';
    g_flag_holder[911][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[911][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[911][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag912_is_here() {
    g_flag_holder[912][8] = '-';
    g_flag_holder[912][13] = '-';
    g_flag_holder[912][18] = '-';
    g_flag_holder[912][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[912][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[912][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag913_is_here() {
    g_flag_holder[913][8] = '-';
    g_flag_holder[913][13] = '-';
    g_flag_holder[913][18] = '-';
    g_flag_holder[913][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[913][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[913][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag914_is_here() {
    g_flag_holder[914][8] = '-';
    g_flag_holder[914][13] = '-';
    g_flag_holder[914][18] = '-';
    g_flag_holder[914][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[914][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[914][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag915_is_here() {
    g_flag_holder[915][8] = '-';
    g_flag_holder[915][13] = '-';
    g_flag_holder[915][18] = '-';
    g_flag_holder[915][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[915][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[915][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag916_is_here() {
    g_flag_holder[916][8] = '-';
    g_flag_holder[916][13] = '-';
    g_flag_holder[916][18] = '-';
    g_flag_holder[916][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[916][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[916][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag917_is_here() {
    g_flag_holder[917][8] = '-';
    g_flag_holder[917][13] = '-';
    g_flag_holder[917][18] = '-';
    g_flag_holder[917][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[917][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[917][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag918_is_here() {
    g_flag_holder[918][8] = '-';
    g_flag_holder[918][13] = '-';
    g_flag_holder[918][18] = '-';
    g_flag_holder[918][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[918][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[918][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag919_is_here() {
    g_flag_holder[919][8] = '-';
    g_flag_holder[919][13] = '-';
    g_flag_holder[919][18] = '-';
    g_flag_holder[919][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[919][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[919][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag920_is_here() {
    g_flag_holder[920][8] = '-';
    g_flag_holder[920][13] = '-';
    g_flag_holder[920][18] = '-';
    g_flag_holder[920][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[920][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[920][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag921_is_here() {
    g_flag_holder[921][8] = '-';
    g_flag_holder[921][13] = '-';
    g_flag_holder[921][18] = '-';
    g_flag_holder[921][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[921][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[921][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag922_is_here() {
    g_flag_holder[922][8] = '-';
    g_flag_holder[922][13] = '-';
    g_flag_holder[922][18] = '-';
    g_flag_holder[922][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[922][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[922][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag923_is_here() {
    g_flag_holder[923][8] = '-';
    g_flag_holder[923][13] = '-';
    g_flag_holder[923][18] = '-';
    g_flag_holder[923][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[923][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[923][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag924_is_here() {
    g_flag_holder[924][8] = '-';
    g_flag_holder[924][13] = '-';
    g_flag_holder[924][18] = '-';
    g_flag_holder[924][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[924][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[924][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag925_is_here() {
    g_flag_holder[925][8] = '-';
    g_flag_holder[925][13] = '-';
    g_flag_holder[925][18] = '-';
    g_flag_holder[925][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[925][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[925][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag926_is_here() {
    g_flag_holder[926][8] = '-';
    g_flag_holder[926][13] = '-';
    g_flag_holder[926][18] = '-';
    g_flag_holder[926][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[926][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[926][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag927_is_here() {
    g_flag_holder[927][8] = '-';
    g_flag_holder[927][13] = '-';
    g_flag_holder[927][18] = '-';
    g_flag_holder[927][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[927][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[927][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag928_is_here() {
    g_flag_holder[928][8] = '-';
    g_flag_holder[928][13] = '-';
    g_flag_holder[928][18] = '-';
    g_flag_holder[928][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[928][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[928][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag929_is_here() {
    g_flag_holder[929][8] = '-';
    g_flag_holder[929][13] = '-';
    g_flag_holder[929][18] = '-';
    g_flag_holder[929][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[929][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[929][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag930_is_here() {
    g_flag_holder[930][8] = '-';
    g_flag_holder[930][13] = '-';
    g_flag_holder[930][18] = '-';
    g_flag_holder[930][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[930][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[930][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag931_is_here() {
    g_flag_holder[931][8] = '-';
    g_flag_holder[931][13] = '-';
    g_flag_holder[931][18] = '-';
    g_flag_holder[931][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[931][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[931][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag932_is_here() {
    g_flag_holder[932][8] = '-';
    g_flag_holder[932][13] = '-';
    g_flag_holder[932][18] = '-';
    g_flag_holder[932][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[932][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[932][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag933_is_here() {
    g_flag_holder[933][8] = '-';
    g_flag_holder[933][13] = '-';
    g_flag_holder[933][18] = '-';
    g_flag_holder[933][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[933][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[933][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag934_is_here() {
    g_flag_holder[934][8] = '-';
    g_flag_holder[934][13] = '-';
    g_flag_holder[934][18] = '-';
    g_flag_holder[934][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[934][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[934][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag935_is_here() {
    g_flag_holder[935][8] = '-';
    g_flag_holder[935][13] = '-';
    g_flag_holder[935][18] = '-';
    g_flag_holder[935][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[935][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[935][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag936_is_here() {
    g_flag_holder[936][8] = '-';
    g_flag_holder[936][13] = '-';
    g_flag_holder[936][18] = '-';
    g_flag_holder[936][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[936][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[936][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag937_is_here() {
    g_flag_holder[937][8] = '-';
    g_flag_holder[937][13] = '-';
    g_flag_holder[937][18] = '-';
    g_flag_holder[937][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[937][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[937][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag938_is_here() {
    g_flag_holder[938][8] = '-';
    g_flag_holder[938][13] = '-';
    g_flag_holder[938][18] = '-';
    g_flag_holder[938][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[938][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[938][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag939_is_here() {
    g_flag_holder[939][8] = '-';
    g_flag_holder[939][13] = '-';
    g_flag_holder[939][18] = '-';
    g_flag_holder[939][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[939][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[939][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag940_is_here() {
    g_flag_holder[940][8] = '-';
    g_flag_holder[940][13] = '-';
    g_flag_holder[940][18] = '-';
    g_flag_holder[940][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[940][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[940][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag941_is_here() {
    g_flag_holder[941][8] = '-';
    g_flag_holder[941][13] = '-';
    g_flag_holder[941][18] = '-';
    g_flag_holder[941][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[941][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[941][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag942_is_here() {
    g_flag_holder[942][8] = '-';
    g_flag_holder[942][13] = '-';
    g_flag_holder[942][18] = '-';
    g_flag_holder[942][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[942][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[942][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag943_is_here() {
    g_flag_holder[943][8] = '-';
    g_flag_holder[943][13] = '-';
    g_flag_holder[943][18] = '-';
    g_flag_holder[943][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[943][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[943][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag944_is_here() {
    g_flag_holder[944][8] = '-';
    g_flag_holder[944][13] = '-';
    g_flag_holder[944][18] = '-';
    g_flag_holder[944][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[944][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[944][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag945_is_here() {
    g_flag_holder[945][8] = '-';
    g_flag_holder[945][13] = '-';
    g_flag_holder[945][18] = '-';
    g_flag_holder[945][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[945][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[945][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag946_is_here() {
    g_flag_holder[946][8] = '-';
    g_flag_holder[946][13] = '-';
    g_flag_holder[946][18] = '-';
    g_flag_holder[946][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[946][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[946][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag947_is_here() {
    g_flag_holder[947][8] = '-';
    g_flag_holder[947][13] = '-';
    g_flag_holder[947][18] = '-';
    g_flag_holder[947][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[947][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[947][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag948_is_here() {
    g_flag_holder[948][8] = '-';
    g_flag_holder[948][13] = '-';
    g_flag_holder[948][18] = '-';
    g_flag_holder[948][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[948][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[948][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag949_is_here() {
    g_flag_holder[949][8] = '-';
    g_flag_holder[949][13] = '-';
    g_flag_holder[949][18] = '-';
    g_flag_holder[949][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[949][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[949][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag950_is_here() {
    g_flag_holder[950][8] = '-';
    g_flag_holder[950][13] = '-';
    g_flag_holder[950][18] = '-';
    g_flag_holder[950][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[950][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[950][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag951_is_here() {
    g_flag_holder[951][8] = '-';
    g_flag_holder[951][13] = '-';
    g_flag_holder[951][18] = '-';
    g_flag_holder[951][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[951][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[951][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag952_is_here() {
    g_flag_holder[952][8] = '-';
    g_flag_holder[952][13] = '-';
    g_flag_holder[952][18] = '-';
    g_flag_holder[952][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[952][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[952][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag953_is_here() {
    g_flag_holder[953][8] = '-';
    g_flag_holder[953][13] = '-';
    g_flag_holder[953][18] = '-';
    g_flag_holder[953][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[953][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[953][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag954_is_here() {
    g_flag_holder[954][8] = '-';
    g_flag_holder[954][13] = '-';
    g_flag_holder[954][18] = '-';
    g_flag_holder[954][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[954][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[954][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag955_is_here() {
    g_flag_holder[955][8] = '-';
    g_flag_holder[955][13] = '-';
    g_flag_holder[955][18] = '-';
    g_flag_holder[955][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[955][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[955][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag956_is_here() {
    g_flag_holder[956][8] = '-';
    g_flag_holder[956][13] = '-';
    g_flag_holder[956][18] = '-';
    g_flag_holder[956][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[956][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[956][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag957_is_here() {
    g_flag_holder[957][8] = '-';
    g_flag_holder[957][13] = '-';
    g_flag_holder[957][18] = '-';
    g_flag_holder[957][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[957][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[957][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag958_is_here() {
    g_flag_holder[958][8] = '-';
    g_flag_holder[958][13] = '-';
    g_flag_holder[958][18] = '-';
    g_flag_holder[958][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[958][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[958][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag959_is_here() {
    g_flag_holder[959][8] = '-';
    g_flag_holder[959][13] = '-';
    g_flag_holder[959][18] = '-';
    g_flag_holder[959][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[959][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[959][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag960_is_here() {
    g_flag_holder[960][8] = '-';
    g_flag_holder[960][13] = '-';
    g_flag_holder[960][18] = '-';
    g_flag_holder[960][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[960][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[960][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag961_is_here() {
    g_flag_holder[961][8] = '-';
    g_flag_holder[961][13] = '-';
    g_flag_holder[961][18] = '-';
    g_flag_holder[961][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[961][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[961][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag962_is_here() {
    g_flag_holder[962][8] = '-';
    g_flag_holder[962][13] = '-';
    g_flag_holder[962][18] = '-';
    g_flag_holder[962][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[962][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[962][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag963_is_here() {
    g_flag_holder[963][8] = '-';
    g_flag_holder[963][13] = '-';
    g_flag_holder[963][18] = '-';
    g_flag_holder[963][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[963][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[963][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag964_is_here() {
    g_flag_holder[964][8] = '-';
    g_flag_holder[964][13] = '-';
    g_flag_holder[964][18] = '-';
    g_flag_holder[964][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[964][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[964][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag965_is_here() {
    g_flag_holder[965][8] = '-';
    g_flag_holder[965][13] = '-';
    g_flag_holder[965][18] = '-';
    g_flag_holder[965][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[965][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[965][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag966_is_here() {
    g_flag_holder[966][8] = '-';
    g_flag_holder[966][13] = '-';
    g_flag_holder[966][18] = '-';
    g_flag_holder[966][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[966][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[966][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag967_is_here() {
    g_flag_holder[967][8] = '-';
    g_flag_holder[967][13] = '-';
    g_flag_holder[967][18] = '-';
    g_flag_holder[967][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[967][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[967][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag968_is_here() {
    g_flag_holder[968][8] = '-';
    g_flag_holder[968][13] = '-';
    g_flag_holder[968][18] = '-';
    g_flag_holder[968][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[968][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[968][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag969_is_here() {
    g_flag_holder[969][8] = '-';
    g_flag_holder[969][13] = '-';
    g_flag_holder[969][18] = '-';
    g_flag_holder[969][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[969][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[969][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag970_is_here() {
    g_flag_holder[970][8] = '-';
    g_flag_holder[970][13] = '-';
    g_flag_holder[970][18] = '-';
    g_flag_holder[970][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[970][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[970][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag971_is_here() {
    g_flag_holder[971][8] = '-';
    g_flag_holder[971][13] = '-';
    g_flag_holder[971][18] = '-';
    g_flag_holder[971][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[971][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[971][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag972_is_here() {
    g_flag_holder[972][8] = '-';
    g_flag_holder[972][13] = '-';
    g_flag_holder[972][18] = '-';
    g_flag_holder[972][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[972][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[972][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag973_is_here() {
    g_flag_holder[973][8] = '-';
    g_flag_holder[973][13] = '-';
    g_flag_holder[973][18] = '-';
    g_flag_holder[973][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[973][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[973][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag974_is_here() {
    g_flag_holder[974][8] = '-';
    g_flag_holder[974][13] = '-';
    g_flag_holder[974][18] = '-';
    g_flag_holder[974][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[974][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[974][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag975_is_here() {
    g_flag_holder[975][8] = '-';
    g_flag_holder[975][13] = '-';
    g_flag_holder[975][18] = '-';
    g_flag_holder[975][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[975][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[975][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag976_is_here() {
    g_flag_holder[976][8] = '-';
    g_flag_holder[976][13] = '-';
    g_flag_holder[976][18] = '-';
    g_flag_holder[976][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[976][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[976][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag977_is_here() {
    g_flag_holder[977][8] = '-';
    g_flag_holder[977][13] = '-';
    g_flag_holder[977][18] = '-';
    g_flag_holder[977][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[977][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[977][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag978_is_here() {
    g_flag_holder[978][8] = '-';
    g_flag_holder[978][13] = '-';
    g_flag_holder[978][18] = '-';
    g_flag_holder[978][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[978][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[978][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag979_is_here() {
    g_flag_holder[979][8] = '-';
    g_flag_holder[979][13] = '-';
    g_flag_holder[979][18] = '-';
    g_flag_holder[979][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[979][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[979][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag980_is_here() {
    g_flag_holder[980][8] = '-';
    g_flag_holder[980][13] = '-';
    g_flag_holder[980][18] = '-';
    g_flag_holder[980][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[980][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[980][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag981_is_here() {
    g_flag_holder[981][8] = '-';
    g_flag_holder[981][13] = '-';
    g_flag_holder[981][18] = '-';
    g_flag_holder[981][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[981][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[981][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag982_is_here() {
    g_flag_holder[982][8] = '-';
    g_flag_holder[982][13] = '-';
    g_flag_holder[982][18] = '-';
    g_flag_holder[982][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[982][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[982][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag983_is_here() {
    g_flag_holder[983][8] = '-';
    g_flag_holder[983][13] = '-';
    g_flag_holder[983][18] = '-';
    g_flag_holder[983][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[983][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[983][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag984_is_here() {
    g_flag_holder[984][8] = '-';
    g_flag_holder[984][13] = '-';
    g_flag_holder[984][18] = '-';
    g_flag_holder[984][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[984][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[984][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag985_is_here() {
    g_flag_holder[985][8] = '-';
    g_flag_holder[985][13] = '-';
    g_flag_holder[985][18] = '-';
    g_flag_holder[985][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[985][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[985][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag986_is_here() {
    g_flag_holder[986][8] = '-';
    g_flag_holder[986][13] = '-';
    g_flag_holder[986][18] = '-';
    g_flag_holder[986][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[986][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[986][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag987_is_here() {
    g_flag_holder[987][8] = '-';
    g_flag_holder[987][13] = '-';
    g_flag_holder[987][18] = '-';
    g_flag_holder[987][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[987][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[987][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag988_is_here() {
    g_flag_holder[988][8] = '-';
    g_flag_holder[988][13] = '-';
    g_flag_holder[988][18] = '-';
    g_flag_holder[988][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[988][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[988][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag989_is_here() {
    g_flag_holder[989][8] = '-';
    g_flag_holder[989][13] = '-';
    g_flag_holder[989][18] = '-';
    g_flag_holder[989][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[989][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[989][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag990_is_here() {
    g_flag_holder[990][8] = '-';
    g_flag_holder[990][13] = '-';
    g_flag_holder[990][18] = '-';
    g_flag_holder[990][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[990][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[990][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag991_is_here() {
    g_flag_holder[991][8] = '-';
    g_flag_holder[991][13] = '-';
    g_flag_holder[991][18] = '-';
    g_flag_holder[991][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[991][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[991][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag992_is_here() {
    g_flag_holder[992][8] = '-';
    g_flag_holder[992][13] = '-';
    g_flag_holder[992][18] = '-';
    g_flag_holder[992][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[992][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[992][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag993_is_here() {
    g_flag_holder[993][8] = '-';
    g_flag_holder[993][13] = '-';
    g_flag_holder[993][18] = '-';
    g_flag_holder[993][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[993][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[993][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag994_is_here() {
    g_flag_holder[994][8] = '-';
    g_flag_holder[994][13] = '-';
    g_flag_holder[994][18] = '-';
    g_flag_holder[994][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[994][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[994][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag995_is_here() {
    g_flag_holder[995][8] = '-';
    g_flag_holder[995][13] = '-';
    g_flag_holder[995][18] = '-';
    g_flag_holder[995][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[995][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[995][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag996_is_here() {
    g_flag_holder[996][8] = '-';
    g_flag_holder[996][13] = '-';
    g_flag_holder[996][18] = '-';
    g_flag_holder[996][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[996][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[996][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag997_is_here() {
    g_flag_holder[997][8] = '-';
    g_flag_holder[997][13] = '-';
    g_flag_holder[997][18] = '-';
    g_flag_holder[997][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[997][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[997][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag998_is_here() {
    g_flag_holder[998][8] = '-';
    g_flag_holder[998][13] = '-';
    g_flag_holder[998][18] = '-';
    g_flag_holder[998][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[998][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[998][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag999_is_here() {
    g_flag_holder[999][8] = '-';
    g_flag_holder[999][13] = '-';
    g_flag_holder[999][18] = '-';
    g_flag_holder[999][23] = '-';

    g_0_idx = rand() % 36;
    while(g_0_idx == 8 || g_0_idx == 13 || g_0_idx == 18 || g_0_idx == 23){
        g_0_idx = rand() % 36;
    }
    g_flag_holder[999][g_0_idx] = '0';

    for(int i=0; i<36; i++){
        if(i == 8 || i == 13 || i == 18 || i == 23 || i == g_0_idx) continue;
        g_flag_holder[999][i] = g_dic[rand() % 15];
    }
}


void __attribute__ ((constructor)) flag0_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[0], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag1_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[1], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag2_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[2], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag3_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[3], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag4_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[4], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag5_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[5], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag6_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[6], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag7_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[7], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag8_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[8], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag9_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[9], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag10_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[10], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag11_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[11], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag12_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[12], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag13_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[13], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag14_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[14], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag15_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[15], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag16_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[16], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag17_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[17], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag18_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[18], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag19_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[19], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag20_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[20], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag21_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[21], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag22_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[22], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag23_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[23], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag24_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[24], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag25_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[25], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag26_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[26], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag27_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[27], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag28_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[28], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag29_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[29], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag30_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[30], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag31_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[31], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag32_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[32], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag33_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[33], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag34_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[34], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag35_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[35], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag36_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[36], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag37_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[37], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag38_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[38], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag39_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[39], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag40_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[40], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag41_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[41], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag42_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[42], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag43_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[43], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag44_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[44], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag45_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[45], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag46_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[46], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag47_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[47], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag48_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[48], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag49_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[49], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag50_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[50], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag51_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[51], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag52_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[52], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag53_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[53], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag54_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[54], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag55_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[55], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag56_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[56], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag57_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[57], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag58_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[58], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag59_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[59], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag60_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[60], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag61_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[61], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag62_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[62], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag63_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[63], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag64_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[64], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag65_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[65], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag66_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[66], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag67_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[67], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag68_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[68], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag69_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[69], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag70_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[70], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag71_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[71], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag72_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[72], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag73_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[73], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag74_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[74], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag75_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[75], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag76_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[76], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag77_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[77], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag78_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[78], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag79_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[79], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag80_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[80], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag81_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[81], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag82_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[82], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag83_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[83], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag84_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[84], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag85_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[85], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag86_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[86], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag87_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[87], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag88_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[88], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag89_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[89], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag90_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[90], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag91_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[91], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag92_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[92], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag93_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[93], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag94_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[94], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag95_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[95], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag96_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[96], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag97_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[97], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag98_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[98], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag99_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[99], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag100_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[100], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag101_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[101], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag102_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[102], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag103_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[103], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag104_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[104], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag105_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[105], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag106_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[106], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag107_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[107], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag108_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[108], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag109_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[109], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag110_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[110], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag111_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[111], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag112_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[112], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag113_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[113], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag114_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[114], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag115_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[115], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag116_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[116], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag117_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[117], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag118_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[118], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag119_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[119], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag120_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[120], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag121_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[121], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag122_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[122], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag123_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[123], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag124_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[124], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag125_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[125], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag126_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[126], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag127_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[127], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag128_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[128], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag129_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[129], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag130_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[130], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag131_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[131], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag132_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[132], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag133_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[133], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag134_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[134], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag135_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[135], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag136_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[136], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag137_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[137], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag138_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[138], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag139_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[139], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag140_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[140], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag141_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[141], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag142_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[142], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag143_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[143], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag144_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[144], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag145_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[145], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag146_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[146], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag147_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[147], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag148_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[148], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag149_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[149], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag150_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[150], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag151_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[151], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag152_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[152], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag153_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[153], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag154_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[154], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag155_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[155], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag156_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[156], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag157_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[157], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag158_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[158], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag159_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[159], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag160_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[160], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag161_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[161], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag162_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[162], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag163_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[163], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag164_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[164], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag165_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[165], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag166_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[166], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag167_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[167], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag168_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[168], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag169_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[169], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag170_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[170], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag171_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[171], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag172_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[172], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag173_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[173], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag174_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[174], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag175_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[175], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag176_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[176], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag177_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[177], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag178_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[178], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag179_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[179], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag180_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[180], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag181_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[181], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag182_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[182], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag183_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[183], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag184_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[184], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag185_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[185], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag186_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[186], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag187_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[187], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag188_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[188], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag189_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[189], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag190_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[190], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag191_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[191], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag192_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[192], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag193_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[193], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag194_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[194], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag195_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[195], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag196_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[196], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag197_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[197], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag198_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[198], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag199_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[199], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag200_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[200], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag201_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[201], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag202_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[202], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag203_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[203], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag204_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[204], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag205_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[205], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag206_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[206], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag207_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[207], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag208_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[208], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag209_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[209], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag210_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[210], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag211_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[211], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag212_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[212], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag213_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[213], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag214_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[214], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag215_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[215], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag216_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[216], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag217_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[217], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag218_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[218], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag219_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[219], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag220_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[220], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag221_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[221], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag222_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[222], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag223_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[223], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag224_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[224], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag225_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[225], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag226_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[226], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag227_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[227], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag228_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[228], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag229_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[229], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag230_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[230], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag231_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[231], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag232_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[232], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag233_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[233], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag234_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[234], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag235_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[235], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag236_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[236], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag237_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[237], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag238_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[238], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag239_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[239], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag240_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[240], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag241_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[241], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag242_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[242], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag243_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[243], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag244_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[244], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag245_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[245], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag246_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[246], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag247_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[247], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag248_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[248], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag249_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[249], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag250_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[250], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag251_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[251], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag252_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[252], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag253_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[253], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag254_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[254], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag255_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[255], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag256_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[256], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag257_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[257], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag258_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[258], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag259_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[259], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag260_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[260], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag261_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[261], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag262_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[262], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag263_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[263], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag264_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[264], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag265_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[265], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag266_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[266], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag267_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[267], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag268_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[268], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag269_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[269], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag270_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[270], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag271_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[271], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag272_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[272], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag273_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[273], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag274_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[274], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag275_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[275], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag276_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[276], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag277_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[277], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag278_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[278], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag279_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[279], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag280_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[280], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag281_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[281], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag282_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[282], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag283_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[283], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag284_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[284], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag285_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[285], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag286_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[286], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag287_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[287], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag288_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[288], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag289_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[289], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag290_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[290], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag291_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[291], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag292_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[292], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag293_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[293], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag294_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[294], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag295_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[295], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag296_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[296], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag297_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[297], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag298_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[298], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag299_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[299], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag300_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[300], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag301_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[301], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag302_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[302], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag303_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[303], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag304_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[304], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag305_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[305], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag306_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[306], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag307_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[307], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag308_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[308], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag309_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[309], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag310_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[310], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag311_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[311], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag312_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[312], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag313_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[313], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag314_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[314], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag315_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[315], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag316_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[316], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag317_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[317], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag318_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[318], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag319_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[319], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag320_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[320], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag321_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[321], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag322_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[322], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag323_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[323], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag324_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[324], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag325_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[325], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag326_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[326], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag327_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[327], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag328_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[328], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag329_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[329], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag330_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[330], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag331_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[331], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag332_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[332], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag333_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[333], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag334_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[334], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag335_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[335], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag336_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[336], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag337_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[337], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag338_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[338], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag339_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[339], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag340_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[340], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag341_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[341], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag342_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[342], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag343_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[343], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag344_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[344], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag345_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[345], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag346_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[346], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag347_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[347], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag348_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[348], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag349_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[349], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag350_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[350], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag351_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[351], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag352_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[352], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag353_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[353], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag354_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[354], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag355_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[355], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag356_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[356], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag357_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[357], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag358_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[358], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag359_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[359], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag360_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[360], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag361_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[361], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag362_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[362], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag363_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[363], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag364_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[364], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag365_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[365], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag366_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[366], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag367_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[367], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag368_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[368], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag369_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[369], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag370_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[370], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag371_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[371], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag372_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[372], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag373_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[373], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag374_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[374], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag375_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[375], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag376_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[376], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag377_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[377], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag378_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[378], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag379_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[379], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag380_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[380], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag381_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[381], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag382_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[382], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag383_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[383], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag384_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[384], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag385_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[385], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag386_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[386], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag387_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[387], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag388_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[388], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag389_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[389], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag390_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[390], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag391_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[391], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag392_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[392], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag393_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[393], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag394_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[394], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag395_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[395], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag396_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[396], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag397_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[397], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag398_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[398], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag399_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[399], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag400_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[400], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag401_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[401], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag402_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[402], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag403_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[403], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag404_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[404], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag405_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[405], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag406_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[406], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag407_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[407], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag408_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[408], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag409_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[409], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag410_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[410], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag411_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[411], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag412_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[412], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag413_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[413], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag414_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[414], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag415_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[415], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag416_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[416], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag417_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[417], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag418_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[418], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag419_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[419], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag420_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[420], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag421_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[421], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag422_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[422], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag423_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[423], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag424_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[424], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag425_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[425], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag426_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[426], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag427_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[427], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag428_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[428], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag429_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[429], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag430_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[430], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag431_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[431], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag432_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[432], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag433_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[433], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag434_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[434], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag435_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[435], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag436_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[436], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag437_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[437], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag438_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[438], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag439_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[439], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag440_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[440], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag441_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[441], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag442_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[442], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag443_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[443], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag444_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[444], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag445_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[445], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag446_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[446], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag447_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[447], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag448_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[448], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag449_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[449], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag450_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[450], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag451_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[451], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag452_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[452], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag453_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[453], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag454_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[454], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag455_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[455], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag456_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[456], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag457_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[457], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag458_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[458], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag459_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[459], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag460_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[460], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag461_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[461], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag462_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[462], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag463_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[463], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag464_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[464], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag465_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[465], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag466_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[466], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag467_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[467], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag468_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[468], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag469_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[469], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag470_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[470], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag471_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[471], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag472_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[472], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag473_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[473], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag474_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[474], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag475_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[475], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag476_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[476], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag477_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[477], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag478_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[478], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag479_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[479], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag480_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[480], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag481_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[481], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag482_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[482], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag483_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[483], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag484_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[484], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag485_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[485], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag486_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[486], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag487_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[487], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag488_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[488], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag489_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[489], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag490_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[490], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag491_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[491], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag492_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[492], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag493_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[493], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag494_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[494], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag495_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[495], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag496_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[496], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag497_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[497], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag498_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[498], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag499_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[499], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag500_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[500], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag501_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[501], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag502_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[502], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag503_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[503], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag504_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[504], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag505_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[505], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag506_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[506], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag507_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[507], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag508_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[508], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag509_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[509], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag510_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[510], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag511_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[511], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag512_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[512], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag513_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[513], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag514_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[514], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag515_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[515], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag516_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[516], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag517_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[517], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag518_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[518], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag519_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[519], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag520_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[520], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag521_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[521], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag522_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[522], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag523_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[523], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag524_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[524], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag525_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[525], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag526_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[526], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag527_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[527], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag528_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[528], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag529_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[529], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag530_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[530], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag531_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[531], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag532_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[532], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag533_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[533], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag534_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[534], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag535_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[535], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag536_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[536], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag537_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[537], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag538_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[538], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag539_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[539], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag540_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[540], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag541_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[541], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag542_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[542], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag543_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[543], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag544_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[544], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag545_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[545], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag546_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[546], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag547_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[547], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag548_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[548], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag549_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[549], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag550_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[550], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag551_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[551], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag552_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[552], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag553_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[553], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag554_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[554], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag555_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[555], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag556_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[556], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag557_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[557], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag558_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[558], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag559_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[559], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag560_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[560], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag561_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[561], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag562_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[562], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag563_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[563], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag564_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[564], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag565_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[565], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag566_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[566], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag567_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[567], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag568_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[568], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag569_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[569], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag570_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[570], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag571_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[571], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag572_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[572], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag573_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[573], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag574_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[574], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag575_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[575], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag576_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[576], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag577_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[577], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag578_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[578], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag579_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[579], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag580_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[580], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag581_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[581], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag582_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[582], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag583_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[583], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag584_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[584], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag585_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[585], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag586_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[586], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag587_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[587], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag588_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[588], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag589_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[589], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag590_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[590], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag591_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[591], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag592_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[592], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag593_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[593], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag594_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[594], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag595_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[595], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag596_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[596], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag597_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[597], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag598_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[598], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag599_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[599], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag600_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[600], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag601_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[601], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag602_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[602], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag603_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[603], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag604_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[604], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag605_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[605], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag606_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[606], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag607_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[607], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag608_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[608], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag609_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[609], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag610_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[610], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag611_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[611], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag612_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[612], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag613_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[613], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag614_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[614], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag615_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[615], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag616_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[616], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag617_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[617], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag618_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[618], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag619_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[619], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag620_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[620], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag621_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[621], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag622_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[622], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag623_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[623], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag624_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[624], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag625_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[625], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag626_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[626], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag627_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[627], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag628_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[628], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag629_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[629], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag630_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[630], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag631_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[631], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag632_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[632], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag633_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[633], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag634_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[634], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag635_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[635], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag636_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[636], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag637_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[637], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag638_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[638], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag639_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[639], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag640_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[640], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag641_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[641], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag642_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[642], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag643_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[643], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag644_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[644], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag645_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[645], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag646_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[646], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag647_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[647], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag648_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[648], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag649_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[649], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag650_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[650], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag651_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[651], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag652_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[652], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag653_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[653], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag654_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[654], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag655_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[655], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag656_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[656], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag657_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[657], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag658_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[658], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag659_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[659], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag660_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[660], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag661_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[661], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag662_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[662], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag663_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[663], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag664_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[664], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag665_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[665], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag666_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[666], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag667_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[667], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag668_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[668], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag669_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[669], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag670_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[670], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag671_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[671], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag672_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[672], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag673_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[673], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag674_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[674], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag675_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[675], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag676_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[676], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag677_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[677], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag678_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[678], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag679_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[679], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag680_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[680], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag681_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[681], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag682_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[682], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag683_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[683], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag684_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[684], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag685_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[685], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag686_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[686], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag687_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[687], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag688_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[688], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag689_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[689], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag690_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[690], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag691_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[691], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag692_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[692], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag693_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[693], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag694_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[694], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag695_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[695], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag696_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[696], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag697_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[697], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag698_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[698], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag699_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[699], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag700_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[700], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag701_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[701], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag702_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[702], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag703_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[703], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag704_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[704], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag705_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[705], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag706_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[706], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag707_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[707], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag708_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[708], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag709_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[709], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag710_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[710], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag711_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[711], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag712_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[712], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag713_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[713], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag714_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[714], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag715_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[715], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag716_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[716], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag717_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[717], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag718_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[718], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag719_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[719], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag720_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[720], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag721_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[721], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag722_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[722], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag723_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[723], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag724_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[724], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag725_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[725], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag726_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[726], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag727_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[727], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag728_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[728], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag729_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[729], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag730_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[730], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag731_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[731], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag732_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[732], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag733_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[733], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag734_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[734], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag735_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[735], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag736_maybe_true() {
    // printf("%s\n", g_input_flag);
    // printf("cmp_result is : %d\n", !memcmp(g_input_flag, g_flag_holder[736], 36));
    if(!memcmp(g_input_flag, g_flag_holder[736], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag737_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[737], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag738_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[738], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag739_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[739], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag740_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[740], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag741_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[741], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag742_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[742], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag743_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[743], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag744_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[744], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag745_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[745], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag746_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[746], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag747_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[747], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag748_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[748], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag749_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[749], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag750_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[750], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag751_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[751], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag752_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[752], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag753_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[753], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag754_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[754], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag755_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[755], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag756_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[756], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag757_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[757], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag758_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[758], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag759_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[759], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag760_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[760], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag761_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[761], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag762_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[762], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag763_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[763], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag764_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[764], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag765_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[765], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag766_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[766], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag767_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[767], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag768_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[768], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag769_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[769], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag770_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[770], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag771_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[771], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag772_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[772], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag773_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[773], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag774_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[774], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag775_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[775], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag776_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[776], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag777_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[777], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag778_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[778], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag779_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[779], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag780_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[780], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag781_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[781], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag782_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[782], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag783_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[783], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag784_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[784], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag785_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[785], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag786_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[786], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag787_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[787], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag788_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[788], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag789_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[789], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag790_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[790], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag791_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[791], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag792_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[792], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag793_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[793], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag794_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[794], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag795_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[795], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag796_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[796], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag797_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[797], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag798_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[798], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag799_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[799], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag800_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[800], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag801_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[801], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag802_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[802], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag803_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[803], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag804_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[804], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag805_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[805], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag806_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[806], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag807_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[807], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag808_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[808], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag809_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[809], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag810_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[810], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag811_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[811], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag812_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[812], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag813_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[813], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag814_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[814], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag815_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[815], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag816_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[816], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag817_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[817], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag818_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[818], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag819_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[819], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag820_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[820], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag821_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[821], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag822_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[822], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag823_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[823], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag824_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[824], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag825_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[825], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag826_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[826], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag827_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[827], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag828_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[828], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag829_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[829], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag830_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[830], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag831_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[831], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag832_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[832], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag833_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[833], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag834_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[834], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag835_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[835], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag836_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[836], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag837_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[837], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag838_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[838], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag839_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[839], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag840_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[840], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag841_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[841], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag842_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[842], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag843_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[843], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag844_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[844], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag845_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[845], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag846_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[846], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag847_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[847], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag848_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[848], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag849_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[849], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag850_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[850], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag851_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[851], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag852_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[852], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag853_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[853], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag854_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[854], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag855_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[855], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag856_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[856], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag857_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[857], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag858_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[858], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag859_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[859], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag860_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[860], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag861_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[861], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag862_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[862], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag863_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[863], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag864_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[864], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag865_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[865], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag866_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[866], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag867_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[867], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag868_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[868], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag869_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[869], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag870_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[870], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag871_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[871], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag872_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[872], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag873_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[873], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag874_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[874], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag875_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[875], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag876_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[876], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag877_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[877], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag878_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[878], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag879_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[879], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag880_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[880], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag881_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[881], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag882_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[882], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag883_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[883], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag884_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[884], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag885_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[885], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag886_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[886], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag887_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[887], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag888_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[888], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag889_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[889], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag890_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[890], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag891_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[891], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag892_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[892], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag893_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[893], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag894_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[894], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag895_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[895], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag896_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[896], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag897_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[897], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag898_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[898], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag899_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[899], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag900_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[900], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag901_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[901], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag902_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[902], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag903_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[903], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag904_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[904], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag905_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[905], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag906_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[906], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag907_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[907], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag908_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[908], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag909_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[909], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag910_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[910], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag911_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[911], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag912_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[912], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag913_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[913], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag914_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[914], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag915_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[915], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag916_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[916], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag917_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[917], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag918_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[918], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag919_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[919], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag920_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[920], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag921_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[921], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag922_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[922], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag923_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[923], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag924_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[924], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag925_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[925], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag926_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[926], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag927_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[927], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag928_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[928], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag929_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[929], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag930_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[930], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag931_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[931], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag932_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[932], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag933_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[933], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag934_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[934], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag935_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[935], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag936_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[936], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag937_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[937], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag938_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[938], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag939_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[939], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag940_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[940], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag941_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[941], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag942_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[942], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag943_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[943], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag944_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[944], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag945_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[945], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag946_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[946], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag947_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[947], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag948_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[948], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag949_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[949], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag950_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[950], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag951_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[951], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag952_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[952], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag953_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[953], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag954_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[954], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag955_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[955], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag956_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[956], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag957_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[957], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag958_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[958], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag959_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[959], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag960_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[960], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag961_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[961], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag962_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[962], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag963_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[963], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag964_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[964], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag965_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[965], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag966_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[966], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag967_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[967], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag968_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[968], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag969_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[969], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag970_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[970], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag971_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[971], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag972_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[972], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag973_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[973], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag974_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[974], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag975_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[975], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag976_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[976], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag977_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[977], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag978_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[978], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag979_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[979], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag980_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[980], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag981_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[981], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag982_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[982], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag983_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[983], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag984_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[984], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag985_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[985], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag986_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[986], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag987_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[987], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag988_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[988], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag989_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[989], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag990_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[990], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag991_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[991], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag992_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[992], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag993_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[993], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag994_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[994], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag995_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[995], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag996_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[996], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag997_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[997], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag998_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[998], 36)) {
        g_you_get_flag = 1;
    }
}


void __attribute__ ((constructor)) flag999_maybe_true() {
    if(!memcmp(g_input_flag, g_flag_holder[999], 36)) {
        g_you_get_flag = 1;
    }
}

int main() { 
    if(g_you_get_flag == 1){
        if(strstr((const char*)g_input_flag, (const char*)"0")){
            printf("nope!\nhint: my flag will never include char '0'!\n");
        }else{
            printf("you find it, flag is flag{%s}\n", g_input_flag);
        }
    }else{
        printf("nope!\nyour input is so bad!\n");
    }
}