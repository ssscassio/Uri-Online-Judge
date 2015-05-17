#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int qtd;
    int i;
    cin >> qtd;

    int * vec = new int[qtd];

    for (i = 0; i <qtd;i++){
        cin >> vec[i];
    }

    for (i = 0; i <qtd;i++){

        if(vec[i] == 0)
            cout << "NULL";
        else{
            if(vec[i]%2 ==0)
                cout << "EVEN ";
            else
                cout << "ODD ";
            if (vec[i] >0)
                cout << "POSITIVE";
            else
                cout << "NEGATIVE";
        }
        cout << endl;
    }
    return 0;
}