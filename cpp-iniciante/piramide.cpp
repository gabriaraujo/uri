#include <bits/stdc++.h>
using namespace std;

int main (){

    double a, b, c, d;

    while (true){

        cin >> a >> b >> c >> d;

        if (a == 0 && b == 0 && c == 0 && d == 0)
            break;

        else {

            cout << fixed << setprecision(5);
            cout << (((a / 2) + b) / d) * c << endl;
        }
    }

    return 0;
}
