#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int n;
    long a, b;

    cin >> n;

    for (int i = 0; i < n; i++){

        cin >> a >> b;

        for (int j = 1; ; j++){

            if (a % (int) pow (10, j) == b){
                cout << "encaixa" << endl;
                break;
            }

            else if (a / (int) pow (10, j) == 0){
                cout << "nao encaixa" << endl;
                break;
            }
        }
    }

    return 0;
}
