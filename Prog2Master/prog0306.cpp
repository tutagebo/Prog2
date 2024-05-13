#include <iostream>
#define N 3

int prog3_6() {
    double a[N], b[N];
    double result = 0;
    for (int i = 0; i < N; i++) {
        printf("%d:a b>", i);
        scanf_s("%lf %lf", &a[i], &b[i]);
        result += a[i] * b[i];
    }
    printf("%6.2f", result);
    return 0;
}
