#include <iostream>
#include <string.h>

int prog6_8() {
    char str[256];
    int count=0;
    gets_s(str);
    int length = strlen(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a')count++;
    }
    double result = (double)count / (double)length*100;
    printf("result: %5.1f%%", result);
    return 0;
}
