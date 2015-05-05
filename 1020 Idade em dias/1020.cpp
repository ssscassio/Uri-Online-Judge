#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    int v[2] = {365,30};
    int d;
    int i;
    scanf("%d", &d);

    printf("%d ano(s)\n",  d/365);
    d = d%365;
    printf("%d mes(es)\n",  d/30);
    d = d%30;
    printf("%d dia(s)\n",  d);

    return 0;
}
