#include <iostream>

using namespace std;

int main (){

	int testes;
	long long fib[61];
	fib[0] = 0;
	fib[1] = 1;
	int num;

	for (int i = 2 ;i <= 60; i++)
		fib[i] = fib[i-1] + fib[i-2];

	cin >> testes;
	while(testes--){

		cin >> num;

		cout<< "Fib(" << num << ") = " << fib[num] << endl;

	}




}
