#include <iostream>
#include <stdlib.h>

#pragma warning(disable:4996)

int prog13_7() {
    double c=0, num, sum=0;
    char Filename[FILENAME_MAX];
    FILE* fp;

    gets_s(Filename);

    if ((fp = fopen(Filename, "r")) == NULL) {
        printf("Not found such as File");
        exit(EXIT_FAILURE);
    }

    while (fscanf_s(fp,"%lf",&num)!=EOF){
        sum += num;
        c++;
    }
    if (c==0) {
        printf("Not a data");
        fclose(fp);
        return 0;
    }
    sum /= 10;
    printf("sum=%6.3f\n", sum);
    fclose(fp);
    return 0;
}
