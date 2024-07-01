#include <iostream>
#define N 3

int prog11_6() {
    struct StudentData {
        char prog[256];
        char name[256];
        int number;
    };

    StudentData student[N] = {
        {"情報システム","Aida",2321001},
        {"情報システム","Akaishi",2321002},
        {"情報システム","Kawada",2321003},
    };

    for (StudentData e : student) {
        printf("名前: %s 学籍番号: %d プログラム: %sプログラム\n", e.name, e.number, e.prog);
    }
    
    return 0;
}
