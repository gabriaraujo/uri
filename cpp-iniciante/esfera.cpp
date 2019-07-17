#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

  double VOLUME, R, pi = 3.14159;

  cin >> R;

  VOLUME = (4.0 / 3.0) * pi * powl(R, 3);

  cout << fixed << setprecision(3) << "VOLUME = " << VOLUME << endl;

  return 0;
}
