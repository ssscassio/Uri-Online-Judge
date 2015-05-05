#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, m;
    scanf("%d %d %d", &a, &b, &c);

    m = (a + b + std::abs(a - b)) / 2;//abs refere-se a valor absoluto(modulo), ele pertence a biblioteca cmath
    m = (m + c + std::abs(m - c)) / 2;
    printf("%d eh o maior\n", m);
}

//http://www.cplusplus.com/reference/complex/abs/