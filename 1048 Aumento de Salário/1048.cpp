#include <iostream>
#include <stdio.h>
	 
using namespace std;
 
int main() {
 
	float salario, reajuste;

	cin >> salario;

	if(salario >2000)
		reajuste = 0.04;
	else if(salario > 1200)
		reajuste = 0.07;
	else if(salario > 800)
		reajuste = 0.10;
	else if(salario > 400)
		reajuste = 0.12;
	else
		reajuste = 0.15;
		 
	cout.precision(2);
	cout<<fixed;
	cout<<"Novo salario: "<<salario+salario*reajuste<<endl<<"Reajuste ganho: "<<salario*reajuste<<endl;
	cout.precision(0);
	cout<<"Em percentual: "<<reajuste*100.0<<" %"<<endl;

	return 0;
}
