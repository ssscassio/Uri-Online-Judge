#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int linha,coluna,i,j;
    linha = 1;
    coluna = 7;
    for(i=0;i<5;i++){
        for(j=0; j<3;j++){
            printf("I=%d J=%d\n", linha, coluna);
            coluna--;
        }
        linha+=2;
        coluna+=5;
    }
}
