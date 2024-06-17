#include <iostream>

int Twice(int* p);

int prog9_5() {
    int a = 4;
    Twice(&a);
    printf("%d",a);
    return 0;
}

int Twice(int* p) {
    *p *= 2;
    return 0;
}