#include <iostream>

using namespace std;

int main (){

	int n[1000];
	int t;

	cin >> t;

	for ( int i = 0; i < 1000; i++)
		n[i] = i%t;

	for( int i = 0; i < 1000; i++)
		cout << "N[" << i << "] = " << n[i] << endl;


}
