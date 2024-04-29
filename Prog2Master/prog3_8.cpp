#include <iostream>

int prog3_8() {
    int a[10] = { 3,7,0,8,4,1,9,6,5,2 };
    int b=0;
    for (;;) {
        b = a[b];
        if (b == 0)break;
        printf("%d\n", b);
    }
    return 0;
}
