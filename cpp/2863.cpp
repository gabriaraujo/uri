#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){

    int n;

    while (cin >> n){

        double t[n];

        for (int i = 0; i < n; i++){

            cin >> t[i];
        }

        sort (t, t + n);

        cout << fixed << setprecision (2) << t[0] << endl;

    }

    return 0;
}
