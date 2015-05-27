#include <iostream>
 
using namespace std;
 
int main() {
 
 	int A,Y,soma;
	soma = 0;

	cin >> A >> Y;

	while (Y <= 0)
		cin >> Y;

	for (int i = 0; i<Y ;i++)
		soma += (A + i);
	
	cout << soma << endl;
    return 0;
}
