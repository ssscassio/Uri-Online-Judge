#include <iostream>

using namespace std;

int main() {

    int qtd;
    cin >> qtd;

    for(int i = 1; i <= qtd; i++){
        cout << i << " " << i*i << " " << i*i*i << endl;
        cout << i << " " << i*i +1<< " " << i*i*i +1<< endl;

    }

    return 0;
}
