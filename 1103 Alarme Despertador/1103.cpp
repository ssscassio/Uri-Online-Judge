#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

	int h1,h2,m1,m2;
	int mf;

	while(cin >> h1 >> m1 >> h2 >> m2 && (h1 || m1 || h2 || m2)){

		if(h2 < h1 || (h1==h2 && m2 <= m1))
			h2 += 24;
		
		m1 += h1*60;
		m2 += h2*60;

		mf = m2 - m1;

		cout << mf << endl;
	}

	return 0;
}
