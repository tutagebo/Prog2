#include <iostream>
#include <math.h>
#define n 10

double myExp(double x);
int getFact(int x);

int prog4_13() {
    double a;
    scanf_s("%lf", &a);
    double myexp = myExp(a);
    double expa = exp(a);
    double error = expa - myexp;
    printf("exp:%f\nmyExp:%f\nerror:%8.6ef",expa,myexp,error);
    return 0;
}

int getFact(int x) {
    int result = 1;
    for (int i = x; i > 0; i--)result *= i;
    return result;
}

double myExp(double x) {
    double result = 0;
    for (int i = 0; i <= n; i++) {
        result += pow(x, i) / getFact(i);
    }
    return result;
}