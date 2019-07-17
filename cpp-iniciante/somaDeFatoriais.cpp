#include <iostream>
using namespace std;

long long fat (int);

int main (){

    int m, n;

    while (cin >> m >> n){

        cout << fat(m) + fat(n) << endl;
    }

    return 0;
}

long long fat(int x){

    long long fat = 1;

    for (int i = 1; i <= x; i++){

        fat *= i;
    }

    return fat;
}
