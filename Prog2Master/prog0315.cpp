#include <iostream>
#include <math.h>

int prog3_15() {
    double x, y,r,c;
    scanf_s("%lf %lf", &x, &y);
    r = sqrt(x * x + y * y);
    c = atan(y / x);
    printf("r=%f, É∆=%.8f",r,c);
    return 0;
}
