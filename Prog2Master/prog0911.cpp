#include <iostream>
#define N 3

double GetInnerProduct(double a[], double b[]) {
    double result = 0;
    for (int i = 0; i < N; i++) {
        result += *(a + i) * *(b + i);
    }
    return result / N;
}

int prog9_11() {
    double x[N] = { 1.2,3.7,2.8 }, y[N] = { 2.5,0.9,3.2 };
    int n = 5;
    printf("Dot: %6.2f", GetInnerProduct(x, y));
    return 0;
}
