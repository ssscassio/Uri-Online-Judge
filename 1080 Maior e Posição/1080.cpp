#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int val;
    int maior, pos;

    cin >> maior;
    pos = 1;

    for(int i = 1; i<100; i++){
        cin >> val;
        if(val> maior){
            maior = val;
            pos = i+1;
        }
    }
    cout << maior <<endl;
    cout << pos <<endl;
}