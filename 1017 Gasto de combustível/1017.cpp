#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
#define cons 12.00

int main() {
    int h, vm;

    scanf("%d", &h); //Lendo o valor de horas digitado pelo usuario
    scanf("%d", &vm); //Lendo o valor de velocidade media digitado pelo usuario

    printf("%.3f\n", (vm*h)/cons);

    return 0;
}
