#include <iostream>

char toLower(char c);

int prog5_11() {
    char c = getchar();
    putchar(toLower(c));
    return 0;
}

char toLower(char c) {
    if ('A' <= c && c <= 'Z')c += 32;
    return c;
}
