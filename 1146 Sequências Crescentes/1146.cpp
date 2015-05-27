#include <iostream>
 
using namespace std;
 
int main() {
 
 	int X;
	cin >> X;
	do{
		for (int i = 1; i <= X; i++){
			cout << i;
			if (i!=X)
				cout << " ";
		}
		cout << endl;
		cin >> X;
	}while(X!=0);
	
 
    return 0;
}
