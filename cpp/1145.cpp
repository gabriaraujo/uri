#include <iostream>
using namespace std;

int main (){

    int x, y;

    cin >> x >> y;

    for (int i = 1; i <= y; ){
        for (int j = 1; j <= x; j++){

            cout << i;

            i++;

            if (j != x)
                cout << " ";
        }

        cout << endl;
    }

    return 0;    
}
