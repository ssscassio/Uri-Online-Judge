#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, Z;
	int soma;
	int i = 1;
	cin >> X;
	soma = X;
	
	do{
	cin >> Z;
	}while(Z<=X);
 	
	for (;soma < Z; i++){
		soma +=X+i; 
	} 

	cout << i << endl;
    return 0;
}
