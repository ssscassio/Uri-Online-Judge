#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

int testes;
cin >> testes;

while(testes--){

int pa,pb;
float ga,gb;
int anos = 0;
cin >> pa >> pb >> ga >> gb;

while(pa <= pb && anos <=100){

	pa += pa * (ga/100);
	pb += pb * (gb/100);
	anos++;
}

if(anos>100)
	cout << "Mais de 1 seculo." << endl;
else
	cout << anos << " anos." << endl;
}

}
