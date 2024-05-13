#include <iostream>

int prog3_10() {
    int n = 0;
    int sum = 0;
    do {
        n++;
        sum += n;
    } while (sum<500);
    printf("n=%d, sum=%d", n, sum);
    return 0;
}
