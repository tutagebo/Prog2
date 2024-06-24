#include <iostream>

int prog10_7() {
    struct DateData {
        int year;
        int month;
        int date;
    } date;
    scanf_s("%d/%d/%d", &date.year, &date.month, &date.date);
    printf("%d”N%dŒ%d“ú",date.year, date.month, date.date);
    return 0;
}
