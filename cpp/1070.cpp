#include <iostream>
using namespace std;

int main(){

  int X, i = 0;

  cin >> X;

  while (i < 6){

    X++;

    if (X % 2 != 0){
      cout << X << endl;
      i++;
    }
  }

  return 0;
}
