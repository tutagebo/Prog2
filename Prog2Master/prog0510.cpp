#include <iostream>

int isAlphabet(char c);

int prog5_10() {
    char c = getchar();
    if (isAlphabet(c)) putchar(c);
    else printf("�A���t�@�x�b�g�ł͂���܂���");
    return 0;
}

int isAlphabet(char c) {
    return ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z');
}
