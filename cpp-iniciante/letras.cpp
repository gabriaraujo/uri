#include <bits/stdc++.h>
using namespace std;

int main (){

    string c;
    string palavra;

    double porcent = 0, total = 0;

    cin >> c;

    while (cin >> palavra) {

        if (c == palavra[i])
            porcent++;

        total++;
    }

    cout << fixed << setprecision(2) << palavra / total << endl;

    return 0;
}
