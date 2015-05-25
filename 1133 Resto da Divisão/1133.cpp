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
    y++;
    for (; y < x; y++)
        if(y%5 == 2 || y%5 ==3)
            cout << y << endl;

    return 0;
}
