#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    cout << "---------------------------------------" << endl;

    for (int i = 0; i < 5; i++){

        if (i == 0)
            cout << "|" << "x = 35" << setw(32) << "|" << endl;

        else if (i == 2)
            cout << "|" << setw(21) << "x = 35" << setw(17) << "|" << endl;

        else if (i == 4)
            cout << "|" << setw(37) << "x = 35" << "|" << endl;

        else
            cout << "|" << setw(38) << "|" << endl;
    }

    cout << "---------------------------------------" << endl;

    return 0;
}
