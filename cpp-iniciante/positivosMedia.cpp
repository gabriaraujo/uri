#include <iostream>
#include <iomanip>
using namespace std;

int main (){

  double num, soma = 0;
  int pos = 0;

  cout << fixed << setprecision(1);

  for (int i = 0; i < 6; i++){

    cin >> num;

    if (num > 0){
      soma += num;
      pos++;
    }
  }

  cout << pos << " valores positivos" << endl;
  cout << soma / pos << endl;

  return 0;
}
