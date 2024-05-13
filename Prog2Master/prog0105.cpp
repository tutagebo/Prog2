#include <iostream>
#include <math.h>

int prog5() {
    double x;
    scanf_s("%lf", &x);
    if (x < 0) {
        printf("abs: %15.8g\n",abs(x));
    } else {
        printf("sqrt: %15.8g\n", sqrt(x));
    }
    return 0;
}