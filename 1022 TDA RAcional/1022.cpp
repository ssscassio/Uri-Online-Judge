#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <queue>
#include <set>
#include <algorithm>
#include <ctype.h>
 
using namespace std;
 
int n; //Casos de teste
int n1,d1,n2,d2; //Valores
int fn3, fd3;
char sinal;
int n3, d3;
int main(){
 
    int n;
     
    cin >> n;
     
    while(n--){
 
        scanf("%d / %d %c %d / %d", &n1, &d1, &sinal, &n2, &d2);
 
        switch(sinal){
             
            case '+':
                n3 = (n1*d2)+(n2*d1);
                d3 = (d1*d2);
                break;
            case '-':
                n3 = (n1*d2)-(n2*d1);
                d3 = d1*d2;
                break;
            case '*':
                n3 = (n1 *n2);
                d3 = (d1*d2);
                break;
            case '/':
                n3 = (n1*d2);
                d3 = (n2*d1);
                break;
        }
 
        fn3 = n3;
        fd3 = d3;
        for(int i = 100; i>0; i--){
            if(fn3%i == 0 && fd3%i==0){
                fn3/= i;
                fd3/= i;
            }
         
        }
         
        printf("%d/%d = %d/%d\n", n3, d3, fn3, fd3);
         
     
    }
    return 0;
}
