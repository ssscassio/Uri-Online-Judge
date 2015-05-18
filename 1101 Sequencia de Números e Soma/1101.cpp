#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int v[2];
    int soma;
    cin >> v[0] >> v[1];
    while (v[0] && v[1]){
        sort(v, v+2);//Nesse passo v[0] vira o menor e v[1] vira o maior
        soma =0;
        for(;v[0] <= v[1]; v[0]++){
            cout << v[0] << " ";
            soma +=v[0];
        }
        cout<< "Sum=" << soma << endl;
        cin >> v[0] >> v[1];
    }

    return 0;
 }