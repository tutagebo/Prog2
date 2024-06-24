#include <iostream>

int prog10_10() {
    struct VectorData {
        double x;
        double y;
        double z;
    } a = { 3.2,5.6,2.4 }, b = { 1.8,6.1,2.5 }, c;
    c = { a.x + b.x,a.y + b.y,a.z + b.z };
    printf("x: %lf\ny: %lf\nz: %lf", c.x, c.y, c.z);
    return 0;
}
