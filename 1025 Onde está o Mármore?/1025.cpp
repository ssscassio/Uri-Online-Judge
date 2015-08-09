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
 
int n,q;
int consulta;
 
int main(){
    int k = 1;
     
     
    while(cin >> n >> q && !(n==0 || q==0)){
         
        vector<int> vec(n);
         
        for(int i = 0; i<n;i++)
            cin >> vec[i];
         
        sort(vec.begin(), vec.end());
        printf("CASE# %d:\n", k);
        for(int i = 0; i<q; i++){
            cin >> consulta;
            bool b = false;
            int j;
            for(j = 0; j<n; j++){
                if( vec[j] == consulta){
                        b =true;
                        break;
                }
            }
            if(b)
                printf("%d found at %d\n", consulta, j+1);
            else
                printf("%d not found\n", consulta);
        }
        k++;
    }
 
    return 0;
}
