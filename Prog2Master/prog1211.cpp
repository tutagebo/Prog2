#include <iostream>
#define N 5

typedef enum {
    A,O,B,AB
} Blood_t;

int prog12_11() {
    int bloodrate[] = {40,30,20,10};
    Blood_t blood;
    printf("A..0, O..1, B..2, AB..3\n���������");
    scanf_s("%d", &blood);
    switch (blood) {
        case A: {
            printf("A�^�̊�����%d%%�ł��B", bloodrate[A]);
            break;
        }
        case O: {
            printf("O�^�̊�����%d%%�ł��B", bloodrate[O]);
            break;
        }
        case B: {
            printf("B�^�̊�����%d%%�ł��B", bloodrate[B]);
            break;
        }
        case AB: {
            printf("AB�^�̊�����%d%%�ł��B", bloodrate[AB]);
            break;
        }
        default: {
            printf("�킩��܂���");
            break;
        }
    }
    return 0;
}
