#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int i, qtd;
    int val;
    qtd = 0;

    for(i=0; i<5;i++){
        cin >>val;
        if (val % 2 == 0)
            qtd++;
    }

    cout << qtd << " valores pares" <<endl;

    return 0;
}