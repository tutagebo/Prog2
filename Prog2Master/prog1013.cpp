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
    printf("–¼: %s\n”N—î: %d\ng’·: %f\n‘Ìd: %f\nBMI: %f\n", health.personal.name, health.personal.age, health.body.height, health.body.weight, bmi);
    if (bmi < 18.5) printf("‘‰‚¹");
    else if (18.5 <= bmi && bmi < 25) printf("•’Ê");
    else printf("”ì–");
    return 0;
}
