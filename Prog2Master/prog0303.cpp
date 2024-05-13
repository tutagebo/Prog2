#include <iostream>

int prog3_3() {
    int x;
    scanf_s("%d", &x);
    switch (x) {
        case 1: {
            printf("苺");
            break;
        }
        case 2: {
            printf("人参");
            break;
        }
        case 3: {
            printf("サンダル");
            break;
        }
        case 4: {
            printf("ヨット");
            break;
        }
        case 5: {
            printf("ごま塩");
            break;
        }
        default: {
            printf("わかりません");

        }
    }
    return 0;
}