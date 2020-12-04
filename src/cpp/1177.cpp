#include <iostream>
using namespace std;

int main (){

    int n[1000], t;

    cin >> t;

    for (int i = 0; i < 1000; ){

        for (int j = 0; j < t; j++){
            n[i] = j;
            cout << "N[" << i << "] = " << n[i] << endl;
            i++;

            if (i == 1000)
                break;
        }
    }

    return 0;
}
