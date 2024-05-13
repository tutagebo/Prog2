#include <iostream>

int getMax(int numAry[]);

int prog2_6() {
    int a[10] = { 12,24,18,22,3,7,32,19,5,28 };
    printf("Å‘å’l‚Í: %d\n", getMax(a));
    return 0;
}

int getMax(int numAry[]) {
    int max = 0,i;
    for (i = 0; i < sizeof numAry; i++) max = (max < numAry[i]) ? numAry[i] : max;
    return max;
}