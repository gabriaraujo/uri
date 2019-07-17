#include <iostream>
#include <cmath>
using namespace std;

double r (int, int);
double b (int, int);
double c (int, int);

int main (){

    int n, x, y;

    cin >> n;

    for (int i = 0; i < n; i++){

        cin >> x >> y;

        if (r(x, y) > b(x, y) && r (x, y) > c(x ,y))
            cout << "Rafael ganhou" << endl;

        else if (b(x, y) > r(x, y) && b(x, y) > c (x, y))
            cout << "Beto ganhou" << endl;

        else if (c(x, y) > r(x, y) && c(x, y) > b (x, y))
            cout << "Carlos ganhou" << endl;
    }

    return 0;
}

double r(int x, int y){

    double r = pow(3 * x, 2) + pow(y, 2);

    return r;
}

double b(int x, int y){

    double b = 2 * pow(x, 2) + pow(5 * y, 2);

    return b;
}

double c(int x, int y){

    double c = -100 * x + pow (y, 3);

    return c;
}
