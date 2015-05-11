#include <cstdio>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

    map<string, int> myMap;
    //Utilizando map
    myMap["vertebrado"]=  0;
    myMap["invertebrado"]=  1;
    myMap["ave"]=  0;
    myMap["mamifero"]=  1;
    myMap["inseto"]=  2;
    myMap["analideo"]=  3;
    myMap["carnivoro"]=  0;
    myMap["onivoro"]=  1;
    myMap["herbivoro"]=  2;
    myMap["hematofago"]= 3;

    string m[2][4][4];

    m[0][0][0] = "aguia";
    m[0][0][1] = "pomba";
    m[0][1][1] = "homem";
    m[0][1][2] = "vaca";
    m[1][2][3] = "pulga";
    m[1][2][2] = "lagarta";
    m[1][3][3] = "sanguessuga";
    m[1][3][1] = "minhoca";

    std::string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(m[myMap[a]][myMap[b]][myMap[c]] != "")
        cout << m[myMap[a]][myMap[b]][myMap[c]]<<endl;

    return 0;
}