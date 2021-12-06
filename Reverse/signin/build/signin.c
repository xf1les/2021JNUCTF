#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define XOR1(a, b) 2 * (a | b) - b - a                 // x ⊕ y → 2 × (x ∨ y) − y − x
#define XOR2(a, b) -(~a | b) + 2 * (~a & b) + (a | ~b) // x ⊕ y → −(¬x ∨ y) + 2 × (¬x ∧ y) + (x ∨ ¬y)

// flag{welcome_to_Re_world!}

int main()
{
    char input[100] = {0};
    char enc[26] = {102, 11, 104, 12, 115, 1, 98, 9, 98, 4, 99, 13, 94, 39, 70, 22, 84, 32, 109, 9, 114, 21, 111, 28, 37, 65};
    printf("input flag: ");
    scanf("%100s", input);
    if (strlen(input) == 26)
    {
        for (size_t i = 0; i < strlen(input); i++)
        {
            input[i] = XOR1(input[i], i);
        }
        for (size_t i = 1; i < strlen(input); i++)
        {
            input[i] = XOR2(input[i], input[i - 1]);
        }
        if (memcmp(input, enc, 26) != 0)
        {
            printf("wrong!\n");
            exit(-1);
        }
        else
        {
            printf("right! \n");
            exit(0);
        }
    }
    else
        printf("wrong! \n");
    return 0;
}