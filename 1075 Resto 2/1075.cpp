#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int val;
    int i;
    cin >> val;

    for (i=1 ; i<=10000 ; i++)
        if(i%val ==2)
            cout << i << endl;

    return 0;
}