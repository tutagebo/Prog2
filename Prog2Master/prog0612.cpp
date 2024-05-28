#include <iostream>
#include <string.h>

int prog6_12() {
    char mRNA[] = "AUGCGUAAGUCGUGAUUUGCUUCAUCGAAGCUUUAA";
    int result;

    for (int i = 1; mRNA[i]!='\0'; i++) {
    //0‚Å-‚ð“ü‚ê‚È‚¢‚æ‚¤‚É1‚©‚çŠJŽn‚µ‚Ä‚¢‚é
        if (i % 3 == 0)printf("-");
        printf("%c", mRNA[i]);
    }
    return 0;
}
