#include <iostream>
#define N 5

struct StudentData {
    char prog[256];
    int num;
    char name[256];
};

typedef StudentData Student_t;

int prog12_6() {
    Student_t student[N] = {
        {"情報システム",2321001,"AIDA"},
        {"情報システム",2321002,"AKAISH"},
        {"生物応用",2321003,"KADOMURA"},
        {"生物応用",2321004,"KAMEDA"},
        {"生物応用",2321005,"KOBAYASHI"}
    }, *pstudent;
    pstudent = student;
    for (int i = 0; i < N; i++) {
        Student_t stu = *(pstudent + i);
        if (strcmp(stu.prog, "情報システム") == 0) {
            printf("%s %d %s\n", stu.prog, stu.num, stu.name);
        }
    }
    return 0;
}
