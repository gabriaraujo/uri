#include <iostream>
#include <algorithm>
using namespace std;

int main(){

  int A1, A2, A3, tempo[3];

  cin >> A1 >> A2 >> A3;

    tempo[0] = A2 * 2 + A3 * 4;
    tempo[1] = A1 * 2 + A3 * 2;
    tempo[2] = A1 * 4 + A2 * 2;

    sort(tempo, tempo + 3);


  cout << tempo[0] << endl;

  return 0;
}
