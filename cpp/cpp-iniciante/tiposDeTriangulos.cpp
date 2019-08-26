#include <iostream>
#include <algorithm>
using namespace std;

int main(){

  double A, B, C, vet[3];

  cin >> A >> B >> C;

  if (A > 0 && B > 0 && C > 0){

  vet[0] = A;
  vet[1] = B;
  vet[2] = C;

  sort(vet, vet+3);

  A = vet[2];
  B = vet[1];
  C = vet[0];

    if (A >= (B + C))

      cout << "NAO FORMA TRIANGULO" << endl;

    else if (A * A > B * B + C * C)

     cout << "TRIANGULO OBTUSANGULO" << endl;

    if (A * A == B * B + C * C)

      cout << "TRIANGULO RETANGULO" << endl;

    if (A * A < B * B + C * C)

      cout << "TRIANGULO ACUTANGULO" << endl;

    if (A == B && A == C && B == C)

      cout << "TRIANGULO EQUILATERO" << endl;

    if ((A == B && A != C) || (B == C && B != A) || (A == C &&  A != B))

      cout << "TRIANGULO ISOSCELES" << endl;
  }

  return 0;
}
