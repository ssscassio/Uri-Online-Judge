#include <iostream>
 
using namespace std;
 
int main() {
 
	int qtd = 0;
	int gremio, inter;
	gremio = 0;
	inter = 0;
	int resp;
	int golsg, golsi;


	do{
	cin >> golsi >> golsg;
	qtd++;
	if (golsi > golsg)
		inter++;
	else if (golsg > golsi)
		gremio++;

	cout << "Novo grenal (1-sim 2-nao)" << endl;
	cin >> resp;
	}while(resp == 1);

 	cout << qtd << " grenais" << endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << qtd-(gremio + inter) << endl;
	if (gremio > inter)
		cout << "Gremio venceu mais" << endl;
	else if ( inter > gremio)
		cout << "Inter venceu mais" << endl;
	else
		cout << "Nao houve vencedor" << endl;
    return 0;
}
