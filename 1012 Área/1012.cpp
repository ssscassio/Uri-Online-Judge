#include <iostream>
#include <stdio.h>
#define pi 3.14159
using namespace std;

int main() {
    double A,B,C;

    scanf("%lf %lf %lf", &A, &B, &C);

    printf("TRIANGULO: %.3f\n", A*C/2);
    printf("CIRCULO: %.3f\n", pi*C*C);
    printf("TRAPEZIO: %.3f\n", ((A+B)/2)*C);
    printf("QUADRADO: %.3f\n", B*B);
    printf("RETANGULO: %.3f\n", A*B);

    return 0;
}
