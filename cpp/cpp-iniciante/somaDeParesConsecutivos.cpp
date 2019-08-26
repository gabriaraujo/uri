#include <iostream>
using namespace std;

int main () {

    int x, soma, cont;

    while (true){

        cin >> x;

        soma = 0;
        cont = 0;

        if (x == 0)
            break;

        while (cont < 5){

            if (x % 2 == 0){

                soma += x;
                cont++;
            }

            x++;
        }

        cout << soma << endl;
    }

    return 0;
}
