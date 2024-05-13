#include <iostream>

int prog4_14() {
    int a[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int b[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            b[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < 4;i++) {
        for (int x : b[i])printf("%2d ", x);
        printf("\n");
    }
    return 0;
}