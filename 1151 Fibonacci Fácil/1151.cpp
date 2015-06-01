#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, Y, aux, qtd;

	X = 0;
	Y = 1;

	cin >> qtd;
	
	cout << X << " " << Y;
	for(int i = 2; i <qtd; i++){
		aux = Y;
		Y = X+aux;
		X = aux;
		cout << " " << Y;
	}	    
	cout << endl;




    return 0;
}
