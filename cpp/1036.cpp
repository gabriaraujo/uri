#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){

  double A, B, C, delta, R1, R2;

  cin >> A >> B >> C;

  delta = B * B - 4 * A * C;
  R1 = (- B + sqrt(delta)) / (2 * A);
  R2 = (- B - sqrt(delta)) / (2 * A);

  if (A == 0){

    cout << "Impossivel calcular" << endl;
  }

  else if (delta < 0){

    cout << "Impossivel calcular" << endl;
  }

  else {

    cout << fixed << setprecision(5) << "R1 = " << R1 << endl;
    cout << "R2 = " << R2 << endl;
  }

  return 0;
}
