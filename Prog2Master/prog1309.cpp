#include <iostream>
#include <stdlib.h>
#define N 5
#pragma warning(disable:4996)

int prog13_9() {
    char Filename[FILENAME_MAX];
    struct CensusData {
        char name[16];
        int amount;
    };
    typedef CensusData CensusData_t;
    CensusData_t sensus[N] = {};
    FILE* fp;

    gets_s(Filename);

    if ((fp = fopen(Filename, "r")) == NULL) {
        printf("Not found such as File");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 5;i++) {
        fscanf_s(fp, "%s", &sensus[i].name, (unsigned int)_countof(sensus[i].name));
        fscanf_s(fp, "%d", &sensus[i].amount);
    }

    for (CensusData_t e : sensus) {
        printf("%s: %d\n", e.name, e.amount);
    }

    fclose(fp);
    return 0;
}
