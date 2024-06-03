#include <iostream>

int prog7_9() {
    int a, b, c, * pa, * pb;
    pa = &a;
    pb = &b;

    *pa = 100, * pb = 200;
    printf("a=%d\nb=%d\n", *pa, *pb);
    c = *pa;
    a = *pb;
    b = c;
    printf("a=%d\nb=%d", *pa, *pb);
    return 0;
}