#include <iostream>

int prog7_7() {
    int a = 100, b, *pa;
    pa = &a;
    b = *pa;
    printf("b=%d\n", b);

    //a addr = 000000D400EFF904
    //p = 000000D400EFF904
    return 0;
}