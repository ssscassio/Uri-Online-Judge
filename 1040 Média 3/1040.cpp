#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    float n1, n2, n3, n4;
    float m;
    float notaex;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    m= (n1*2+n2*3+n3*4+n4*1)/10;
    printf("Media: %.1f\n", m);

    if (m >= 7)
        printf("Aluno aprovado.\n");
    else if(m < 5)
        printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &notaex);
        printf("Nota do exame: %.1f\n", notaex);
        m=(m+notaex)/2;
        if(m >= 5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", m);
    }
}
