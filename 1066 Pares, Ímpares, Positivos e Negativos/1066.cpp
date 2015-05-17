#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int i, par,impar,neg,pos;
    int val;
    par = impar = neg = pos = 0;
    for(i=0; i<5;i++){
        cin >>val;

        if (val % 2 == 0)
            par++;
        else
            impar++;
        if (val >0)
            pos++;
        else if (val <0)
            neg++;

    }
    cout << par << " valor(es) par(es)" <<endl;
    cout << impar << " valor(es) impar(es)" <<endl;
    cout << pos << " valor(es) positivo(s)" <<endl;
    cout << neg << " valor(es) negativo(s)" <<endl;

    return 0;
}