#include <iostream>
using namespace std;

int main (){

    int aux[20], n[20];

    for (int i = 0; i < 20; i++){

        cin >> n[i];
    }
    for (int i = 0; i < 20; i ++){
        aux[i] = n[19 - i];

        cout << "N[" << i << "] = " << aux[i] << endl;
    }

    return 0;
}
