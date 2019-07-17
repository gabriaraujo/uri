#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double salario, reajuste;

  cout << fixed << setprecision (2);

  cin >> salario;

  if (salario >= 0 && salario <= 400){

    reajuste = salario * 15.0 / 100.0;
    salario += salario * 15.0 / 100.0;

    cout << "Novo salario: " << salario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: 15 %" << endl;
  }
  else if (salario <= 800){

    reajuste = salario * 12.0 / 100.0;
    salario += salario * 12.0 / 100.0;

    cout << "Novo salario: " << salario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: 12 %" << endl;
  }
  else if (salario <= 1200){

    reajuste = salario * 10.0 / 100.0;
    salario += salario * 10.0 / 100.0;

    cout << "Novo salario: " << salario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: 10 %" << endl;
  }
  else if (salario <= 2000){

    reajuste = salario * 7.0 / 100.0;
    salario += salario * 7.0 / 100.0;

    cout << "Novo salario: " << salario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: 7 %" << endl;
  }
  else if (salario > 2000){

    reajuste = salario * 4.0 / 100.0;
    salario += salario * 4.0 / 100.0;

    cout << "Novo salario: " << salario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: 4 %" << endl;
  }

  return 0;
}
