#include <iostream>
using namespace std;

int main(){

  int val[100], maior = 0, pos = 0;

  for (int i = 0; i < 100; i++){

    cin >> val[i];

    if (val[i] > maior){
      maior = val[i];
      pos = i + 1;
    }
  }

  cout << maior << endl;
  cout << pos << endl;

  return 0;
}
