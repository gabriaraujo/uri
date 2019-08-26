#include <iostream>
#include <cstring>
using namespace std;

int main (){

    int c;
    string resp;

    cin >> c;

    for (int i = 0; i < c + 1; i++){

        getline (cin, resp);

        if (i != 0)
            cout << "gzuz" << endl;
    }

    return 0;
}
