#include <iostream>
using namespace std;

int main (){

  int X, Y, N;

  cin >> N;

  for (int i = 0; i < N; i++){

    int soma = 0;

    cin >> X >> Y;

    if (X >= Y) {

      for (int j = Y + 1; j < X; j++){

        if (j % 2 != 0)
          soma += j;
        }
    }
    else {

      for (int j = X + 1; j < Y; j++){

        if (j % 2 != 0)
          soma += j;
      }
    }

    cout << soma << endl;
  }

  return 0;
}
