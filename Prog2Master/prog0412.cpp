#include <iostream>

int prog4_12() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if ((2 < i && i < 7) && (2 < j && j < 7))printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}