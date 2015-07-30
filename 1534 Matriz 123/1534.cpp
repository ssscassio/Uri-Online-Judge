#include <iostream>
#include <vector>

using namespace std;

int main(){

	int num;
	while(cin >> num){

		vector <vector<int> > vec(num);
		for(int i = 0;i < num; i++){
			vector<int> aux(num);
			vec[i] = aux;
		}

		for (int i = 0; i < num; i++)
			for (int j = 0; j < num; j++)
				if(i + j == num - 1)
					vec[i][j] = 2;
				else if( i == j)
					vec[i][j] = 1;
				else
					vec[i][j] = 3;


		for (int i = 0; i < num; i++){
			for (int j = 0; j < num; j++){
				cout << vec[i][j];}
			cout << endl;
		}

	}

}
