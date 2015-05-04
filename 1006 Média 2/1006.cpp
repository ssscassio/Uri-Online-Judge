#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    double A, B,C;
    double MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    if(A >=0 && A<=10 && B>=0 && B<=10 && C>=0 && C<=10 ){
        MEDIA = (A*2 + B*3 + C*5)/10;
    }
    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}
