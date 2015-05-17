#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int i = 1;
    int j = 60;
    for (; j >=0; i+=3, j-=5)
        cout << "I=" << i <<" J=" << j << endl;
}
