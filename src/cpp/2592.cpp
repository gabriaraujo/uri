#include <iostream>
#include <algorithm>
#define TAM 10000
using namespace std;

int main (){

    int n, vet[TAM], sorte[TAM];

    while (true){

        cin >> n;

        int cont2 = 0;

        bool igual = false;

        if (n == 0)
            break;

        while (!igual){

            int cont1 = 0;

            for (int i = 0; i < n; i++){

                cin >> vet[i];
                sorte[i] = vet[i];
            }

            sort (sorte, sorte + n);

            for (int i = 0; i < n; i++){

                if (vet[i] == sorte[i])
                    cont1++;

                else
                    break;
            }

            cont2++;

            if (cont1 == n){

                cout << cont2 << endl;
                igual = true;
            }
        }
    }

    return 0;
}
