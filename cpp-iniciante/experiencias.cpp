#include <iostream>
#include <iomanip>
using namespace std;

int main (){

  int quantia, total = 0, n, coelho = 0, sapo = 0, rato = 0;
  char tipo;

  cin >> quantia;

  for (int i = 0; i < quantia; i++){

    cin >> n >> tipo;

    if (tipo == 'C'){

      coelho += n;
      total += n;
    }
    else if (tipo == 'S'){
      sapo += n;
      total += n;
    }
    else if (tipo == 'R'){
      rato += n;
      total += n;
    }
  }

  cout << fixed << setprecision (2);
  cout << "Total: " << total << " cobaias" << endl;
  cout << "Total de coelhos: " << coelho << endl;
  cout << "Total de ratos: " << rato << endl;
  cout << "Total de sapos: " << sapo << endl;
  cout << "Percentual de coelhos: " << (double) coelho / total * 100 << " %" << endl;
  cout << "Percentual de ratos: " << (double) rato / total * 100 << " %" << endl;
  cout << "Percentual de sapos: " << (double) sapo / total * 100 << " %" << endl;
}
