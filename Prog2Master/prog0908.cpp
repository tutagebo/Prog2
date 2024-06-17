#include <iostream>

int WordCount(char str[]) {
    int count = 0;
    while (*str) {
        if (*str == ' ')count++;
        str++;
    }
    return ++count;
}

int prog9_8() {
    char str1[256] = "JDHd ji dDIH djJ Obd hD";
    printf("%d",WordCount(str1));
    return 0;
}
