#include <iostream>
using namespace std;

int main(){

    int N, contador = 0;

    cin >> N;

        for (int i = 1; i <= N; i++){

            for (int j = 0; j < 4; j++){

                contador ++;
                if (contador % 4 == 0)
                    cout << "PUM" << endl;

                else
                    cout << contador << " ";
            }
        }

    return 0;
}
