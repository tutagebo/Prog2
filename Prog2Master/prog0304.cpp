#include <iostream>

int prog3_4() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i; j++)printf("*");
        printf("\n");
    }
    return 0;
}