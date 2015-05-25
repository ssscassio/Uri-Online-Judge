#include <iostream>

using namespace std;

int main() {

    int alcool, gasolina, diesel;
    alcool = gasolina = diesel = 0;
    int resp;

    cin >> resp;

    while (resp != 4){

        switch (resp){
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            default:
                break;
        }

        cin >> resp;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}
