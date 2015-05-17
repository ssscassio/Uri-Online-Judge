#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
   int qtd;
   float a,b,c;
   cin >> qtd;

   for (int i = 0; i < qtd; i++){
        cin >> a >> b >> c;
        printf("%.1f\n", (2*a+3*b+5*c)/10 );
   }
}