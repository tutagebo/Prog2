#include <iostream>
#define N 5

struct ExamData {
    int num; //学籍番号
    int en;
    int ma;
    int py;
    int ch;
    int bi;
    double ave;
};

void InitExam(ExamData *data, int num, int en, int ma, int py, int ch, int bi) {
    double ave = (double)(en + ma + py + ch + bi) / 5;
    *data = { num,en,ma,py,ch,bi,ave };
    return;
}

int prog11_11() {

    ExamData exam[N];
    for (int i = 0; i < N; i++) {
        int num, en, ma, py, ch, bi;
        printf("%d人目の学籍番号:", i + 1);
        scanf_s("%d", &num);
        printf("%d人目を入力してください:", i + 1);
        scanf_s("%d %d %d %d %d", &en, &ma, &py, &ch, &bi);
        InitExam(&exam[i], num, en, ma, py, ch, bi);
    }
    
    //ココカラprog1112
    for (int i = 0; i < N; i++) {
        for (int j = N - 1; j > i; j--) {
            if (exam[j].ave > exam[j - 1].ave) {
                ExamData temp = exam[j];
                exam[j] = exam[j - 1];
                exam[j - 1] = temp;
            }
        }
    }

    for (ExamData e : exam) {
        printf("学籍番号: %d, 平均: %lf\n", e.num, e.ave);
    }

    return 0;
}


    /*
    prog1111
    double maxPoint = 0;
    int maxNum = 0;
    for (ExamData e : exam) {
        if (maxPoint < e.ave) {
            maxNum = e.num;
            maxPoint = e.ave;
        }
    }
    printf("最高平均は%lfで%dの人です", maxPoint, maxNum);
    
    return 0;
}
*/