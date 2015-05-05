#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    int s;
    scanf("%d", &s);

    printf("%d:%d:%d\n", s/3600, (s%3600)/60, (s%3600)%60);

    return 0;
}
