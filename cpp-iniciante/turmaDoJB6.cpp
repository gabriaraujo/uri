#include <bits/stdc++.h>
using namespace std;

int main (){

    string dodo, leo, pepper;

    while (cin >> dodo >> leo >> pepper){

        if ((dodo == "papel" && leo == "pedra" && pepper == "pedra")
        || (dodo == "pedra" && leo == "tesoura" && pepper == "tesoura")
        || (dodo == "tesoura" && leo == "papel" && pepper == "papel")){

            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...";
            cout << endl;
        }

        else if ((leo == "papel" && dodo == "pedra" && pepper == "pedra")
        || (leo == "pedra" && dodo == "tesoura" && pepper == "tesoura")
        || (leo == "tesoura" && dodo == "papel" && pepper == "papel")){

            cout << "Iron Maiden's gonna get you, no matter how far!";
            cout << endl;
        }

        else if ((pepper == "papel" && dodo == "pedra" && leo == "pedra")
        || (pepper == "pedra" && dodo == "tesoura" && leo == "tesoura")
        || (pepper == "tesoura" && dodo == "papel" && leo == "papel")){

            cout << "Urano perdeu algo muito precioso...";
            cout << endl;
        }

        else
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
    }

    return 0;
}
