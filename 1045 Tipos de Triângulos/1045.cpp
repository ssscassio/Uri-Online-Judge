#include <cstdio>
#include <vector>    //std::vector
#include <iostream>  //std::cout
#include <algorithm> //std::sort
int main(){
    double A, B, C;
    double vec[3];
    int i = 0;
    scanf("%lf %lf %lf", &vec[0], &vec[1], &vec[2]);

    std::vector<double> myvector (vec,vec + 3);

    std::sort (myvector.begin(), myvector.end());

    for(std::vector<double>::iterator it=myvector.begin();it!=myvector.end();++it){
        vec[i] =*it;
        i++;
    }
    A = vec[2];
    B = vec[1];
    C = vec[0];

    if(A >= B+C)
        printf("NAO FORMA TRIANGULO\n");
    else{
        if (A*A == (B*B + C*C))
            printf("TRIANGULO RETANGULO\n");
        else if (A*A > (B*B + C*C))
            printf("TRIANGULO OBTUSANGULO\n");
        else if (A*A < (B*B + C*C))
            printf("TRIANGULO ACUTANGULO\n");

        if (A == B && B == C)
            printf("TRIANGULO EQUILATERO\n");
        else if(A == B || B ==C)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}