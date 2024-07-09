#include <iostream>
#define N 5

typedef enum{
    False,
    True
} Boolean_t;

Boolean_t IsAlpha(char c);

int prog12_10() {
    char str[] = "Abhlsbl^^vi0^[]k@";
    char* p = str;
    while (True){
        if (IsAlpha(*p) == 0)break;
        printf("%c", *p);
        p++;
    }
    return 0;
}

Boolean_t IsAlpha(char c) {
    if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z')return True;
    return False;
}
