#include <iostream>

int prog4_3() {
    int m;
    
    scanf_s("%d",&m);
    switch (m) {
        case 3:
        case 4:
        case 5:
            printf("t");
            break;
        case 6:
        case 7:
        case 8:
            printf("‰Ä");
            break;
        case 9:
        case 10:
        case 11:
            printf("H");
            break;
        case 12:
        case 1:
        case 2:
            printf("“~");
            break;
        default:
            printf("%d Œ‚Í‘¶İ‚µ‚Ü‚¹‚ñ",m);
            break;
    }
    return 0;
}
