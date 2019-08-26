#include <iostream>
using namespace std;

int main(){

    int M, N, soma;

    while (true) {

        cin >> M >> N;

        if (M <= 0 || N <= 0)
            break;

        else if (M > N){

            soma = 0;

            for (int i = N; i <= M; i++){

                cout << i << " ";
                soma += i;
            }

            cout << "Sum=" << soma << endl;
        }

        else {

            soma = 0;

            for (int i = M; i <= N; i++){

                cout << i << " ";
                soma += i;
            }

            cout << "Sum=" << soma << endl;
        }
    }

    return 0;
}
