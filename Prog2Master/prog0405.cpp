#include <iostream>
#include <math.h>

int prog4_5() {
    int a[] = { 12,24,18,22,28,7,32,19,5,36,-1 };
    int sum=0,i=0;
    for (int x : a) {
        if (x == -1)break;
        sum += x;
        i++;
    }
    printf("ave: %6.1lf", (double)sum /i);
    return 0;
}