#include <iostream>

void ToLower(char str[]) {
    while (*str) {
        if ('A' <= *str && *str <= 'Z') {
            *str = *str+32;
        }
        str++;
    }
    *str = '\0';
}

int prog9_7() {
    char str1[256] = "JDHdjidDIHdjJObdhD";
    ToLower(str1);
    puts(str1);
    return 0;
}
