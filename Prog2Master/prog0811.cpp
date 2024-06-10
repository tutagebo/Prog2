#include <iostream>

int prog8_11() {
    char str[256], *p;
    gets_s(str);
    p = str;

    while (*p) {
        if ('A' <= *p && *p <= 'Z') {
            printf("%c", *p);
        }
        p++;
    }
    return 0;
}