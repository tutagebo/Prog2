#include <iostream>

int isDigit(char c);

int prog5_9() {
    char c = getchar();
    if (isDigit(c))putchar(c);
    else printf("”š‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
    return 0;
}

int isDigit(char c) {
    return '0' <= c && c <= '9';
}
