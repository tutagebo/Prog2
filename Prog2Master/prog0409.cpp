#include <iostream>

int prog4_9() {
    bool a = true;
    int b;
    scanf_s("%d", &b);
    while (a) {
        if (b % 2 == 0) b /= 2;
        else b = b * 3 + 1;
        printf("%d\n", b);
        if (b == 1)a = false;
    }
    return 0;
}