#include <iostream>
using namespace std;

int main (){

    int t, vet[5], cont = 0;

    cin >> t;

    for (int i = 0; i < 5; i++){

        cin >> vet[i];

        if (vet[i] == t)
            cont++;
    }

    cout << cont << endl;

    return 0;
}
