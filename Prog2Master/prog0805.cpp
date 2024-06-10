#include <iostream>

int prog8_5() {
    int a, * p;
    p = &a;
    for (int i = 0; i < 3; i++) {
        printf("%p\n", (p + i));
    }
    //0000002C9BD6FAB4
    //0000002C9BD6FAB8
    //0000002C9BD6FABC
    return 0;
}