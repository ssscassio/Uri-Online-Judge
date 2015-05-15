#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {
    int i, qtd;
    float val;
    float soma = 0;
    qtd = 0;

    for(i=0; i<6;i++){
        cin >>val;
        if (val>0){
            qtd++;
            soma+=val;
        }
    }

    cout << qtd << " valores positivos" <<endl;
    cout << soma/qtd << setprecision(1) <<endl;
    return 0;
}