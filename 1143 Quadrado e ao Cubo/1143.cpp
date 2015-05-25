#include <iostream>

using namespace std;

int main() {

    int qtd;
    int num = 1;
    cin >> qtd;

    for(int i = 1; i <= qtd; i++){
        cout << i << " " << i*i << " " << i*i*i << endl;
    }

    return 0;
}
