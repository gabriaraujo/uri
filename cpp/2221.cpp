#include <iostream>
using namespace std;

double valorGolpe (int, int, int, int);

int main (){

    int T, B;
    int Ag, Dg, Lg, Ad, Dd, Ld;

    cin >> T;

    for (int i = 0; i < T; i++){

        cin >> B;
        cin >> Ad >> Dd >> Ld;
        cin >> Ag >> Dg >> Lg;

        if (valorGolpe (Ad, Dd, Ld, B) > valorGolpe (Ag, Dg, Lg, B))
            cout << "Dabriel" << endl;

        else if (valorGolpe (Ad, Dd, Ld, B) < valorGolpe (Ag, Dg, Lg, B))
            cout << "Guarte" << endl;

        else
            cout << "Empate" << endl;
    }

    return 0;

}

double valorGolpe (int Ai, int Di, int Li, int B){

    double valorGolpe;

    if (Li % 2 == 0){

        valorGolpe = ((Ai + Di) / 2) + B;
    }
    else
        valorGolpe = ((Ai + Di) / 2);

    return valorGolpe;
}
