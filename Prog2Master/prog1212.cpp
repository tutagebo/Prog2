#include <iostream>
#define N 5

typedef enum {
    Sun, Mon, Tue, Wed, Thu, Fri, Sat
} Week_t;

typedef struct {
    int time;
    char Subject[51];
} RequiredSubjects_t;

int prog12_12() {
    RequiredSubjects_t requiredsubjects[] = {
        { 0, "�Ȃ�"},
        { 3, "�v���O���~���O����E���K�U"},
        { 4, "�v�Z�@�\��"},
        { 0, "�Ȃ�"},
        { 3, "���v�w���K"},
        { 0, "�Ȃ�"},
        { 0, "�Ȃ�"},
    };
    Week_t week;
    printf("�K�C�Ȗڂ𒲂ׂ܂��B�j���̔ԍ������\nSun..0, Mon..1, Tue..2, Wed..3, Thu..4, Fri..5, Sat..6\n");
    scanf_s("%d", &week);
    switch (week) {
        case Sun: {
            printf("���j���̕K�C�Ȗڂ�%d����%s\n", requiredsubjects[Sun].time, requiredsubjects[Sun].Subject);
            break;
        }
        case Mon: {
            printf("���j���̕K�C�Ȗڂ�%d����%s\n", requiredsubjects[Mon].time, requiredsubjects[Mon].Subject);
            break;
        }
        case Tue: {
            printf("�Ηj���̕K�C�Ȗڂ�%d����%s\n", requiredsubjects[Tue].time, requiredsubjects[Tue].Subject);
            break;
        }
        case Wed: {
            printf("���j���̕K�C�Ȗڂ�%d����%s\n", requiredsubjects[Wed].time, requiredsubjects[Wed].Subject);
            break;
        }
        case Thu: {
            printf("�ؗj���̕K�C�Ȗڂ�%d����%s\n", requiredsubjects[Thu].time, requiredsubjects[Thu].Subject);
            break;
        }
        case Fri: {
            printf("���j���̕K�C�Ȗڂ�%d����%s\n", requiredsubjects[Fri].time, requiredsubjects[Fri].Subject);
            break;
        }
        case Sat: {
            printf("�y�j���̕K�C�Ȗڂ�%d����%s\n", requiredsubjects[Sun].time, requiredsubjects[Sun].Subject);
            break;
        }

    }
    return 0;
}
