#include <iostream>
#include <math.h>


int prog4_4() {
    int a[10] = { 12,24,18,22,36,7,32,19,5,28 };
    int tmp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (a[j] < a[j + 1])continue;
            tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
        }
    }
    for (int e : a)printf("%d ",e);
    return 0;
}
