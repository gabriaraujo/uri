#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  double raio, area, pi;
  pi = 3.14159;

  cin >> raio;
  area = powl(raio, 2) * pi;

  cout << fixed << setprecision(4) << "A=" << area << endl;

  return 0;
}
