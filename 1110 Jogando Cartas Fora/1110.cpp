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
 
int main(){
 
    int cartas;
     
    while(cin>> cartas && cartas != 0){
     
        vector<int> vi;
        for (int i = 1; i < cartas + 1; i++) 
            vi.push_back(i);            
         
        printf("Discarded cards:");
     
        while(vi.size() != 1){
            printf(" %d", vi.front());
            if(vi.size()!=2) printf(",");
            vi.erase(vi.begin());
            vi.push_back(vi[0]);
            vi.erase(vi.begin());
        }
     
        printf("\nRemaining card: %d\n", vi[0]);
    } 
    return 0;
}
