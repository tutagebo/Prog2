#include <iostream>
#define N 5

int prog11_7() {
    struct StudentData {
        char prog[256];
        char name[256];
        int number;
    };
    StudentData *pstudent, student[N] = {
        {"���V�X�e��","Aida",2321001},
        {"���V�X�e��","Akaishi",2321002},
        {"���V�X�e��","Kawada",2321003},
        {"���V�X�e��","Toriba",2321004},
        {"���V�X�e��","Watanabe",2321005},
    };
    pstudent = student;

    for (int i = 0; i < 5;i++) {
        printf("���O: %10s �w�Дԍ�: %d �v���O����:%s\n", (pstudent+i)->name, (pstudent + i)->number, (pstudent + i)->prog);
    }

    return 0;
}
