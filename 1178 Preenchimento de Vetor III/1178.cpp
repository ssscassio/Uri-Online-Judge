#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	double n[100];

	cin >> n[0];
	printf("N[0] = %.4f\n", n[0]);

	for (int i = 1; i < 100; i++){
		n[i] = n[i-1]/2;

		printf("N[%d] = %.4f\n", i , n[i]);
	}



}
