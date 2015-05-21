#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
	int qtd;
	int X,Y;

	cin >> qtd;

	for(int i = 0; i < qtd; i++){
		cin >> X >> Y;
		if (!Y)
			cout << "divisao impossivel" << endl;
		else
			printf("%.1f\n", ((float) X)/Y);
	}
 
    return 0;
}
