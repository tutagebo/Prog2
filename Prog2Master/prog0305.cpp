#include <iostream>
#include <math.h>

#define PI 3.141592654

int prog3_5() {
    for (double i = 0; i <= 360;i+=10) {
        printf("%4.0f %12.8f ", i, sin(i * PI / 180));
        printf("%12.8f ", cos(i * PI / 180));
        if (i == 90) {
            printf("‡");
        }
        else if (i == 270) {
            printf("-‡");
        }
        else {
            printf("%12.8f", tan(i * PI / 180));
        }
        printf("\n");
    }
    return 0;
}