#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    float v[5]= {4.00,4.50,5.00,2.00,1.50};
    int cod, qtd;

    scanf("%d", &cod);
    scanf("%d", &qtd);

    printf("Total: R$ %.2f\n", v[cod-1]*qtd);
}
