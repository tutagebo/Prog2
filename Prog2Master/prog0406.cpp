#include <iostream>

int prog4_6() {
    double a[2][2];
    double result;
    for (int i = 0; i < 2; i++) {
        scanf_s("%lf %lf", &a[i][0], &a[i][1]);
    }
    result = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    printf("%f", result);
    return 0;
}