#include <iostream>

using namespace std;

int main() {

    int qtd;
    int num = 1;
    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        while(!(num%4==0)){
            cout << num << " ";
            num++;
        }
        cout << "PUM" << endl;
        num++;
    }

    return 0;
}
