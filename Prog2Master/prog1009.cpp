#include <iostream>

int prog10_9() {
    struct TimeData {
        int hour;
        int min;
        int sec;
    };
    TimeData time;
    int t;
    scanf_s("%d", &t);
    time = { t / 3600,(t % 3600) / 60,t % 60 };
    printf("%d����%d��%d�b", time.hour,time.min,time.sec);
    return 0;
}
