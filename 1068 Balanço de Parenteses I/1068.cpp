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
bool b;
 
int main(){
 
    while(getline(cin, s)){
 
        b = true;
        stack<char> u;
             
        for(int i= 0; i < s.size() ; i++){
             
 
            if(s[i] =='(')
                u.push(')');
            else if(s[i] == ')'){
                if(!u.empty()){
                    if(s[i] == u.top()){
                        u.pop();
                    }
                    else{
                        b = false;
                        break;
                    }
                }
                else{
                    b = false;
                    break;
                }
            }
             
         
             
        }
     
        cout<<((b && u.empty())? "correct":"incorrect")<<endl;
     
     
    }
    return 0;
}
