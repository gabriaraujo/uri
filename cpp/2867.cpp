#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int c, n, m;
    double resp;

    cin >> c;

    for (int i = 0; i < c; i++){

        resp = 0;

        cin >> n >> m;

        resp = log10 (n) * m;

        cout << (int) resp + 1 << endl;
    }

    return 0;
}
