#include <cstdio>

int main(){

    int inicio, fim;

    scanf("%d %d",&inicio, &fim);

    if(fim<= inicio)
        fim+= 24;

    printf("O JOGO DUROU %d HORA(S)\n", fim-inicio);
    return 0;
}