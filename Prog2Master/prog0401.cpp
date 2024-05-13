#include <iostream>

int prog4_1() {
    int t,h,m,s;
    scanf_s("%d", &t);
    h = t/3600;
    m = (t % 3600)/60;
    s = t % 60;
    printf("%2dŽžŠÔ%2d•ª%2d•b", h, m, s);
    return 0;
}