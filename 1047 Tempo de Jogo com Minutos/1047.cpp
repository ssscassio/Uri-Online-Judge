#include <cstdio>
#define corretor 1440

int main(){

    int hi, mi, hf, mf;

    scanf("%d %d %d %d",&hi,&mi, &hf, &mf);

    hi *= 60;//Convertendo horas para minutos
    hf *= 60;
    mi +=hi;//Somando a quantidade total de minutos
    mf +=hf;

    if (mf <= mi)
        mf+= corretor;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (mf-mi)/60, (mf-mi)%60);
    return 0;
}