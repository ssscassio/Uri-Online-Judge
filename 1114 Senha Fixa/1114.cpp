#include <iostream>
#define senha 2002 
using namespace std;
 
int main() {
 
	int s;

	cin >> s;
	
	while (s != senha){
	cout << "Senha Invalida" << endl;
	
	cin >> s;
	}

	cout << "Acesso Permitido" << endl;

    return 0;
}
