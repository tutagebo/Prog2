#include <iostream>
#include <stdlib.h>
#include <string.h>
#define N 48
#pragma warning(disable:4996)

struct ExamData {
    char num[9];
    int a;
    int b;
    int c;
    double ave;
};

typedef ExamData Exam_t;

void SetAverage(Exam_t* data);
void PutExamData(Exam_t dataAry[]);
void SortByAverage(Exam_t dataAry[]);
Exam_t GetMaxExamData(Exam_t dataAry[]);
int SearchExamData(char num[], Exam_t dataAry[], int len);

int prog14_2() {
    Exam_t exam[N], higher;
    char fileName[FILENAME_MAX];
    FILE* fp;
    int count = 0;


    printf("データファイルの名前を入力してください。\n");
    gets_s(fileName);

    if ((fp = fopen(fileName, "r")) == NULL) {
        printf("Not found such as File");
        exit(EXIT_FAILURE);
    }

    while (fscanf_s(fp, "%s", &exam[count].num,(unsigned int)_countof(exam[count].num)) != EOF) {
        fscanf_s(fp, "%d", &exam[count].a);
        fscanf_s(fp, "%d", &exam[count].b);
        fscanf_s(fp, "%d", &exam[count].c);
        SetAverage(&exam[count]);
        count++;
    }
    SortByAverage(exam);
    printf("全員のデータ\n");
    PutExamData(exam);
    higher = GetMaxExamData(exam);
    printf("最も高い平均点の受験者は %s で平均点は %4.1f 点です。\n", higher.num, higher.ave);
    char ser[9] = "";
    while (1.0) {
        printf("試験管結果を照会したい受験番号を入力してください。0で終了します。\n");
        gets_s(ser);
        if (ser[0] == '0') break;
        int index = SearchExamData(ser, exam, N);
        if (index == -1) {
            printf("その受験番号は受験しておりません。\n");
            continue;
        }
        printf("該当する受験番号の成績は次の通りである。");
        printf("受験番号: %s 科目A: %d点 科目B: %d点 科目C: %d点 平均: %4.1f点\n", exam[index].num, exam[index].a, exam[index].b, exam[index].c, exam[index].ave);
    }
    fclose(fp);
    return 0;
}

void SetAverage(Exam_t *data) {
    data->ave = data->a + data->b + data->c;
    data->ave /= 3;
    return;
}
void PutExamData(Exam_t dataAry[]) {
    printf("%8s %5s %5s %5s %6s\n","受験番号", "科目A", "科目B", "科目C", "平均点");
    for (int i = 0; i < N; i++)
        printf("%8s %5d %5d %5d %4.1f\n", dataAry[i].num, dataAry[i].a, dataAry[i].b, dataAry[i].c, dataAry[i].ave );
    return;
}


void SortByAverage(Exam_t dataAry[]) {  //バブルソート
    Exam_t tmp;
    for (int i = 0; i < N; i++) {
        for (int j = N-1; j > i; j--) {
            if (dataAry[j].ave > dataAry[j - 1].ave) {
                tmp = dataAry[j];
                dataAry[j] = dataAry[j - 1];
                dataAry[j - 1] = tmp;
            }
        }
    }
    return;
}


Exam_t GetMaxExamData(Exam_t dataAry[]) {
    Exam_t max = dataAry[0];
    for (int i = 0; i < N; i++) {
        if (max.ave < dataAry[i].ave)
            max = dataAry[i];
    }
    return max;
}

int SearchExamData(char num[], Exam_t dataAry[], int len) {
    int res = -1;
    for (int i = 0; i < len; i++) {
        if (strcmp(num, dataAry[i].num)==0) {
            res = i;
        }
    }
    return res;
}
