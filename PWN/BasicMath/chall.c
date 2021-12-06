#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h> 
#include <time.h> 

#define TIMES  0x10

void init_proc()
{
    setvbuf(stdin,  NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

void readstr(char* p, size_t size)
{
    unsigned char c;
    for(int i = 0; i < size; ++i)
    {
        if(read(0, &c, 1) <= 0)
        {
            puts("read failed");
            exit(-1);
        }
        if(c == '\n')
        {
            p[i] = '\x00';
            return;
        }
        p[i] = c;
    }
}

long readint()
{
    char buf[0x10];

    readstr(buf, sizeof(buf) - 1);

    return atol(buf);
}

void gift(int32_t cnt)
{
    char a;
    write(1, &a+1, cnt);
    read(0, &a+1, cnt);
}

void last_problem()
{
    volatile int32_t answer;
    volatile int32_t result = 0;
    char a[0x10];
    char b[0x10];
    
    for(int i = 0; i < 0xf; i++)
    {
        a[i] = rand() % '!' + ('A' - '!');
        b[i] = rand() % '!' + ('A' - '!');
    }
    a[0xF] = b[0xF] = '\x00';

    printf("[Problem ???] %s + %s = ? ", a, b);
}

int main()
{
    int32_t answer;
    int32_t result;
    int32_t a, b;
    
    init_proc();
    srand(time(0));
    
    for(int i = 0; i < TIMES; ++i)
    {
        result = 0;
        if (i == TIMES-1)
        {
            last_problem();
            __asm__ ("call readint;"
                     "movq %%rax, %0;" : : "m" (answer));
        }
        else
        {
            a = rand() % 0x10000;
            b = rand() % 0x10000;
            
            printf("[Problem %d] %d + %d = ? ", i+1, a, b);
            __asm__ ("call readint;"
                     "movq %%rax, %0;" : : "m" (answer));
            if (answer == (a + b))
                result = 1;
            printf("%d v.s. %d => %d\n", answer, a + b, result);
        }
        if ( !result )
            exit(-1);     
    }
    gift( answer % 0x500 );
}
