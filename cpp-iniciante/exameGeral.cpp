#include <bits/stdc++.h>
using namespace std;

bool compare (int lhs, int rhs);

int main (){

    int hab, con;

    while (cin >> hab >> con){

        int nota, pos;
        vector<int> notas;
        vector<int> posicoes;

        for (int i = 0; i < hab; i++){
            cin >> nota;
            notas.push_back(nota);
        }

        for (int i = 0; i < con; i++){
            cin >> pos;
            posicoes.push_back(pos);
        }

        sort(notas.begin(), notas.end(), compare);

        for (int i = 0; i < con; i++)
            cout << notas[posicoes[i] - 1] << endl;
    }

    return 0;
}

bool compare (int lhs, int rhs){
    return lhs > rhs;
}
