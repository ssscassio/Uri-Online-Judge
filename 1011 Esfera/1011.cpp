#include <iostream>
#include <stdio.h>
#define pi 3.14159

using namespace std;

int main() {
    float r;

    scanf("%f", &r);

    printf("VOLUME = %.3f\n", (4.0/3.0)* pi * (r*r*r));
    return 0;
}
