#include <iostream>
#include <math.h>

int prog4_2() {
    double x,price=800;
    scanf_s("%lf",&x);
    price += fmin(x,100) * 18;
    if(x > 100) {
        price += fmin(x-100,200)*22;
    }
    if(x > 300) {
        price += (x - 300) * 26;
    }
    printf("—¿‹à‚Í %.0f ‰~‚Å‚·", floor(price));

    return 0;
}
