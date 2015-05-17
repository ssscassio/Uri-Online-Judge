#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

int main(){

    int qtd;//Quantidade de casos de teste
    int quantia;
    char tipo;
    map<char, int> myMap;
    //Inicializando o map
    myMap['R'] = 0;
    myMap['S'] = 0;
    myMap['C'] = 0;

    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        cin >> quantia >> tipo;
        myMap[tipo] +=quantia;
    }

    cout.precision(2);
    cout << "Total: " << myMap['R'] + myMap['S'] + myMap['C'] << " cobaias" <<endl;
    cout << "Total de coelhos: " << myMap['C'] <<endl;
    cout << "Total de ratos: " << myMap['R'] <<endl;
    cout << "Total de sapos: " << myMap['S'] <<endl;
    cout << "Percentual de coelhos: " << fixed <<(float) 100*myMap['C']/(myMap['R'] + myMap['S'] + myMap['C']) << " \%" <<endl;
    cout << "Percentual de ratos: " << fixed <<(float) 100*myMap['R']/(myMap['R'] + myMap['S'] + myMap['C']) << " \%" <<endl;
    cout << "Percentual de sapos: " << fixed <<(float) 100*myMap['S']/(myMap['R'] + myMap['S'] + myMap['C']) << " \%" <<endl;
    return 0;
}