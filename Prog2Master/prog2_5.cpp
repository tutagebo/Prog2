#include <iostream>

int getSum(int n);

int prog2_5() {
    int x;
    scanf_s("%d", &x);
    if (x < 1)return printf("•s³‚È“ü—Í‚Å‚·B");
    printf("1‚©‚ç%d‚Ü‚Å˜a‚Í %d\n", x, getSum(x));
    return 0;
}

int getSum(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}