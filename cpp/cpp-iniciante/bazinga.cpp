#include <iostream>
#include <cstring>
using namespace std;

int main (){

    int t;
    string raj, sheldon;

    cin >> t;

    for (int i= 1; i <= t; i++){

        cin >> sheldon >> raj;

        if ((sheldon == "papel" && (raj == "pedra" || raj == "Spock"))
            || (sheldon == "pedra" && (raj == "lagarto" || raj == "tesoura"))
            || (sheldon == "tesoura" && (raj == "papel" || raj == "lagarto"))
            || (sheldon == "lagarto" && (raj == "papel" || raj == "Spock"))
            || (sheldon == "Spock" && (raj == "pedra" || raj == "tesoura")))

            cout << "Caso #" << i << ": Bazinga!" << endl;

        else if ((sheldon == "papel" && raj == "papel")
                || (sheldon == "pedra" && raj == "pedra")
                || (sheldon == "tesoura" && raj == "tesoura")
                || (sheldon == "lagarto" && raj == "lagarto")
                || (sheldon == "Spock" && raj == "Spock"))

            cout << "Caso #" << i << ": De novo!" << endl;

        else

            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
    }

    return 0;
}
