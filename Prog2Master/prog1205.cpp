#include <iostream>
struct DateData {
    int year;
    int month;
    int date;
};

typedef DateData Date_t;

void OutputData(Date_t* data);

int prog12_5() {
    
    Date_t date;
    scanf_s("%d/%d/%d", &date.year, &date.month, &date.date);
    OutputData(&date);
    return 0;
}

void OutputData(Date_t *data) {
    printf("%04d/%02d/%02d", data->year, data->month, data->date);
}
