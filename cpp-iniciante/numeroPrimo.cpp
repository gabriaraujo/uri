#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int N, X, cont = 0;

    cin >> N;

    for (int i = 0; i < N; i++){

        cin >> X;

        for (int j = 2; j <= sqrt(X); j++){

            if (X % j == 0)
                cont++;
        }

        if (cont > 0){

            cout << X << " nao eh primo" << endl;
            cont = 0;
        }
        else
            cout << X << " eh primo" << endl;
    }


    return 0;
}
