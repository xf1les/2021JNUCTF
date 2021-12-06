#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <fcntl.h>
#include <unistd.h>

#define KEY_CHECK_NUM 100

char* PAD[] = {"one", "two", "three"};

void init_proc()
{
    setvbuf(stdin,  NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

int check(char* key, int key_length)
{
    int i;
    int digit_sum;
    char current_char;
    
    if ( key_length < 3)
        return 0;
    
    i = 0;
    digit_sum = 0;
    while ( 1 )
    {
        current_char = *key++;
        if ( current_char < '0' || current_char > '9' )
            break;
        digit_sum += current_char - '0';
        if( ++i > 6 )
        {
            return digit_sum % 7 == 0;
        }
    }
    
    return 0;
}

int check_retail_key(char* key, int key_length)
{
    int first_3_chars_int;
    int key_vaild;
    char first_3_chars[4];
    
    if ( key_length < 3)
        return 0;
    
    memcpy(first_3_chars, key, 3);
    first_3_chars[3] = '\x00';
    first_3_chars_int = atoi(first_3_chars);
    
    if ( first_3_chars_int == 333 || first_3_chars_int == 444 || 
         first_3_chars_int == 555 || first_3_chars_int == 666 ||
         first_3_chars_int == 777 || first_3_chars_int == 888 ||
         first_3_chars_int == 999 )
    {
        key_vaild = 0;
    }
    else
    {
        key_vaild = check(key + 4, key_length);
    }
    
    return key_vaild;
}

int main()
{
    char key[0x10];
    int num;
    int num_cnt;
    int count;
    
    init_proc();
    srand(time(0));
    
    printf("Give me %i vaild license keys with condition check, and you will receive my flag as a reward.\n\n", KEY_CHECK_NUM);
    
    for ( int i = 0; i < KEY_CHECK_NUM; ++i )
    {
        num     = rand() % 9;
        num_cnt = rand() % 3;
        
        printf("[%02d] Input your key (Cond: has %s '%d'): ", i, PAD[num_cnt], num);
        memset(key, 0, sizeof(key));
        scanf("%11s", key);
        
        if ( strlen(key) != 11 || key[3] != '-' )
        {
            printf("[%02d] ERROR: Malformed key\n", i);
            exit(-1);
        }
        count = 0;
        for (int k = 0; k < 7; ++k)
        {
            if ( key[k+4] == '0' + num )
                count++;
        }
        if ( count != num_cnt + 1)
        {
            printf("[%02d] ERROR: Condition check failed\n", i);
            exit(-1);
        }
        if ( check_retail_key(key, 11) )
        {
            printf("[%02d] Key Accepted\n", i);
        }
        else
        {
            printf("[%02d] ERROR: Key check failed\n", i);
            exit(-1);
        }
    }
    system("/bin/sh");
}
