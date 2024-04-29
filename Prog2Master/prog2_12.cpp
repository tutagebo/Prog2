#include <iostream>

double getTrapezoid(double a, double b, double h);

int prog2_12() {
    double a, b, h;
    printf("<ã’ê ‰º’ê ‚‚³>‚Å“ü—Í:");
    scanf_s("%lf %lf %lf",&a,&b,&h);
    double result = getTrapezoid(a, b, h);
    if (result == -1)printf("•s³‚È“ü—Í‚Å‚·");
    else printf("‘äŒ`‚Ì–ÊÏ‚Í %5.1f", result);
    return 0;
}

double getTrapezoid(double a, double b, double h) {
    if (a < 0 || b < 0 || h < 0)return -1;
    return (a + b) * h / 2;
}