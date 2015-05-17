#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int qtd;
    int val;
    int i;
    int in, out;
    in = out = 0;
    cin >> qtd;

    for(i=0; i<qtd; i++){
        cin >> val;
        if(val >=0 && val <=20)
            in++;
        else
            out++;
    }
    cout << in <<" in" <<endl;
    cout << out <<" out" <<endl;

    return 0;

}