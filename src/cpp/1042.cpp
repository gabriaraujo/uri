#include <iostream>
#include <algorithm>
using namespace std;

int main(){

  int n[3], n1, n2, n3;

  cin >> n[0] >> n[1] >> n[2];

  n1 = n[0];
  n2 = n[1];
  n3 = n[2];

  sort(n, n+3);

  cout << n[0] << endl;
  cout << n[1] << endl;
  cout << n[2] << endl;
  cout << endl;
  cout << n1 << endl;
  cout << n2 << endl;
  cout << n3 << endl;

  return 0;
}
