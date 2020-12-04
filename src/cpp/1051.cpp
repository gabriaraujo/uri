#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double salario, resto, imposto;

  cin >> salario;

  cout << fixed << setprecision (2);

  if (salario >= 0 && salario <= 2000)
    cout << "Isento" << endl;

  else if (salario >= 2000.01 && salario <= 3000){

    resto = salario - 2000;
    imposto = resto * 8.0 / 100.0;

    cout << "R$ " << imposto << endl;
  }
  else if (salario >= 3000.01 && salario <= 4500){

    resto = salario - 3000;
    imposto = (resto * 18.0 / 100.00) + 80.0;

    cout << "R$ " << imposto << endl;
  }
  else if (salario > 4500){

    resto = salario - 4500;
    imposto = (resto * 28.0 / 100.00) + 350;

    cout << "R$ " << imposto << endl;
  }

  return 0;
}
