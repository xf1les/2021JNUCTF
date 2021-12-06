#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h> 

#define LIST_LEN  0x10
#define MAX_SIZE 0x800

struct INFO {
    char* ptr;
    size_t size;
};

char* PTR_LIST[LIST_LEN];
size_t SIZE_LIST[LIST_LEN];

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

int readint()
{
    char buf[0x10];

    readstr(buf, sizeof(buf) - 1);

    return atoi(buf);
}

void add()
{
    char* ptr;
    size_t size;
    unsigned int index;

    printf("Index: ");
    index = readint();
    if(index >= LIST_LEN)
    {
        puts("Invaild Index!");
        return;
    }
    
    printf("Size: ");
    size = readint();
    if(size > MAX_SIZE)
    {
        puts("Invaild size!");
        return;
    }
    
    ptr = malloc(size);
    if(!ptr)
    {
        puts("malloc failed!");
        return;
    }
    
    PTR_LIST[index]  = ptr;
    SIZE_LIST[index] = size;
    
    puts("Done!");
}

void delete()
{
    unsigned int index;

    printf("Index: ");
    index = readint();
    if(index < LIST_LEN && PTR_LIST[index])
    {
        free(PTR_LIST[index]);
        // BUG: Use-After-Free / Double-Free
        /*
         * LIST[index].ptr  = NULL;
         * LIST[index].size = NULL;
        */
        puts("Done!");
    }
    else
    {
    puts("Failed!");
    }
}

void show()
{
    unsigned int index;

    printf("Index: ");
    index = readint();
    if(index < LIST_LEN && PTR_LIST[index])
    {
        printf("Content: %s\n", PTR_LIST[index]);
    }
    else
    {
        puts("Failed!");
    }
}

void edit()
{
    unsigned int index;

    printf("Index: ");
    index = readint();
    if(index < LIST_LEN && PTR_LIST[index] && SIZE_LIST[index])
    {
        printf("Content: ");
        readstr(PTR_LIST[index], SIZE_LIST[index]);
    }
    else
    {
        puts("Failed!");
    }
}

void menu()
{
    puts("Please choose an option:");
    puts("1. Add");
    puts("2. Delete");
    puts("3. Show");
    puts("4. Edit");
    puts("5. Exit");
    printf("Your choice >> ");
}

int main()
{
    unsigned int choice;
    
    init_proc();  

    while(1)
    {
        menu();
        choice = readint();

        switch(choice)
        {
            case 1:
                add(); break;
            case 2:
                delete(); break;
            case 3:
                show(); break;
            case 4:
                edit(); break;
            case 5:
                puts("Bye~");
                exit(0);
            default:
                puts("Unknown option!");
        }
    }
}
