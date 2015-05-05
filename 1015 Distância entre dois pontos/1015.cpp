#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    float x1,x2,y1,y2;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    printf("%.4f\n", std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));//sqrt refere-se a raiz quadrada de um número passado como parâmetro
    return 0;
}
