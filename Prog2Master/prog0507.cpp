#include <iostream>

int prog5_7() {
    char c = getchar();
    if ('a' <= c && c <= 'z') {
        c--;
        if (c == 'a'-1)c = 'z';
        printf("%c", c);
    }
    else {
        printf("[error]: Not an upper case");
    }
    return 0;
}