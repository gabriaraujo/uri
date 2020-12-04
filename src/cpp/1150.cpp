#include <iostream>
using namespace std;

int main (){

    int x, z, cont = 0, soma = 0;

    cin >> x >> z;

    while (x >= z)
        cin >> z;


    for (int i = x; ; i++){

        soma += i;
        cont++;

        if (soma >= z)
            break;
    }

    cout << cont << endl;

    return 0;
}
