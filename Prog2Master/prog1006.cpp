#include <iostream>

int prog10_6() {
    struct StudentData {
        char dep[60];
        int index;
        char name[30];
    } student;
    strcpy_s(student.dep,"���V�X�e���v���O����");
    student.index = 2321001;
    strcpy_s(student.name, "��c�O��");
    printf("�w��: %s\n�w�Дԍ�: %d\n���O: %s", student.dep, student.index, student.name);
    return 0;
}
