#include <iostream>
#include <string.h>

int prog6_9() {
    char str1[256]="", str2[256] = "";
    int p = 0;//str2��index�̃J�E���g
    printf("type a str:");
    gets_s(str1);
    for (int i = 0; str1[i] != '\0';i++) {
        if (str1[i] == ' ')continue;
        //�󔒂�������str2�Ɋi�[���Ȃ�
        str2[p] = str1[i];
        p++;
    }
    strcat_s(str2, "\0");
    puts(str2);
    return 0;
}
