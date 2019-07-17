#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int num, dig;

    while (cin >> num){

        int cont = 0;

        for (int i = 2; i <= sqrt (num); i++)
            if (num % i == 0){
                cont++;
                break;
            }

        if (num == 1 || num == 0)
            cont ++;

        if (cont > 0)
            cout << "Nada" << endl;

        else{
            for (int i = 1; ; i++){

                dig = (num % (int) pow (10, i)) / (int) pow (10, i - 1);

                if (dig == 1 || dig == 0)
                    cont++;

                for (int j = 2; j <= sqrt (dig); j++)
                    if (dig % j == 0){
                        cont++;
                        break;
                    }

                if (cont > 0)
                    break;

                else if ((int) (num / pow (10, i)) == 0)
                    break;
            }

            if (cont > 0)
                cout << "Primo" << endl;

            else
                cout << "Super" << endl;
        }
    }

    return 0;
}
