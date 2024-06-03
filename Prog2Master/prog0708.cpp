#include <iostream>

int prog7_8() {
    int a, b, c, *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &c;

    *pa = 100, * pb = 200;
    *pc = *pa + *pb;

    printf("c=%d\n", *pc);
    return 0;
}