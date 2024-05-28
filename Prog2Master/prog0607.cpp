#include <iostream>
#include <string.h>

int prog6_7() {
    char str1[256] = "";
    char str2[256] = "";
    char mem[256] = "";

    gets_s(str1);
    gets_s(str2);

    strcpy_s(mem, str1);
    strcpy_s(str1, str2);
    strcpy_s(str2, mem);

    puts(str1);
    puts(str2);
    return 0;
}