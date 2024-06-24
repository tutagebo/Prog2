#include <iostream>
#define N 10

int prog10_12() {
    struct Data {
        double dataArray[N];
        double sum;
        double ave;
    };
    Data data = { {1,2,3,4,5,6,7,8,9,10},0,0 };
    for (double e : data.dataArray) {
        data.sum += e;
    }
    data.ave = data.sum / N;
    printf("sum: %lf\nave: %lf\narray: { ", data.sum, data.ave);
    for (double e : data.dataArray) {
        printf("%lf ",e);
    }
    printf("}");
    return 0;
}
