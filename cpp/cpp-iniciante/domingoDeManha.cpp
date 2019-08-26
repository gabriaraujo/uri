#include <iostream>
using namespace std;

int main (){

    int hora, min;
    char pontos;

    while (cin >> hora >> pontos >> min){

        if (hora == 7)
            cout << "Atraso maximo: " << min << endl;

        else if (hora == 8)
            cout << "Atraso maximo: " << 60 + min << endl;

        else if (hora == 9)
            cout << "Atraso maximo: " << 120 << endl;

        else if (hora == 5 || hora == 6)
            cout << "Atraso maximo: " << 0 << endl;
    }

    return 0;
}
