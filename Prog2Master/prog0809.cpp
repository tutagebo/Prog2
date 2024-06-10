#include <iostream>

int prog8_9() {
    int a[5] = { 12,21,8,18,25 }, *pa;
    int b[5], *pb;

    pa = a;
    pb = b;
    for (int i = 0; i < 5; i++) {
        *pb = *pa;
        printf("%d\n", *pb);
        pa++;
        pb++;
    }
    return 0;
}