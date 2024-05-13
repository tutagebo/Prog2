#include <iostream>

#define N 10

int prog2_2() {
    int a[N] = { 10,8,16,12,10,20,7,32,19,5 }, i, m, x;

    for (i = 0, m = a[i], x = i; i < N; i++) {
        if (a[i] > m) {
            m = a[i];
            x = i;
        }
    }

    printf("a[%d] = %d\n", x, m);

    return 0;
}