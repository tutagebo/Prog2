#include <iostream>

int prog4() {
    double x;
    scanf_s("%lf", &x);
    printf("result: %8.2f\n", (2 * x * x - 3) * (3 * x + 2) / 5);
    return 0;
}