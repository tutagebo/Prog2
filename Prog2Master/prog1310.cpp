#include <iostream>
#include <stdlib.h>
#define N 4096
#pragma warning(disable:4996)

typedef enum {
    False,
    True
} Boolean_t;

struct SentenceData {
    int LetterCount;
    int WordCount;
};
typedef SentenceData Sentence_t;

Boolean_t IsCharacter(char c);
Sentence_t SentenceCount(char str[]);

int prog13_10() {
    char Filename[FILENAME_MAX];
    FILE* fp;
    char str[N] = "";

    gets_s(Filename);

    if ((fp = fopen(Filename, "r")) == NULL) {
        printf("Not found such as File");
        exit(EXIT_FAILURE);
    }

    fgets(str, N, fp);

    Sentence_t result = SentenceCount(str);
    printf("letter=%d\nwords=%d", result.LetterCount,result.WordCount);

    fclose(fp);
    return 0;
}

Boolean_t IsCharacter(char c) {
    if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || ('0' <= c && c <= '9')) return True;
    return False;
}

Sentence_t SentenceCount(char str[]) {
    char* strp = str;
    Sentence_t res = {0,0};
    for (;*strp!='\0';strp++) {
        res.LetterCount += IsCharacter(*strp);
        res.WordCount += !IsCharacter(*strp);
    }
    return res;
}
