#include <iostream>

int prog8() {
    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        printf("�X���[�y�A�ł�");
    }
    else if (a == b || b == c) {
        printf("�c�[�y�A�ł�");
    }
    else {
        printf("�S�Ă̒l���قȂ�܂�");
    }
    return 0;
}