#include <iostream>
using namespace std;

int main () {

    int n, x, y, soma, cont = 0;

    cin >> n;

    for (int i = 0; i < n; i++){

        cin >> x >> y;

        soma = 0;

        while (true){

            if (cont == y){
                cont = 0;
                break;
            }

            else if (x % 2 != 0){

                soma += x;
                cont++;
            }

            x++;
        }

        cout << soma << endl;
    }

    return 0;
}
