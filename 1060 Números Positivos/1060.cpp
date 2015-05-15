#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int i, qtd;
    float val;
    qtd = 0;

    for(i=0; i<6;i++){
        cin >>val;
        if (val>0)
            qtd++;
    }

    cout << qtd << " valores positivos" <<endl;

    return 0;
}