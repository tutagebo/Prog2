#include <iostream>

int getSum(int n);

int prog2_5() {
    int x;
    scanf_s("%d", &x);
    if (x < 1)return printf("�s���ȓ��͂ł��B");
    printf("1����%d�܂Řa�� %d\n", x, getSum(x));
    return 0;
}

int getSum(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}