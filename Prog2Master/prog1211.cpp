#include <iostream>
#define N 5

typedef enum {
    A,O,B,AB
} Blood_t;

int prog12_11() {
    int bloodrate[] = {40,30,20,10};
    Blood_t blood;
    printf("A..0, O..1, B..2, AB..3\n®”‚ğ“ü—Í");
    scanf_s("%d", &blood);
    switch (blood) {
        case A: {
            printf("AŒ^‚ÌŠ„‡‚Í%d%%‚Å‚·B", bloodrate[A]);
            break;
        }
        case O: {
            printf("OŒ^‚ÌŠ„‡‚Í%d%%‚Å‚·B", bloodrate[O]);
            break;
        }
        case B: {
            printf("BŒ^‚ÌŠ„‡‚Í%d%%‚Å‚·B", bloodrate[B]);
            break;
        }
        case AB: {
            printf("ABŒ^‚ÌŠ„‡‚Í%d%%‚Å‚·B", bloodrate[AB]);
            break;
        }
        default: {
            printf("‚í‚©‚è‚Ü‚¹‚ñ");
            break;
        }
    }
    return 0;
}
