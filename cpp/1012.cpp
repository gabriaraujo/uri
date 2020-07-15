#include <iostream>
#include <iomanip>
using namespace std;

int main (){

  double A, B ,C;

  cin >> A >> B >> C;

  cout << fixed << setprecision(3)
       << "TRIANGULO: " << (A * C) / 2
       << "\nCIRCULO: " << 3.14159 * C * C
       << "\nTRAPEZIO: " << ((A + B) * C) / 2
       << "\nQUADRADO: " << B * B
       << "\nRETANGULO: " << A * B << endl;

  return 0;
}
