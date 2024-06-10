#include <iostream>

int prog8_7() {
    int a[5] = { 1,2,3,4,5 }, * p;
    p = a;

    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d(0x%p)\n", i, *p, p);
        p++;
    }
    return 0;
}