#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    std::string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == "vertebrado"){
        if (b == "ave"){
            if (c == "carnivoro")
                printf("aguia\n");
            else if (c== "onivoro")
                printf("pomba\n");
        } else if ( b =="mamifero"){
            if (c == "onivoro")
                printf("homem\n");
            else if (c=="herbivoro")
                printf("vaca\n");
        }
    } else if (a == "invertebrado"){
        if (b == "inseto"){
            if (c == "hematofago")
                printf("pulga\n");
            else if (c =="herbivoro")
                printf("lagarta\n");
        } else if (b == "anelideo"){
            if (c == "hematofago")
                printf("sanguessuga\n");
            else if (c=="onivoro")
                printf("minhoca\n");
        }
    }
    return 0;
}