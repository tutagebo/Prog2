#include <iostream>

int prog3_2() {
    double h, w;
    printf("high weight: ");
    scanf_s("%lf %lf", &h, &w);
    h = h / 100;
    double bmi = w / (h * h);
    if (bmi < 18.5) {
        printf("������BMI��%f", bmi);
    }
    else if(bmi<25){
        printf("���ʂ�BMI��%f", bmi);
    }
    else {
        printf("�얞��BMI��%f", bmi);
    }
    return 0;
}
