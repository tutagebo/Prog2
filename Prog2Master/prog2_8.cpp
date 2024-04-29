#include <iostream>

int prog2_8() {
    int a[10] = { 17,180,91,-77,120,-88,150,24,15,-60 },i,b=0,c=0,d=0;
    for (i = 0; i < 10; i++) {
        if (a[i] >= 100) {
            b += a[i];
        }
        else if (a[i] < 100 && a[i] >= 0) {
            c += a[i];
        }
        else {
            d += a[i];
        }
    }
    printf("100à»è„: %d\n0~99: %d\nÇªÇÍà»äO: %d\n", b, c, d);
    return 0;
}
