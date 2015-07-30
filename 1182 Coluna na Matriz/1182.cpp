#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	double m[12][12];
	int c;
	char ope;
	cin >> c;
	cin >> ope;
	double result=0;


	for(int i = 0; i<12; i++)
		for(int j = 0; j < 12; j++)
			cin >> m[i][j];

	for(int i = 0; i < 12; i++)
		result += m[i][c];

	if(ope == 'M')
		result /= 12;

	printf("%.1f\n",result);



}
