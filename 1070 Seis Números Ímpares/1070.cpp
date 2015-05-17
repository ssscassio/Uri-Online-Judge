#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int x,i;

    cin >> x;
    if (x % 2 ==0)
        x +=1;

    for(i=0; i<6;i++){
        cout << x<< endl;
        x+=2;
    }

    return 0;
}