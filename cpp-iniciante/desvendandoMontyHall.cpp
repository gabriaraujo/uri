#include <iostream>
using namespace std;

int main(){

  int N, porta, vitoria = 0;

  cin >> N;

  for (int i = 0; i < N; i++){

    cin >> porta;

    if (porta != 1)
      vitoria++;
    }

  cout << vitoria << endl;

  return 0;
}
