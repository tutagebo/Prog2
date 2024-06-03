#include <iostream>

int prog7_5() {
    int i = 1;
    char c = 'A';
    double d = 10.0;
    printf("i=%p\nc=%p\nd=%p\n", i, c, d);

    //i = 0000000000000001
    //c = 0000000000000041
    //d = 4024000000000000
    return 0;
}