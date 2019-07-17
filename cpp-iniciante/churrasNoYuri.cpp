#include <iostream>
#include <algorithm>
using namespace std;

int main (){

    char carnes[10][20];
    int validade[10], quant, comp[10];

    while (cin >> quant){

        for (int i = 0; i < quant; i++){

            cin >> carnes[i] >> validade[i];
            comp[i] = validade[i];
        }

        sort (comp, comp + quant);

        for (int i = 0; i < quant; i++){
            for (int j = 0; j < quant; j++){

                if (comp[i] == validade[j]){
                    cout << carnes [j];

                    if (i < quant - 1)
                        cout << " ";
                }
            }
        }

        cout << endl;

    }

    return 0;
}
