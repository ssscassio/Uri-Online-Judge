#include <iostream>
 
using namespace std;
 
int main() {
 
	int num;
	int fatorial = 1;

	cin >> num;

	for(int i = 2; i <=num;i++){
		
		fatorial *= i;
	}

	cout << fatorial << endl;
 
    return 0;
}
