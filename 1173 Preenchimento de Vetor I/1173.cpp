#include <iostream>

using namespace std;

int main (){

	int n[10];
	int num;

	cin >> num;

	for (int i =0; i < 10; i++){
		n[i] = num;
		num *=2;
	}

	for (int i =0; i < 10; i++)
		cout << "N[" << i << "] = " << n[i] << endl;




}
