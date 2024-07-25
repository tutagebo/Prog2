#include <iostream>
#include <stdlib.h>
#include <string.h>
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

int SearchMolecular(Molecular_t* molecular, char name[]);

int prog13_11() {
    char Filename[FILENAME_MAX];
    FILE* fp;
    Molecular_t molecular[1000];
    char getName[64]= "1";
    int i = 0, index = 0;

    printf("分子DBのファイル名を入力してください。\n");
    gets_s(Filename);

    if ((fp = fopen(Filename, "r")) == NULL) {
        printf("Not found such as File");
        exit(EXIT_FAILURE);
    }

    while (fscanf_s(fp, "%s", &molecular[i].name, _countof(molecular[i].name)) != EOF) {
        fscanf_s(fp, "%d", &molecular[i].C);
        fscanf_s(fp, "%d", &molecular[i].H);
        fscanf_s(fp, "%d", &molecular[i].O);
        fscanf_s(fp, "%d", &molecular[i].N);
        fscanf_s(fp, "%d", &molecular[i].S);
        fscanf_s(fp, "%d", &molecular[i].P);
        i++;
    }
    while (1.0) {
        printf("検索する分子名を入力してください。0を入力すると終了します。\n");
        gets_s(getName);
        if (getName[0] != '0')break;
        index = SearchMolecular(molecular, getName);
        if (index == -1) {
            printf("見つかりませんでした。\n");
        }
        else {
            printf("Name: %s\n", molecular[index].name);
            printf("C: %d\n", molecular[index].C);
            printf("H: %d\n", molecular[index].H);
            printf("O: %d\n", molecular[index].O);
            printf("N: %d\n", molecular[index].N);
            printf("S: %d\n", molecular[index].S);
            printf("P: %d\n", molecular[index].P);
        }
    }

    fclose(fp);
    return 0;
}

int SearchMolecular(Molecular_t *molecular, char name[]) {
    for (int i = 0; i < 1000; i++) {
        if (strcmp(molecular->name, name) == 0) {
            return i;
        }
    }
    return -1;
}
