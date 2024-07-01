#include <iostream>
struct TimeData {
    int day;
    int hour;
    int min;
    int sec;
};

int ConfirmTime(TimeData* time) {
    return (-1 < time->day && -1 < time->hour && time->hour < 24 && -1 < time->min && time->min < 60 && -1 < time->sec && time->sec < 60);
}

int ToSecond(TimeData* time) {
    int tmp = time->day;
    tmp *= 24;
    tmp += time->hour;
    tmp *= 60;
    tmp += time->min;
    tmp *= 60;
    tmp += time->sec;
    return tmp;
}

int prog11_8() {
    
    TimeData time;
    printf("type time (format: d/h/m/s)>");
    scanf_s("%d/%d/%d/%d",&time.day,&time.hour,&time.min,&time.sec);
    if (ConfirmTime(&time)) {
        printf("%d•b‚Å‚·\n", ToSecond(&time));
    }
    else {
        printf("•s³‚È“ü—Í‚Å‚·\n");
    }
    return 0;
}
