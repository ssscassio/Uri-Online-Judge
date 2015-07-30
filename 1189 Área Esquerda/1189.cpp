#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	double m[12][12];
	char ope;
	cin >> ope;
	double result=0;
	int qtd = 0;

	for(int i = 0; i<12; i++)
		for(int j = 0; j < 12; j++)
			cin >> m[i][j];

	for(int i = 0; i < 12; i++)
		for(int j = 0; j <12; j++)
			if( i + j < 11 && i > j){
				result += m[i][j];
				qtd++;
			}
	if(ope == 'M')
		result /= qtd;

	printf("%.1f\n",result);



}
