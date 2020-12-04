#include <bits/stdc++.h>
using namespace std;

int main (){

    vector<double> n;
    double vallue;

    cin >> vallue;

    n.push_back(vallue);

    for (int i = 1; i < 100; i++)
        n.push_back(n[i - 1] / 2);


    for (int i = 0; i < 100; i++){
        cout << fixed << setprecision (4);
        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}
