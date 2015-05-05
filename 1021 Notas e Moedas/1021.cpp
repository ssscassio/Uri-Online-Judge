#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n[6]={10000,5000,2000,1000,500,200};//Valores para as notas em centavos
    int m[6]={100,50,25,10,5,1};
    double rest;
    int cents;
    int i;

    scanf("%lf", &rest);
    cents = rest*100; //Convertendo para centavos
    //NOTAS
    printf("NOTAS:\n");
    for (i = 0;i<6;i++){
        printf("%d nota(s) de R$ %.2f\n", cents/n[i], (float) n[i]/100);
        cents = (cents)%n[i];
    }
    //MOEDAS
    printf("MOEDAS:\n");
    for (i = 0;i<6;i++){
        printf("%d moeda(s) de R$ %.2f\n", cents/m[i], (float) m[i]/100);
        cents = (cents)%m[i];
    }
}
