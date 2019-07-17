#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int num, horas;
  double salario, horaTrabalhada;

  cin >> num >> horas >> horaTrabalhada;

  salario = horas * horaTrabalhada;

  cout << "NUMBER = " << num << endl;
  cout << fixed << setprecision(2) << "SALARY = U$ " << salario << endl;

  return 0;
}
