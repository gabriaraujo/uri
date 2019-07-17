#include <iostream>
using namespace std;

int main (){

    int a, b, q;

    cin >> a >> b;

    q = a / b;

    cout << q << " " << a - (b * q) << endl;

    return 0;
}
