#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    int L;
    double mat[12][12], soma = 0;
    char T;

    cout << fixed << setprecision(1);

    cin >> L >> T;

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }

    switch (T){

        case 'S':
            for (int i = 0; i < 12; i++){

                soma += mat[L][i];
            }

            cout << soma << endl;
            break;

        case 'M':
            for (int i = 0; i < 12; i++){

                soma += mat[L][i];
            }

            cout << soma / 12 << endl;
            break;
    }

    return 0;
}
