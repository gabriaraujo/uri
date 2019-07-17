#include <iostream>
using namespace std;

int main(){

    int J = 7;

    for (int i = 1; i <= 9; i += 2){

        for (int j = J ; j >= J - 2; j--){

            cout << "I=" << i << " J=" << j << endl;
        }
        J += 2;
    }

    return 0;
}
