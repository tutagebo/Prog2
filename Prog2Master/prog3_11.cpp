#include <iostream>

int prog3_11() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i!=j&&i + j == 14)printf("%d%d + %d%d = 154\n", i, j, j, i);
        }
    }
    return 0;
}
