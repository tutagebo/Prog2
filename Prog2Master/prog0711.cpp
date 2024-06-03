#include <iostream>
#include <math.h>

int prog7_11() {
    char str[256] = "", *p;
    gets_s(str);
    for (int i = 0; str[i] != '\0'; i++) {
        p = &str[i];
        if (('a' <= *p && *p <= 'z') || *p == ' ') {
            printf("%c", *p);
        }
    }
    return 0;
}
