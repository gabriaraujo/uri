#include <iostream>
using namespace std;

int main(){

  int num, pos = 0, neg = 0, par = 0, impar = 0;

  for (int i = 0; i < 5; i++){

    cin >> num;

    if (num % 2 == 0)
      par++;
    else
      impar ++;

    if (num > 0)
      pos++;
    else if (num < 0)
      neg++;
  }

  cout << par << " valor(es) par(es)" << endl;
  cout << impar << " valor(es) impar(es)"<< endl;
  cout << pos << " valor(es) positivo(s)" << endl;
  cout << neg << " valor(es) negativo(s)" << endl;

  return 0;
}
