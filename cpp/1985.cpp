#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int p, q, codigo;
    double preco = 0;

    cin >> p;

    if (p >= 1 && p <= 5){

        for (int i = 0; i < p; i++){

            cin >> codigo;

            switch (codigo){

                case 1001:
                    cin >> q;
                    preco += q * 1.50;
                    break;

                case 1002:
                    cin >> q;
                    preco += q * 2.50;
                    break;

                case 1003:
                    cin >> q;
                    preco += q * 3.50;
                    break;

                case 1004:
                    cin >> q;
                    preco += q * 4.50;
                    break;

                case 1005:
                    cin >> q;
                    preco += q * 5.50;
                    break;
            }
        }
    }

    cout << fixed << setprecision (2) << preco << endl;

    return 0;
}
