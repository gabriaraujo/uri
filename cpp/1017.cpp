#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int tempo, velocidade;
  double consumo;

  cin >> tempo >> velocidade;

  consumo = (velocidade * tempo) / 12.0;

  cout << fixed << setprecision(3) << consumo << endl;

  return 0;
}
