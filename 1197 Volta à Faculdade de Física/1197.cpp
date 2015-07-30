#include <iostream>

using namespace std;
//Enunciado desse problema está errado, a velocidade deve ser tratada como constante e a aceleração como nula
int main (){


	//Formula : V = vo + a*t //vo = 0
	int v, t;
	double a;
	int s;
	while(cin >> v >> t){


		//Formula : S = so + vo.t + (a/2)*t^2
		s = v*t*2;

		cout << s << endl;


	}



}
