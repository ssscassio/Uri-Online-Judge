#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    float in;

    scanf("%f", &in);

    if(in >100)
        printf("Fora de intervalo\n");
    else if(in>75)
        printf("Intervalo (75,100]\n");
    else if(in>50)
        printf("Intervalo (50,75]\n");
    else if(in>25)
        printf("Intervalo (25,50]\n");
    else if(in>=0)
        printf("Intervalo [0,25]\n");
    else
        printf("Fora de intervalo\n");
}
