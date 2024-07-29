#include <iostream>

#pragma warning(disable:4996)

int prog14_1() {
    int bin[16] = { 0 };
    int hex[4] = { 0 };
    char pri[17] = "0123456789ABCDEF";
    int xin = 0, x;
    printf("10進数を2進数と16進数に変換します。\n");
    do {
        printf("0~65535の数を入力してください。\n");
        scanf_s("%d", &xin);
    } while (0 > xin && xin < 65535);
    x = xin;
    for (int i = 0; i < 16; i++) {
        bin[i] = x % 2;
        x /= 2;
    }
    printf("計算結果は以下の通りです。\n");
    for (int i = 15; i > -1; i--) {
        printf("%d", bin[i]);
    }
    printf("\n");
    x = xin;
    for (int i = 0; i < 4; i++) {
        hex[i] = x % 16;
        x /= 16;
    }
    for (int i = 3; i > -1; i--) {
        switch (hex[i]) {
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                printf("%c", pri[hex[i]]);
                break;
            default:
                printf("%d", hex[i]);
        }
    }
    return 0;
}