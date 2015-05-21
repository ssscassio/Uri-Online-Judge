#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {

	int cont = 0;
	float nota;
	float notas[2];
	int X;
	do{
	cont = 0;
	while(cont<2){
		cin >> nota;
		if(nota >=0 && nota <=10){
			notas[cont] = nota;
			cont++;
		}else
			cout << "nota invalida"<< endl;
	}

	printf("media = %.2f\n",( notas[0]+notas[1])/2);
	do{
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> X;
	}while(X != 1 && X !=2);

	}while (X == 1);
    return 0;
}
