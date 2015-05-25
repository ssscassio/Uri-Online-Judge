#include <iostream>

using namespace std;

int main() {

    int soma =0;
    int x, y;
    int aux;
    cin >> x;
    cin >> y;
    if (x<y){
        aux = x;
        x = y;
        y = aux;
    }
    for (; y <= x; y++)
        if(!(y%13==0))
            soma += y;

    cout << soma << endl;
    return 0;
}
