#include <iostream>
#include <iomanip>
using namespace std;

int main (){

  int H, P;

  cin >> H >> P;

  cout << fixed << setprecision (2) << (double) H / P << endl;

  return 0;
}
