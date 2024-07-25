#include <iostream>
#include <stdlib.h>

#pragma warning(disable:4996)

int prog13_6() {
    double pi = 3.1415, e = 2.7183;
    FILE* fp;

    if ((fp = fopen("outdata.dat", "w")) == NULL) {
        printf("Not found such as indata.dat");
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "%5.2f\n", pi);
    fprintf(fp, "%5.2f\n", e);
    printf("pi=%5.2f\ne=%5.2f", pi, e);
    fclose(fp);
    return 0;
}
