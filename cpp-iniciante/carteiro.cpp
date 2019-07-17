#include <bits/stdc++.h>
using namespace std;

int main() {

    int m, n;
    cin >> m >> n;

    int* casa = new int[m];
    int* enco = new int[n];

    for (int i = 0; i < m; i++) {
        cin >> casa[i];
    }
    for (int i = 0; i < n; i++){
        cin >> enco[i];
    }

    int tempo = 0;

    int i = 0;
    int position = 0;
    while (i < n) {

        if (casa[position] <= enco[i]) {
            for (int j = i; j < m; j++) {
                if (casa[position] == enco[i])
                    break;

                position++;
                tempo++;
            }
        }
        else {
            for (int j = i; j >= 0; j--) {
                if (casa[position] == enco[i])
                    break;

                position--;
                tempo++;
            }
        }

        i++;
    }

    cout << tempo << endl;

    delete[] casa;
    delete[] enco;

    return 0;
}
