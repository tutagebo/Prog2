#include <iostream>
#define N 5

int prog11_7() {
    struct StudentData {
        char prog[256];
        char name[256];
        int number;
    };
    StudentData *pstudent, student[N] = {
        {"情報システム","Aida",2321001},
        {"情報システム","Akaishi",2321002},
        {"情報システム","Kawada",2321003},
        {"情報システム","Toriba",2321004},
        {"情報システム","Watanabe",2321005},
    };
    pstudent = student;

    for (int i = 0; i < 5;i++) {
        printf("名前: %10s 学籍番号: %d プログラム:%s\n", (pstudent+i)->name, (pstudent + i)->number, (pstudent + i)->prog);
    }

    return 0;
}
