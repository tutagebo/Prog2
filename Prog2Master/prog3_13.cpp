#include <iostream>

int prog3_13() {
    int year;
    scanf_s("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("�[�N�ł�");
    }
    else {
        printf("���N�ł�");
    }
    return 0;
}
