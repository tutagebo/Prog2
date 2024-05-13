#include <iostream>

int prog3_9() {
    int a[10] = { 12,24,18,22,3,7,32,19,5,28 };
    int min = 99999;
    int index = 0;
    for (int i = 0; i < 10;i++) {
        if (min > a[i]) {
            min = a[i];
            index = i;
        }
    }
    printf("%d", index);
    return 0;
}
