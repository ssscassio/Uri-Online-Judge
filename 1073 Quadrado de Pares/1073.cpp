#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int val;
    int i = 2;
    cin >> val;

    for (; i <=val;i+=2)
        cout << i << "^" << "2" << " = " << i*i<<endl;

    return 0;
}