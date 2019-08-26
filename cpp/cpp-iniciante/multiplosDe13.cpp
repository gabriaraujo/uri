#include <iostream>
using namespace std;

int main (){

    int X, Y, soma = 0;

    cin >> X >> Y;

    if (X > Y){

        for (int i = Y; i <= X; i++){

            if (i % 13 != 0)
                soma += i;
        }
    }
    else if (X < Y){

        for (int i = X; i <= Y; i++){

            if (i % 13 != 0)
                soma += i;
        }
    }

    cout << soma << endl;

    return 0;
}
