#include <bits/stdc++.h>
using namespace std;

int main (){

    vector<string> nomes;
    string nome;

    int n, k;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> nome;

        nomes.push_back(nome);
    }

    sort(nomes.begin(), nomes.end());

    cout << nomes[k - 1] << endl;

    return 0;
}
