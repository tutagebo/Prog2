#include <iostream>

char toUpper(char c);

int prog5_12() {
    char c = getchar();
    putchar(toUpper(c));
    return 0;
}

char toUpper(char c) {
    if ('a' <= c && c <= 'z')c -= 32;
    return c;
}
