#include <iostream>
using namespace std;

int main (){

    int n;
    double c;

    cin >> n;

    for (int i = 0; i < n; i++){

        int cont = 0;
        cin >> c;

        for (double j = c; j > 1; j /= 2.0)
            cont ++;

        cout << cont << " dias" << endl;
    }

    return 0;
}
