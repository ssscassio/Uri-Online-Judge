#include <iostream>
 
using namespace std;
 
int main() {
 
	int N,X,Y,saida;
	cin >> N;
	for(int i = 0; i< N; i++){
		saida = 0;
		cin >> X  >> Y;
		if (X%2==0)
			X+=1;
		for(int j = 0; j <Y;j++){
			saida+=X + 2*j;
		}

		cout << saida << endl;
	}
    return 0;
}
