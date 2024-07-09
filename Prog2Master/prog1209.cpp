#include <iostream>
#include <math.h>

struct ComplexData{
    double a;
    double b;
};

typedef ComplexData Complex_t;

void SetComplex(Complex_t* x, double a, double b);
double AbsComplex(Complex_t* x);
Complex_t AddComplex(Complex_t* x, Complex_t* y);
Complex_t SubComplex(Complex_t* x, Complex_t* y);
Complex_t MulComplex(Complex_t* x, Complex_t* y);
Complex_t DivComplex(Complex_t* x, Complex_t* y);
void PrintComplex(Complex_t* x);

int prog12_9() {
    Complex_t x, y,tmp;
    double m, n;
    printf("•¡‘f”x=a+bi‚ð“ü—Í\n");
    printf("a:");
    scanf_s("%lf", &m);
    printf("b:");
    scanf_s("%lf", &n);
    SetComplex(&x, m, n);
    printf("•¡‘f”y=a+bi‚ð“ü—Í\n");
    printf("a:");
    scanf_s("%lf", &m);
    printf("b:");
    scanf_s("%lf", &n);
    SetComplex(&y, m, n);
    printf("•¡‘f”x‚Ìâ‘Î’l = %lf\n", AbsComplex(&x));
    printf("•¡‘f”y‚Ìâ‘Î’l = %lf\n", AbsComplex(&y));
    printf("x + y =");
    tmp = AddComplex(&x, &y);
    PrintComplex(&tmp);
    printf("x - y =");
    tmp = SubComplex(&x, &y);
    PrintComplex(&tmp);
    printf("x * y =");
    tmp = MulComplex(&x, &y);
    PrintComplex(&tmp);
    printf("x / y =");
    tmp = DivComplex(&x, &y);
    PrintComplex(&tmp);
    return 0;
}

void SetComplex(Complex_t* x, double a, double b) {
    x->a = a;
    x->b = b;
    return;
}

double AbsComplex(Complex_t* x) {
    double tmp = sqrt(x->a * x->a + x->b * x->b);
    return tmp;
}

Complex_t AddComplex(Complex_t* x, Complex_t* y) {
    Complex_t tmp;
    tmp.a = x->a + y->a;
    tmp.b = x->b + y->b;
    return tmp;
}

Complex_t SubComplex(Complex_t* x, Complex_t* y) {
    Complex_t tmp;
    tmp.a = x->a - y->a;
    tmp.b = x->b - y->b;
    return tmp;
}

Complex_t MulComplex(Complex_t* x, Complex_t* y) {
    Complex_t tmp;
    tmp.a = x->a * y->a - x->b * y->b;
    tmp.b = x->a * y->b + y->a * x->b;
    return tmp;
}

Complex_t DivComplex(Complex_t* x, Complex_t* y) {
    Complex_t tmp;
    double c = y->a * y->a + y->b * y->b;
    tmp.a = x->a * y->a + x->b * y->b;
    tmp.b = -x->b * y->a - x->a * y->b;
    tmp.a /= c;
    tmp.b /= c;
    return tmp;
}

void PrintComplex(Complex_t* x) {
    printf("%12.8lf + %12.8lfi\n",x->a,x->b);
    return;
}
