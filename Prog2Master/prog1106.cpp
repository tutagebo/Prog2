#include <iostream>
#define N 3

int prog11_6() {
    struct StudentData {
        char prog[256];
        char name[256];
        int number;
    };

    StudentData student[N] = {
        {"���V�X�e��","Aida",2321001},
        {"���V�X�e��","Akaishi",2321002},
        {"���V�X�e��","Kawada",2321003},
    };

    for (StudentData e : student) {
        printf("���O: %s �w�Дԍ�: %d �v���O����: %s�v���O����\n", e.name, e.number, e.prog);
    }
    
    return 0;
}
