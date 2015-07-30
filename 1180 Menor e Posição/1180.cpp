#include <iostream>
#include <vector>

using namespace std;

int main (){

	int vectam;
	cin >> vectam;
	vector <int> vec(vectam);
	int posm;
	for(int i = 0; i < vectam ; i++)
		cin >> vec[i];

	posm = 0;
	for(int i = 1; i < vectam ; i++){
		if(vec[i] < vec[posm])
			posm = i;
	}

	cout << "Menor valor: " << vec[posm] << endl;
	cout << "Posicao: " << posm << endl;

}
