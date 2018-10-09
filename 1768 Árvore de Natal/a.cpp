#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void natal(int valor, int cont) {
    cout << setw(cont);
    for(int i=valor; i>0; i--) {
        cout << "*";
    }
}

int main()
{
    int n, cont=0;
    double metade;

    while(cin >> n) {
        metade = ceil(n/2.0);
        cont = metade+1;
        for(int i=metade; i>=0; i--) {
            natal(n - (i*2), cont);
            if(i > 0 && i<metade)
                cout << endl;
            cont--;
        }
        cout << endl;
        cout << setw(metade) << "*" << endl;
        cout << setw(1+metade) << "***" << endl;
        cout << endl;
    }

    return 0;
}
