#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    float somador;

    for( somador = 0; somador<=2.2; somador+=0.2)
        for(float j = 1; j<=3;j+=1)
            cout << "I=" << somador <<" J=" << j +somador<< endl;
}
