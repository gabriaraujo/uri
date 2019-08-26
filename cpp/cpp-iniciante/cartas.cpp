#include <bits/stdc++.h>
using namespace std;

int main (){

    int carta[5];

    for (int i = 0; i < 5; i++)
        cin >> carta[i];

    int ord = 0, des = 0;
    for (int i = 0; i < 4; i++) {
        if (carta[i] < carta[i + 1])
            ord++;
        else
            des++;
    }

    if (ord == 4)
        cout << "C" << endl;
    else if (des == 4)
        cout << "D" << endl;
    else
        cout << "N" << endl;

    return 0;
}
