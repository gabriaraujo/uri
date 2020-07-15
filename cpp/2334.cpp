#include <iostream>
#include <cstring>
using namespace std;

int main (){

    unsigned long long int p;

    while (true){

        cin >> p;

        if (p == -1)
            break;

        else if (p == 0)
            cout << "0" << endl;

        else
            cout << p - 1 << endl;
    }

    return 0;
}
