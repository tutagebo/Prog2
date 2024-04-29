#include <iostream>
#define N 10

int prog3_14() {
    int a = 1;
    for (int i = 0; i <= 10; i++) {
        printf("a[%2d] = %5d\n", i, a);
        a = 3 * a - 1;
    }
    return 0;
}
