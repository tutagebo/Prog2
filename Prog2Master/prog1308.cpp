#include <iostream>
#include <stdlib.h>
#define N 5
#pragma warning(disable:4996)

int prog13_8() {
    double num, a[N];
    int c = 0;
    char Filename[FILENAME_MAX];
    FILE* fp;

    gets_s(Filename);

    if ((fp = fopen(Filename, "r")) == NULL) {
        printf("Not found such as File");
        exit(EXIT_FAILURE);
    }

    while (fscanf_s(fp, "%lf", &num) != EOF) {
        if (c >= N)break;
        a[c] = num;
        c++;
    }
    if (c == 0) {
        printf("Not a data");
        fclose(fp);
        return 0;
    }
    for (double e : a) {
        printf("%f\n", e);
    }
    fclose(fp);
    return 0;
}
