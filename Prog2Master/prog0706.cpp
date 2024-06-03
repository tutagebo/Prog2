#include <iostream>

int prog7_6() {
    int a = 100, *p;
    p = &a;
    printf("a addr=%p\np=%p\n", &a, p);

    //a addr = 000000D400EFF904
    //p = 000000D400EFF904
    return 0;
}