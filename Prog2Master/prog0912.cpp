#include <iostream>
#include <math.h>

int GetMin(int src[]) {
    int min = 9999;
    if (*src < 0) {
        return -1;
    }
    while (*src > 0) {
        if (*src < min)min = *src;
        src++;
    }
    return min;
}

int prog9_12() {
    int a[] = { 6,3,8,2,10,-1 };
    int n = GetMin(a);
    if (n < 0) {
        printf("Å¬’l‚ª•‰‚Ì”‚Å‚·");
        return 0;
    }
    printf("Ave: %10.6f", sqrt((double)n));
    return 0;
}
