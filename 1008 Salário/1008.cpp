#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int numfunc,horastrabalhadas;
    double valorporhora;

    scanf("%d", &numfunc);
    scanf("%d", &horastrabalhadas);
    scanf("%lf", &valorporhora);

    printf("NUMBER = %d\n", numfunc);
    printf("SALARY = U$ %.2f\n", horastrabalhadas*valorporhora);
    return 0;
}
