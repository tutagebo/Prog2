#include <iostream>
#include <string.h>

int prog6_9ex() {
    char str1[256] = "", str2[256] = "";
    printf("type a str:");
    gets_s(str1);
    char* str1p = str1; char* str2p = str2;
    while (*str1p) {
        if (*str1p != ' ') {
            *str2p = *str1p;
            str2p++;
        }
        str1p++;
    }
    *str2p = '\0';
    puts(str2);
    return 0;
}
