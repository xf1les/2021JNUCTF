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
