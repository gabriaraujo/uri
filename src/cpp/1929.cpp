#include <iostream>
#include <algorithm>
using namespace std;

int main (){

    int a, b, c, d, vet[4], cont = 0;

    cin >> a >> b >> c >> d;
// 86 23 39 21
    vet[0] = a; //86
    vet[1] = b; //23
    vet[2] = c; //39
    vet[3] = d; //21

    sort(vet, vet + 4);

    a = vet[3]; //86
    b = vet[2]; //39
    c = vet[1]; //23
    d = vet[0]; //21

    if (b >= c + d)
        cont++;
    if (a >= c + b)
        cont++;

    if (cont > 1)
        cout << "N" << endl;
    else
        cout << "S" << endl;

    return 0;
}
