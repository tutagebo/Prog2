#include <iostream>

int prog2() {
    int a[3];

    a[0] = 5;
    a[1] = 10;
    a[2] = a[1] / a[0];

    printf("Answer = %d\n", a[2]);

    return 0;
}