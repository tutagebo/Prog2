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
        {"���V�X�e��",2321001,"AIDA"},
        {"���V�X�e��",2321002,"AKAISH"},
        {"�������p",2321003,"KADOMURA"},
        {"�������p",2321004,"KAMEDA"},
        {"�������p",2321005,"KOBAYASHI"}
    }, *pstudent;
    pstudent = student;
    for (int i = 0; i < N; i++) {
        Student_t stu = *(pstudent + i);
        if (strcmp(stu.prog, "���V�X�e��") == 0) {
            printf("%s %d %s\n", stu.prog, stu.num, stu.name);
        }
    }
    return 0;
}
