#include <iostream>
using namespace std;

int main (){

    int alc = 0, gas = 0, dis = 0, op;

    cin >> op;

    while (true){

        cin >> op;

        if (op == 4)
            break;

        switch (op) {
            case 1:
                alc++;
                break;

            case 2:
                gas++;
                break;

            case 3:
                dis++;
                break;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << dis << endl;

    return 0;
}
