#include <iostream>

int prog2_11() {
    double w=0,n,min=1000,max=0,ave=0;
    for (n = 1; w != -1; n++) {
        scanf_s("%lf", &w);
        ave += w;
        max = (max < w) ? w : max;
        min = (min > w&&w>0) ? w : min;
    }
    ave /= n;
    printf("ave: %.1lf\nmax: %.1lf\nmin: %.1lf",ave,max,min);
    return 0;
}