#include <iostream>
using namespace std;

int main (){

    int n, c;

    cin >> n;

    for (int i = 0; i < n; i++){

        cin >> c;

        if (c > 8000)
            cout << "Mais de 8000!" << endl;
        else
            cout << "Inseto!" << endl;

    }

    return 0;
}
