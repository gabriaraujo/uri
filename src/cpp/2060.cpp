#include <iostream>
using namespace std;

int main (){

    int n, num, vet[4] = {0, 0, 0, 0};

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> num;

    if (num % 2 == 0)
        vet[0]++;

    if (num % 3 == 0)
        vet[1]++;

    if (num % 4 == 0)
        vet[2]++;

    if (num % 5 == 0)
        vet[3]++;
    }

    cout << vet[0] << " Multiplo(s) de 2" << endl;
    cout << vet[1] << " Multiplo(s) de 3" << endl;
    cout << vet[2] << " Multiplo(s) de 4" << endl;
    cout << vet[3] << " Multiplo(s) de 5" << endl;

    return 0;
}
