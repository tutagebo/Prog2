#include <iostream>

int prog2_4() {
    double a[3], b[3], c[3], d[3];

    for (int i = 0; i < 3; i++) {
        scanf_s("%lf", &a[i]);
    }
    for (int i = 0; i < 3; i++) {
        scanf_s("%lf", &b[i]);
    }
    for (int i = 0; i < 3; i++) {
        c[i] = a[i] + b[i];
        d[i] = a[i] - b[i];
    }


    printf("c = [ %f6.2, %f6.2, %f6.2 ]\n", c[0], c[1], c[2]);
    printf("c = [ %f6.2, %f6.2, %f6.2 ]\n", d[0], d[1], d[2]);

    return 0;
}
