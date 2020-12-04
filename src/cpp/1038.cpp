#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int cod, quant;

  cin >> cod >> quant;
  cout << fixed << setprecision(2);

  switch (cod){
    case 1:
      cout << "Total: R$ " << 4.00 * quant << endl;
      break;

    case 2:
      cout << "Total: R$ " << 4.50 * quant << endl;
      break;

    case 3:
      cout << "Total: R$ " << 5.00 * quant << endl;
      break;

    case 4:
      cout << "Total: R$ " << 2.00 * quant << endl;
      break;

    case 5:
      cout << "Total: R$ " << 1.50 * quant << endl;
      break;
  }

  return 0;
}
