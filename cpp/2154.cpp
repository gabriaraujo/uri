#include <iostream>
using namespace std;

void derivada (int, int);

int main (){

    int t, c, e;
    char x, mais;

    while (cin >> t){

        for (int i = 0; i < t; i++){

            cin >> c >> x >> e;

            if (i < t - 1)
                cin >> mais;

            derivada (c, e);

            if (i < t - 1)
                cout << " + ";
            }

            cout << endl;
        }

        return 0;
}

void derivada (int c, int e){

    if (e != 2)
        cout << (c * e) << "x" << e - 1;

    else
        cout << (c * e) << "x";
}
