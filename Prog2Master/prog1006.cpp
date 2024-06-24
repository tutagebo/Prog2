#include <iostream>

int prog10_6() {
    struct StudentData {
        char dep[60];
        int index;
        char name[30];
    } student;
    strcpy_s(student.dep,"情報システムプログラム");
    student.index = 2321001;
    strcpy_s(student.name, "會田弘大");
    printf("学科: %s\n学籍番号: %d\n名前: %s", student.dep, student.index, student.name);
    return 0;
}
