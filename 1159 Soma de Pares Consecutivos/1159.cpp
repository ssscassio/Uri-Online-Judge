#include <iostream>
 
using namespace std;
 
int main() {
 
	int X,soma;

	while (cin>>X && X!=0){
	soma = 0;
		if(X%2 ==1)
			X++;
		for (int i = 0; i <= 4; i++, X += 2)
			soma+=X;		
		cout << soma << endl; 

	}
 
    return 0;
}
