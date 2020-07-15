#include <iostream>
using namespace std;

unsigned long long int fibonacci (int);

int main (){

    int t, n;

    cin >> t;

    for (int i = 0; i < t; i++){

        cin >> n;

        cout << "Fib(" << n << ") = " << fibonacci (n) << endl;
    }

        return 0;
}

unsigned long long int fibonacci (int n){

    unsigned long long int fib[61];

    fib[0] = 0;
    fib[1] = 1;

    if (n == 0)
        return fib[0];

    if (n == 1)
        return fib[1];

    for (int i = 2; i <= n; i++){
        fib[i] = fib[i - 1] + fib [i - 2];
    }

    return fib[n];
}
