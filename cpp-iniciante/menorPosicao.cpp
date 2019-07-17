#include <iostream>
using namespace std;

int main (){

    int n, menor, cont = 0;

    cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++){

        cin >> vet[i];
    }

    menor = vet[0];

    for (int i = 1; i < n; i++){

        if (vet[i] < menor){
            menor = vet[i];
            cont = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << cont << endl;

    return 0;
}
