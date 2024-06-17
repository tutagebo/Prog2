#include <iostream>

void ArrayCopy(int dst[], int src[]) {
    int i=0;
    while (i<5) {
        *(dst+i) = *(src+i);
        i++;
    }
}

int prog9_9() {
    int a[5] = { 12,21,8,18,25 },b[5];
    ArrayCopy(b,a);
    for (int e: b) {
        printf("%d\n", e);
    }
    return 0;
}
