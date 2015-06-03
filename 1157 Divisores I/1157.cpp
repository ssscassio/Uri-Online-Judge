#include <iostream>
#include <stdio.h>

using namespace std;
 
int main() {
 
	int entrada;

	cin >> entrada;

	for(int i = 1;i <= entrada; i++)
		if (entrada%i == 0)
			cout << i << endl;
 
    return 0;
}
