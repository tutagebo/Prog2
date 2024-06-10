#include <iostream>

int prog8_6() {
    int a[3] = {1,2,3}, * p;
    p = a;
    printf("%p\n%p\n", p, &p);
    printf("a[0]: %d\na[0]Addr: %p", a[0], a);
    //000000FC27FBF638
    //000000FC27FBF668
    //a[0]: 1
    //a[0]Addr : 000000FC27FBF638
    return 0;
}