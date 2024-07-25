#include <iostream>
#include <stdlib.h>
#pragma warning(disable:4996)

struct MolecularData {
    char name[32];
    int C;
    int H;
    int O;
    int N;
    int S;
    int P;
};
typedef MolecularData Molecular_t;

int prog13_12() {
    char Filename[FILENAME_MAX];
    FILE* fp;
    
    const char eleData[] = "CHONSP";

    printf("分子DBのファイル名を入力してください。\n");
    gets_s(Filename);

    if ((fp = fopen(Filename, "a")) == NULL) {
        printf("Not found such as File");
        exit(EXIT_FAILURE);
    }

    for (;;) {
        Molecular_t molecular = {};
        printf("DBに登録する情報を入力してください。分子名に0を入力すると終了します。\nName: ");
        scanf_s("%s", &molecular.name, (unsigned int)_countof(molecular.name));
        if (molecular.name[0] == '0')break;
        fprintf(fp, "%s ", molecular.name);

        printf("C: ");
        scanf_s("%d", &molecular.C);
        fprintf(fp, "%d ", molecular.C);

        printf("H: ");
        scanf_s("%d", &molecular.H);
        fprintf(fp, "%d ", molecular.H);

        printf("O: ");
        scanf_s("%d", &molecular.O);
        fprintf(fp, "%d ", molecular.O);

        printf("N: ");
        scanf_s("%d", &molecular.N);
        fprintf(fp, "%d ", molecular.N);

        printf("S: ");
        scanf_s("%d", &molecular.S);
        fprintf(fp, "%d ", molecular.S);

        printf("P: ");
        scanf_s("%d", &molecular.P);
        fprintf(fp, "%d\n", molecular.P);
    }

    fclose(fp);
    return 0;
}
