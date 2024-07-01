#include <iostream>
#include <math.h>

struct PointData {
    double x;
    double y;
};

void SetPoint(PointData* data, double x, double y) {
    data->x = x;
    data->y = y;
    return;
}

double Distance(PointData* data1, PointData* data2) {
    double dx = data1->x - data2->x;
    double dy = data1->y - data2->y;
    return sqrt(dx*dx + dy*dy);
}

int prog11_9() {
    PointData a, b;
    SetPoint(&a, 1, 2);
    SetPoint(&b, 2, 3);

    double res = Distance(&a, &b);
    printf("2“_ŠÔ‚Ì‹——£‚Í%8.3lf‚Å‚·", res);
    return 0;
}
