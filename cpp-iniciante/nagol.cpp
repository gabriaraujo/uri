#include <bits/stdc++.h>
using namespace std;

int main (){

    int l, c, lin, col;

    cin >> l >> c >> lin >> col;

    if (lin == 0 && col == 0)
        cout << "Direita" << endl;

    else if (c % 2 == 0){

        if (col % 2 == 0)
            cout << "Direita" << endl;

        else
            cout << "Esquerda" << endl;
    }

    else if (c % 2 != 0){

        if (lin % 2 == 0 && col % 2 == 0)
            cout << "Direita" << endl;

        else if (lin % 2 != 0 && col % 2 != 0)
            cout << "Direita" << endl;

        else
            cout << "Esquerda" << endl;
    }

    return 0;
}
