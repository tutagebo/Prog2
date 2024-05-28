#include <iostream>
#include <string.h>

int prog6_5() {
    char str1[20] = "";
    char str2[20] = "";
    strcpy_s(str1, "I am ");
    gets_s(str2);
    strcat_s(str1, str2);
    strcat_s(str1, ".");
    puts(str1);
    return 0;
}