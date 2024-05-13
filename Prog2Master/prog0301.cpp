#include <iostream>

int prog3_1() {
    const double pi = 3.14;
    double r;
    scanf_s("%lf", &r);
    double v = 4 * r * r * r * pi / 3;
    printf("%6.2e",v);
    return 0;
}
