#include <iostream>

int prog3_2() {
    double h, w;
    printf("high weight: ");
    scanf_s("%lf %lf", &h, &w);
    h = h / 100;
    double bmi = w / (h * h);
    if (bmi < 18.5) {
        printf("‘‰‚¹‚ÅBMI‚Í%f", bmi);
    }
    else if(bmi<25){
        printf("•’Ê‚ÅBMI‚Í%f", bmi);
    }
    else {
        printf("”ì–ž‚ÅBMI‚Í%f", bmi);
    }
    return 0;
}
