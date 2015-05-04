#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {

    char nome[300];
    double salario;
    double vendas;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    printf("TOTAL = R$ %.2f\n", salario +  0.15*vendas);

    return 0;
}
