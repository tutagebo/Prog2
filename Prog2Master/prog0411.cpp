#include <iostream>

int prog4_11() {
    int a[10] = { 17,180,91,77,120,88,150,24,15,60 };
    for (int e : a) {
        if ((e % 2 == 0 && e % 3 == 0) || e % 5 == 0)printf("%d ", e);
    }
    return 0;
}