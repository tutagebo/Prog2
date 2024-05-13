#include <iostream>

#define N 10

int prog2_9() {
    int a[N],i,j;
    printf("最大10個のデータを入力。負の数だと強制終了します。\n");
    for (i = 0; i < N; i++) {
        scanf_s("%d", &a[i]);
        if (a[i] < 0) break;
    }

    printf("ヒストグラムを表示\n");
    for (i = 0; i < N; i++) {
        if (a[i] < 0) break;
        for (j = 1; j <= a[i]; j++) {
            printf("*");
            if (j % 5 == 0)printf(" ");
        }
        printf("\n");
    }

    return 0;
}