#include <iostream>
#include <algorithm>
using namespace std;

int main (){

    int t, rapida;

    while (cin >> t){

        int lesmas[t];

        for (int i = 0; i < t; i++){

            cin >> lesmas[i];
        }

        sort(lesmas, lesmas + t);

        rapida = lesmas[t - 1];

        if (rapida < 10)
            cout << 1 << endl;
        else if (rapida < 20)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }

    return 0;
}
