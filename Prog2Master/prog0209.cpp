#include <iostream>

#define N 10

int prog2_9() {
    int a[N],i,j;
    printf("�ő�10�̃f�[�^����́B���̐����Ƌ����I�����܂��B\n");
    for (i = 0; i < N; i++) {
        scanf_s("%d", &a[i]);
        if (a[i] < 0) break;
    }

    printf("�q�X�g�O������\��\n");
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