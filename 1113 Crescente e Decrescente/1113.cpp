#include <iostream>
 
using namespace std;
 
int main() {
 
	int X,Y;

	cin >> X >> Y;
	
	while ( X != Y){

	if(X > Y)
		cout << "Decrescente" << endl;
	else
		cout << "Crescente" << endl;

	cin >> X >> Y;

	} 

    return 0;
}
