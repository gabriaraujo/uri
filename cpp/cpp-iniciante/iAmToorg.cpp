#include <iostream>
#include <cstring>
using namespace std;

int main (){

    int c;
    string resp;

    cin >> c;

    for (int i = 0; i <= c; i++){

        getline (cin, resp);

        if (i != 0)
            cout << "I am Toorg!" << endl;
    }

    return 0;
}
