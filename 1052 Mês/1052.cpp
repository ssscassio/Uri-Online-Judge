#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    std::string v[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November", "December"};
    int num;
    cin >> num;

    cout << v[num-1]<< endl;
return 0;
}