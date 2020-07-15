#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int cod1, n1, cod2, n2;
  double valor1, valor2, total;

  cin >> cod1 >> n1 >> valor1;
  cin >> cod2 >> n2 >> valor2;

  total = n1 * valor1 + n2 * valor2;

  cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;

  return 0;
}
