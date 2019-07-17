#include <iostream>
using namespace std;

int main (){

    int n, p, q, resp;
    char op;

    cin >> n;

    cin >> p >> op >> q;

    switch (op) {

        case '+':
            resp = p + q;
            break;

        case '*':
            resp = p * q;
            break;
    }

    if (resp > n)
        cout << "OVERFLOW" << endl;

    else
        cout << "OK" << endl;

    return 0;
}
