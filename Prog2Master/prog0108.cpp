#include <iostream>

int prog8() {
    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        printf("スリーペアです");
    }
    else if (a == b || b == c) {
        printf("ツーペアです");
    }
    else {
        printf("全ての値が異なります");
    }
    return 0;
}