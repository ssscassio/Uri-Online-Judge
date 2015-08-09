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
 
typedef struct{
    int asc;
    int f;
}par;
 
bool compare(par i, par j){
    if(i.f==j.f){
        return i.asc>j.asc;
    }
    return i.f<j.f;
}
string s;
 
int main(){
    bool b = false;
    while(getline(cin, s)){     
        if (b)
            printf("\n");
        map<int, par> m;
 
        for(int i = 0; i <s.size(); i++){
            m[s[i]].f++;
            m[s[i]].asc=s[i];
        }   
         
         
         
        vector<par> vp;
        for(map<int, par>::iterator it=m.begin(); it!=m.end(); it++){
            vp.push_back(it->second);    
        }
         
        sort(vp.begin(), vp.end(), compare);
         
        for(int i=0; i<vp.size(); i++){
            cout<<vp[i].asc<<" "<<vp[i].f<<endl;
        }
         
        b=true;
             
    }
 
 
 
    return 0;
}
