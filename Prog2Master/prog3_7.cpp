#include <iostream>

int prog3_7() {
    int b[3][3] = {
        {62,78,93},
        {75,68,83},
        {66,81,71}
    };
    double r[3] = { 0,0,0 };
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            if (j == 3) {
                printf("|");
            }
            else if (j == 4) {
                double ave = (double)sum / 3;
                printf("%6.2f", ave);
            }
            else {
                r[i] += b[j][i];
                printf("    %d ", b[i][j]);
                sum += b[i][j];
            }
        }
        printf("\n");
    }
    printf("------------------------------\n");
    for (double a : r) {
        printf(" %6.2f", a/3);
    }
    printf("|");
    return 0;
}
