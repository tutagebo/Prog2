#include <iostream>

double GetAve(int src[],int n) {
    int i = 0,sum=0;
    while (i < 5) {
        sum += *(src + i);
        i++;
    }
    return (double)sum / (double)n;
}

int prog9_10() {
    int x[5] = { 12,21,8,18,25 };
    int n = 5;
    printf("Ave: %6.2f",GetAve(x, n));
    return 0;
}
