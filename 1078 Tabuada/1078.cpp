#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int val;
    int i;
    cin >> val;

    for (i = 1; i <=10; i++)
        cout << i << " x " << val << " = " << val*i<<endl;

    return 0;
}