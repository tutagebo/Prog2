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
        { 0, "‚È‚µ"},
        { 3, "ƒvƒƒOƒ‰ƒ~ƒ“ƒOŒ¾ŒêE‰‰K‡U"},
        { 4, "ŒvZ‹@\¬"},
        { 0, "‚È‚µ"},
        { 3, "“ŒvŠw‰‰K"},
        { 0, "‚È‚µ"},
        { 0, "‚È‚µ"},
    };
    Week_t week;
    printf("•KC‰È–Ú‚ğ’²‚×‚Ü‚·B—j“ú‚Ì”Ô†‚ğ“ü—Í\nSun..0, Mon..1, Tue..2, Wed..3, Thu..4, Fri..5, Sat..6\n");
    scanf_s("%d", &week);
    switch (week) {
        case Sun: {
            printf("“ú—j“ú‚Ì•KC‰È–Ú‚Í%dŒÀ‚Å%s\n", requiredsubjects[Sun].time, requiredsubjects[Sun].Subject);
            break;
        }
        case Mon: {
            printf("Œ—j“ú‚Ì•KC‰È–Ú‚Í%dŒÀ‚Å%s\n", requiredsubjects[Mon].time, requiredsubjects[Mon].Subject);
            break;
        }
        case Tue: {
            printf("‰Î—j“ú‚Ì•KC‰È–Ú‚Í%dŒÀ‚Å%s\n", requiredsubjects[Tue].time, requiredsubjects[Tue].Subject);
            break;
        }
        case Wed: {
            printf("…—j“ú‚Ì•KC‰È–Ú‚Í%dŒÀ‚Å%s\n", requiredsubjects[Wed].time, requiredsubjects[Wed].Subject);
            break;
        }
        case Thu: {
            printf("–Ø—j“ú‚Ì•KC‰È–Ú‚Í%dŒÀ‚Å%s\n", requiredsubjects[Thu].time, requiredsubjects[Thu].Subject);
            break;
        }
        case Fri: {
            printf("‹à—j“ú‚Ì•KC‰È–Ú‚Í%dŒÀ‚Å%s\n", requiredsubjects[Fri].time, requiredsubjects[Fri].Subject);
            break;
        }
        case Sat: {
            printf("“y—j“ú‚Ì•KC‰È–Ú‚Í%dŒÀ‚Å%s\n", requiredsubjects[Sun].time, requiredsubjects[Sun].Subject);
            break;
        }

    }
    return 0;
}
