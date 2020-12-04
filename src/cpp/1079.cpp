#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int N;
  double v1, v2, v3, soma;

  cin >> N;

  for (int i = 0; i < N; i++){

    cin >> v1 >> v2 >> v3;

    soma = v1 * 2 + v2 * 3 + v3 * 5;
    cout << fixed << setprecision(1) << soma / 10 << endl;
  }

  return 0;
}
