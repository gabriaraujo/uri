#include <iostream>
using namespace std;

int main (){

  int N, R, maria, joao;

  while (true){

    maria = 0;
    joao = 0;

    cin >> N;

    if (N == 0)
      break;

    for (int i = 0; i < N; i++){

      cin >> R;

      if (R == 0)
        maria++;
      else if (R == 1)
        joao++;
    }

    cout << "Mary won " << maria << " times and John won " << joao << " times";
    cout << endl;
  }
}
