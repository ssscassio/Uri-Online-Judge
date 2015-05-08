#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    float A,B,C,M;

    scanf("%f %f %f", &A, &B, &C);

    M = (A + B + std::abs(A - B)) / 2;//abs refere-se a valor absoluto(modulo), ele pertence a biblioteca cmath
    M = (M + C + std::abs(M - C)) / 2; //m guarda o maior


    if ((A+B+C)/2 > M)//Triangulo
        printf("Perimetro = %.1f\n", A + B + C);
    else
        printf("Area = %.1f\n", C*(A+B)/2);

}
