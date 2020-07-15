#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    double S = 0;
    int den = 1;

    for (int i = 1; i <= 39; i += 2){

        S += (double) i / den;
        den *= 2;
    }

    cout << fixed << setprecision(2) << S << endl;

    return 0;
}
