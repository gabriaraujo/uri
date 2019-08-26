#include <iostream>
using namespace std;

int main (){

  double N;
  int M;

  cin >> N;

  if (N > 0 && N < 1000000.00){

    M = int (N);
    cout << "NOTAS:" << endl;
    cout << M / 100 << " nota(s) de R$ 100.00" << endl;
    cout << (M % 100) / 50 << " nota(s) de R$ 50.00" << endl;
    cout << (M % 100 % 50) / 20 << " nota(s) de R$ 20.00" << endl;
    cout << (M % 100 % 50 % 20) / 10 << " nota(s) de R$ 10.00" << endl;
    cout << (M % 100 % 50 % 20 % 10) / 5 << " nota(s) de R$ 5.00" << endl;
    cout << (M % 100 % 50 % 20 % 10 % 5) / 2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << (M % 100 % 50 % 20 % 10 % 5 % 2) << " moeda(s) de R$ 1.00" << endl;

    M = (N - M) * 100;

    cout << M / 50 << " moeda(s) de R$ 0.50" << endl;
    cout << (M % 50) / 25 << " moeda(s) de R$ 0.25" << endl;
    cout << (M % 50 % 25) / 10 << " moeda(s) de R$ 0.10" << endl;
    cout << (M % 50 % 25 % 10) / 5 << " moeda(s) de R$ 0.05" << endl;
    cout << (M % 50 % 25 % 10 % 5) << " moeda(s) de R$ 0.01" << endl;
  }

  return 0;
}
