#include <iostream>

int prog8_8() {
    int a[5] = { 12,21,8,18,25 }, * p;
    p = a;
    int sum = 0;
    for (int i = 0; i < 5;i++) {
        sum += *p;
        p++;
    }
    printf("%d", sum);
    return 0;
}