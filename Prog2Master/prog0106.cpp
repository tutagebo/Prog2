#include <iostream>

int prog6() {
    double a[5] = {12, 24, 18, 22, 28};
    double result = 0;
    for (int i = 0; i < 5; i++) {
        result += a[i];
    }
    printf("sum: %5.0f\n", result);
    printf("ave: %6.1f\n", result / 5);
    return 0;
}