#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {

	int cont = 0;
	float nota;
	float notas[2];

	while(cont<2){
		cin >> nota;
		if(nota >=0 && nota <=10){
			notas[cont] = nota;
			cont++;
		}else
			cout << "nota invalida"<< endl;
	}

	printf("media = %.2f\n",( notas[0]+notas[1])/2);
	
    return 0;
}
