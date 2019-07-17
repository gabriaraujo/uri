#include <iostream>
#include <string.h>
using namespace std;

int main (){

    int c, n;
    char nome[100];

    cin >> c;

    for (int i = 0; i < c; i++){

        cin >> nome;
        cin >> n;

        if (!strcmp(nome, "Thor")){

            cout << "Y" << endl;
        }
        else
            cout << "N" << endl;
    }

    return 0;
}
