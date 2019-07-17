#include <iostream>
using namespace std;

int main () {

    long long int has, op;

    while (cin >> has >> op){

        cout << abs (has - op) << endl;
    }

    return 0;
}
