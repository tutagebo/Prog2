#include <iostream>
#include <math.h>

int prog7_10() {
    int a[10] = { 12,24,18,22,3,7,32,19,5,28 };
    int* p;
    double b;
    for (int i = 0; i < 10;i++) {
        p = &a[i];
        if (*p > 10) {
            b = sqrt((double)*p);
            printf("a[%d]=%f\n", i, b);
        }
    }
    return 0;
}
