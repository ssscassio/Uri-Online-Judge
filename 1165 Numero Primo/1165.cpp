#include <iostream>

using namespace std;

int main(){

	int testes;

	cin >> testes;

	while(testes--){
		int num;
		int sum=0;
		cin >> num;

		for (int i =1; i < num/2+1; i++){

			if (num%i == 0)
				sum += i;
		}
		if (sum == 1)
			cout << num << " eh primo" << endl;
		else
			cout << num << " nao eh primo" << endl;


	}

}
