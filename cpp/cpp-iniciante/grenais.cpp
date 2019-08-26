#include <iostream>
using namespace std;

int main (){

    int inter, gremio;
    int cint = 0, cgre = 0, cjogos = 0, empt = 0;
    int resp;

    while (true){

        cin >> inter >> gremio;

        cjogos++;

        if (inter > gremio)
            cint++;
        else if (gremio > inter)
            cgre++;
        else
            empt++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> resp;

        if (resp != 1)
            break;
    }

    cout << cjogos << " grenais" << endl;
    cout << "Inter:" << cint << endl;
    cout << "Gremio:" << cgre << endl;
    cout << "Empates:" << empt << endl;

    if (cint > cgre)
        cout << "Inter venceu mais" << endl;

    else if (cgre > cint)
        cout << "Gremio venceu mais" << endl;

    else
        cout << "Nao houve vencedor" << endl;

    return 0;
}
