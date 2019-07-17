#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

  double N1, N2, N3, N4, NE, MEDIA;

  cin >> N1 >> N2 >> N3 >> N4;
  cout << fixed << setprecision(1);

  MEDIA = (N1 * 2 + N2 * 3 + N3 *4 + N4 * 1) / 10;

  if (MEDIA >= 7.0){

    cout << "Media: " << MEDIA << endl;
    cout << "Aluno aprovado." << endl;
  }
  else if (MEDIA >= 5.0){

    cout << "Media: " << MEDIA << endl;
    cout << "Aluno em exame." << endl;
    cin >> NE;
    cout << "Nota do exame: ";
    cout << NE << endl;

    MEDIA = (MEDIA + NE) / 2;

    if (MEDIA >= 5.0){

      cout << "Aluno aprovado." << endl;
      cout << "Media final: " << MEDIA << endl;
    }
    else {

      cout << "Aluno reprovado." << endl;
      cout << "Media final: " << MEDIA << endl;
    }
  }
  else {

    cout << "Media: " << MEDIA << endl;
    cout << "Aluno reprovado." << endl;
  }

  return 0;
}
