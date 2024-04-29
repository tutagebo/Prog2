#include <iostream>

int get2ndPower(int num);
int get4thPower(int num);

int prog2_7() {
    int x;
    scanf_s("%d", &x);
    printf("4æ‚Í: %d\n", get4thPower(x));
    return 0;
}

int get2ndPower(int n) {
    return n * n;
}
int get4thPower(int n) {
    return get2ndPower(n) * get2ndPower(n);
}