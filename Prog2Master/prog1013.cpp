#include <iostream>

int prog10_13() {
    struct PersonalData {
        char name[20];
        int age;
    };
    struct BodyData {
        double height;
        double weight;
    };
    struct HealthData {
        PersonalData personal;
        BodyData body;
    } health;
    printf("type name >");
    gets_s(health.personal.name);
    printf("age height weight>");
    scanf_s("%d %lf %lf",&health.personal.age,&health.body.height,&health.body.weight);
    double bmi = health.body.weight / (health.body.height * health.body.height);
    printf("����: %s\n�N��: %d\n�g��: %f\n�̏d: %f\nBMI: %f\n", health.personal.name, health.personal.age, health.body.height, health.body.weight, bmi);
    if (bmi < 18.5) printf("����");
    else if (18.5 <= bmi && bmi < 25) printf("����");
    else printf("�얞");
    return 0;
}
