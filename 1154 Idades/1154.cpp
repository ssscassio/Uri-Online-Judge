#include <iostream>
#include <stdio.h>
	 
using namespace std;
 
int main() {
 
	int idade;
	int i = 0;
	int soma = 0;

	cin >> idade;
	
	while(idade > 0){
		i++;
		soma+=idade;
		cin >> idade;
	}

		printf("%.2f\n", (float)soma/i );
	 
    return 0;
}
