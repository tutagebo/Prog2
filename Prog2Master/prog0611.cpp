#include <iostream>
#include <string.h>

int prog6_11() {
    char mRNA[] = "AUGCGUAAGUCGUGAUUUGCUUCAUCGAAGCUUUAA";
    char mem[4] = "";
    int result;

    for (int i = 0; i < 3; i++) {
        mem[i] = mRNA[i];
    }
    mem[3] = '\0';
    result = strcmp(mem, "AUG");

    if (result == 0) {
        printf("�������f�[�^�ł�");
    }
    else {
        printf("�������f�[�^�ł͂���܂���");
    }
    return 0;
}
