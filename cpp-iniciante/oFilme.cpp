#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    double va, vn;

    cin >> va >> vn;

    cout << fixed << setprecision (2);
    cout << ((vn / va) - 1) * 100 << "%" << endl;

    return 0;
}
