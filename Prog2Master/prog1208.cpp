#include <iostream>
#define N 5

struct StudentData {
    int num;
    char name[256];
    int point;
    char grade;
};

typedef StudentData Student_t;

int prog12_8() {
    Student_t student[N] = {
        {2321001,"AIDA",0,'D'},
        {2321002,"AKAISHI",0,'D'},
        {2321003,"KATOU",0,'D'},
        {2321004,"KAWAHARA",0,'D'},
        {2321005,"OHSAWA",0,'D'},
    };
    printf("Œ±‚Ì“¾“_‚ğ“ü—Í\n");
    for (int i = 0; i < N;) {
        printf("%d %s:", student[i].num, student[i].name);
        scanf_s("%d", &student[i].point);
        if (0 > student[i].point || student[i].point > 100) {
            printf("•s³‚È“ü—Í‚Å‚·\n");
            continue;
        }if (student[i].point < 60) {
            student[i].grade = 'D';
        }else if (student[i].point < 70) {
            student[i].grade = 'C';
        }else if (student[i].point < 80) {
            student[i].grade = 'B';
        }else if (student[i].point < 90) {
            student[i].grade = 'A';
        }else {
            student[i].grade = 'S';
        }
        i++;
    }
    printf("•]‰¿Œ‹‰Ê‚ÍŸ‚Ì’Ê‚è‚Å‚·\n");
    for (Student_t e : student) {
        printf("%d %s: %d %c\n", e.num, e.name, e.point, e.grade);
    }
    return 0;
}
