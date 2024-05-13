#include <iostream>
#include <math.h>

double getTriangleArea(double a, double b, double c);

int prog3_12() {
    double a, b, c;
    scanf_s("%lf %lf %lf", &a, &b, &c);
    double sur = getTriangleArea(a, b, c);
    if (sur == -1)printf("•s³‚È“ü—Í‚Å‚·");
    else printf("–ÊÏ‚Í %f", sur);
    return 0;
}

double getTriangleArea(double a, double b, double c) {
    if (!(a + b > c && b + c > a && c + a > b))return -1;
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}