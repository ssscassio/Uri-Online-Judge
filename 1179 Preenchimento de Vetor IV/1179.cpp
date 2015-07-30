#include <iostream>

using namespace std;

int main () {

	int qtd = 15;
	int impar[5];
	int par[5];
	int num;
	int i=0;
	int p=0;
	while(qtd--){

		cin >> num;
		if(num %2== 0){
			par[p] = num;
			p++;
		}
		else{
			impar[i] = num;
			i++;
		}

		if(p == 5){

			for(int k = 0; k< 5 ;k++){
				cout << "par[" << k <<"] = " << par[k] << endl;
			} 
			p = 0;
		}
		if(i == 5){

			for(int k = 0; k< 5 ;k++){
				cout << "impar[" << k <<"] = " << impar[k] << endl;
			} 
			i = 0;
		}




	}

			for(int k = 0; k< i ;k++){
				cout << "impar[" << k <<"] = " << impar[k] << endl;
			} 
			for(int k = 0; k< p ;k++){
				cout << "par[" << k <<"] = " << par[k] << endl;
			} 


}
