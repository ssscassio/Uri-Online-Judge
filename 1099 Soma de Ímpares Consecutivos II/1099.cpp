#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int qtd;
    int x,y,soma;
    cin >> qtd;
    int * vec = new int(qtd);
    for (int i =0; i < qtd ; i++){
        soma = 0;
        cin >> x;
        cin >> y;

        if (x > y){
            if(y%2 == 0)
                y++;
            else
                y+=2;
            while(y < x){
                soma+=y;
                y+=2;
            }
        }else{
            if(x%2 == 0)
                x++;
            else
                x+=2;
            while(x < y){
                soma+=x;
                x+=2;
            }
        }
        vec[i] = soma;
    }
    for(int i = 0; i < qtd ; i++)
        cout << vec[i] << endl;
}