#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    int cod1,num1, cod2, num2;
    double val1,val2;

    scanf("%d %d %lf", &cod1, &num1, &val1);
    scanf("%d %d %lf", &cod2, &num2, &val2);

    printf("VALOR A PAGAR: R$ %.2f\n", (num1*val1 + num2*val2));
    return 0;
}
