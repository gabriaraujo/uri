#include <bits/stdc++.h>
using namespace std;

bool compare(int lhs, int rhs);

int main (){

    vector<int> pares;
    vector<int> impares;

    int n, entrada;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> entrada;

        if (entrada % 2 == 0)
            pares.push_back(entrada);

        else
            impares.push_back(entrada);
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), compare);

    for(vector<int>::iterator it = pares.begin(); it != pares.end(); it++){
        cout << *it << endl;
    }
    for(vector<int>::iterator it = impares.begin(); it != impares.end(); it++){
        cout << *it << endl;
    }

    return 0;
}
bool compare(int lhs, int rhs){
    return rhs < lhs;
}
