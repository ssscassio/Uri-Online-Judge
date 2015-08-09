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
 
string s;
int qtd;
int quantidade;
int main(){
 
    cin >> qtd;
    cin.ignore();   
    for (int j =0; j <qtd; j++){
        quantidade = 0;
        stack<char> u;
        getline(cin, s);
         
        for(int i= 0; i < s.size() ; i++){
             
 
            if(s[i] =='<')
                u.push('>');
            else if(s[i] == '>'){
                if(!u.empty()){
                    if(s[i] == u.top()){
                        u.pop();
                        quantidade++;
                    }
                }
            }
             
         
             
        }
     
        cout<<quantidade<<endl;
     
     
    }
    return 0;
}
