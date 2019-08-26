#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    cout << "---------------------------------------" << endl;

    for (int i = 0; i < 5; i++){

        if (i == 0)
            cout << "|" << setw(15) << "Roberto" << setw(23) << "|" << endl;

        else if (i == 2)
            cout << "|" << setw(12) << "5786" << setw(26) << "|" << endl;

        else if (i == 4)
            cout << "|" << setw(14) << "UNIFEI" << setw(24) << "|" << endl;

        else
            cout << "|" << setw(38) << "|" << endl;
    }

    cout << "---------------------------------------" << endl;

    return 0;
}
