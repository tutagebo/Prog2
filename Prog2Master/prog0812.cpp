#include <iostream>

int prog8_12() {
    char str[256], * p;
    gets_s(str);

    for (p = str; *p;p++) {
        if ('0' <= *p && *p <= '9') {
            printf("%c", *p);
        }
    }
    return 0;
}