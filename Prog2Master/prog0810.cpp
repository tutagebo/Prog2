#include <iostream>
#include <math.h>

int prog8_10() {
    int a[10] = { 12,24,18,22,3,7,32,19,5,28 }, * p;

    p = a;
    for (int i = 0; i < 5; i++,p++) {
        if(*p>=10)printf("a[%d]:%f\n", i, sqrt((double)*p));
    }
    return 0;
}