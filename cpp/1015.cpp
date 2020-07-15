#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

  double x1, x2, y1, y2, distancia;

  cin >> x1 >> y1;
  cin >> x2 >> y2;

  distancia = sqrt(powl(x2 - x1, 2) + powl(y2 - y1, 2));

  cout << fixed << setprecision(4) << distancia << endl;

  return 0;
}
