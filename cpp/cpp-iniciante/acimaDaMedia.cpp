#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    int c, n;

    cin >> c;

    for (int i = 0; i < c; i++){

        cin >> n;

        int notas[n], cont = 0;
        double media = 0;

        for (int j = 0; j < n; j++){

            cin >> notas[j];
            media += notas[j];
        }

        media /= n;

        for (int k = 0; k < n; k++){

            if (notas[k] > media)
                cont++;
        }

        cout << fixed << setprecision (3) << 100.0 * cont / n << "%" << endl;
    }

    return 0;
}
