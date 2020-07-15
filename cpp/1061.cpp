#include <iostream>
using namespace std;

int main (){

  char doisPontos;
  string diaEsc;
  int diaIni, diaF;
  int tempoIni[3], tempoF[3];
  long long timeIni, timeF, timeTotal;
  int W = 0, X = 0, Y = 0, Z = 0;

  cin >> diaEsc >> diaIni;
  cin >> tempoIni[0] >> doisPontos >> tempoIni[1] >> doisPontos >> tempoIni[2];

  cin >> diaEsc >> diaF;
  cin >> tempoF[0] >> doisPontos >> tempoF[1] >> doisPontos >> tempoF[2];

  timeIni = (diaIni * 24 * 60 * 60) + (tempoIni[0] * 60 * 60) + (tempoIni[1] * 60) + (tempoIni[2]);
  timeF = (diaF * 24 * 60 * 60) + (tempoF[0] * 60 * 60) + (tempoF[1] * 60) + (tempoF[2]);

  timeTotal = timeF - timeIni;

  if (timeTotal >= 60){

    W = timeTotal / 60 / 60 / 24;
    X = timeTotal / 60 / 60 % 24;
    Y = timeTotal / 60 % 60;
    Z = timeTotal % 60;
  }

  cout << W << " dia(s)" << endl;
  cout << X << " hora(s)" << endl;
  cout << Y << " minuto(s)" << endl;
  cout << Z << " segundo(s)" << endl;

  return 0;
}
