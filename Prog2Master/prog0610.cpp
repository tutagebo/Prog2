#include <iostream>
#include <string.h>

int prog6_10() {
    char str1[256] = "", str2[256] = "";
    int p = 0;
    printf("type a str:");
    gets_s(str1);
    int length = strlen(str1);
    for (int i = length - 1; i >= 0; i--) {
    //'\0'‚ÅI‚í‚Á‚Ä‚µ‚Ü‚¤‚Ì‚Ålength-1‚Å‰Šú‰»‚µ‚Ä‚¢‚é
        str2[p] = str1[i];
        p++;
    }
    strcat_s(str2, "\0");
    puts(str2);
    return 0;
}
