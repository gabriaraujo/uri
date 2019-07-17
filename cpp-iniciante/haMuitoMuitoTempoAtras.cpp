#include <iostream>
using namespace std;

int main (){

    int t, ano;

    cin >> t;

    for (int i = 0; i < t; i++){

        cin >> ano;

        if (2015 - ano > 0)
            cout << 2015 - ano << " D.C." << endl;

        else
            cout << (-1) * (2015 - ano) + 1 << " A.C." << endl;
    }

    return 0;
}
