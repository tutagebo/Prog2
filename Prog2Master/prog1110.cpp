#include <iostream>
#include <math.h>

struct VectorData {
    double x;
    double y;
    double z;
};

void InputVector(VectorData* data, double x, double y, double z) {
    data->x = x;
    data->y = y;
    data->z = z;
    return;
}

void OutputVector(VectorData* data) {
    printf("x: %lf\ny: %lf\nz: %lf\n", data->x, data->y, data->z);
    return;
}

VectorData AddVector(VectorData* data1, VectorData* data2) {
    double dx = data1->x + data2->x;
    double dy = data1->y + data2->y;
    double dz = data1->z + data2->z;
    return { dx,dy,dz };
}

int prog11_10() {
    VectorData a, b, c;
    scanf_s("%lf %lf %lf", &a.x, &a.y, &a.z);
    scanf_s("%lf %lf %lf", &b.x, &b.y, &b.z);

    c = AddVector(&a, &b);
    OutputVector(&a);
    OutputVector(&b);
    OutputVector(&c);
    return 0;
}
