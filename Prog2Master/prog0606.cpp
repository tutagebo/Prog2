#include <iostream>
#include <string.h>

int prog6_6() {
    char str[256] = "";
    gets_s(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z')printf("%c", str[i]);
    }
    return 0;
}