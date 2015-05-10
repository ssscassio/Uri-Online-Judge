#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {

    int A, B, M;
    scanf("%d %d", &A, &B);

    M = (A + B + std::abs(A - B)) / 2;//abs refere-se a valor absoluto(modulo), ele pertence a biblioteca cmath

    if (M%A==0 && M%B==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
}
