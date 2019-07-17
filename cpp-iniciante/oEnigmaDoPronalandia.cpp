#include <iostream>
#include <cmath>
using namespace std;

int main (){

    long long int nro;

    cin >> nro;

    for (int i = 0; ; i++){

        if (nro / (int) pow(10, i) == 0){

            cout << endl;
            break;
        }

        cout << (nro / (int) pow(10, i)) % 10;
    }

    return 0;
}
