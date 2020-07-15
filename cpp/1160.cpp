#include <iostream>
using namespace std;

int main (){

    int t, pa, pb;
    double ga, gb;

    cin >> t;

    for (int i = 0; i < t; i++){

        int cont = 0;

        cin >> pa >> pb >> ga >> gb;

        while (pa <= pb){

            pa += pa * ga / 100.0;
            pb += pb * gb / 100.0;
            cont ++;

            if (cont > 100){
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }

        if (cont <= 100)
            cout << cont << " anos." << endl;
    }

    return 0;
}
