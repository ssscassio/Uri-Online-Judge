#include <iostream>

using namespace std;


int main(){

	int vec[10];

	for (int i = 0; i < 10 ; i++){
		cin  >> vec[i];

		if (vec[i] <=0)
			vec[i] = 1;

	}

	for (int i = 0; i < 10; i ++)
		cout << "X[" << i << "] = " << vec[i] << endl;


}
