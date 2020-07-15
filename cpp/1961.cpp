#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int p, n, win = 0;

    cin >> p >> n;

    int h[n];

    for (int i = 0; i < n; i++){

        cin >> h[i];
    }

    for (int i = 0; i < n - 1; i++){

        if ((h[i] + p) - h[i + 1] >= 0 && abs(h[i + 1] - h[i]) <= p)
            win++;

        else {
            win = 0;
            break;
        }
    }

    if (win > 0)
        cout << "YOU WIN" << endl;

    else
        cout << "GAME OVER" << endl;

    return 0;
}
