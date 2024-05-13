#include <iostream>
#define N 20

int prog4_15() {
    int f1 = 1, f2 = 0, f3 = 0;
    for (int i = 1; i <= N; i++) {
        f3 = f2 + f1;
        printf("F[%2d]=%d\n", i, f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}