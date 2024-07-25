#include <iostream>
#include <stdlib.h>

#pragma warning(disable:4996)

int prog13_5() {
    int a, b;
    FILE* fp;

    if ((fp = fopen("indata.dat", "r")) == NULL) {
        printf("Not found such as indata.dat");
        exit(EXIT_FAILURE);
    }

    fscanf_s(fp, "%d", &a);
    fscanf_s(fp, "%d", &b);
    printf("a=%d\nb=%d", a, b);
    fclose(fp);
    return 0;
}
