#include <iostream>
#include <math.h>

int evaluateD(double a, double b, double c);
double getD(double a, double b, double c);

int prog4_8() {
    double a,b,c;
    printf("a b c:");
    scanf_s("%lf %lf %lf", &a,&b,&c);
    int d = evaluateD(a, b, c);
    double dd = getD(a, b, c)/(2*a);
    switch(d) {
        case 1: {
            printf("2‚Â‚ÌˆÙ‚È‚éÀ”\nx = %f } %f",-b/(2*a), dd);
            break;
        }
        case 0: {
            printf("d‰ğ\nx = %f", -b / (2 * a));
            break;
        }
        case -1: {
            printf("2‚Â‚ÌˆÙ‚È‚éÀ”\nx = %f } %fi", -b / (2 * a), dd);
            break;
        }
    }

    return 0;
}

double getD(double a, double b, double c) {
    return sqrt(abs(b * b - 4 * a * c));
}

int evaluateD(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d < 0)return -1;
    else if (d > 0)return 1;
    else return 0;
}

