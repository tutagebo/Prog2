#include <iostream>
#include <math.h>

int prog7_12() {
    char str[256] = "", *p;
    int sum = 0;
    gets_s(str);
    for (int i = 0; str[i] != '\0'; i++) {
        p = &str[i];
        if ('0' <= *p && *p <= '9') {
            sum += str[i] - 48;
        }
    }
    printf("sum=%d", sum);
    return 0;
}
