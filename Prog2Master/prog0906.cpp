#include <iostream>

void UpperOnly(char dst[], char src[]) {
    while (*src) {
        if ('A' <= *src && *src <= 'Z') {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';
}

int prog9_6() {
    char str1[256] = "JDHdjidDIHdjJObdhD";
    char str2[256] = "";
    UpperOnly(str2, str1);
    puts(str2);
    return 0;
}
