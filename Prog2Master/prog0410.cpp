#include <iostream>

int prog4_10() {
    int n = 1;
    int sum = 1;
    while (sum < 500) {
        n++;
        sum += n;
    }
    printf("n=%d, sum=%d", n, sum);
    return 0;
}