#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  char nome[100];
  double salario, vendas, total;

  cin >> nome >> salario >> vendas;

  total = salario + vendas * ((double) 15 / 100);

  cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;

  return 0;
}
