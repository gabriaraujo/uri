#include <iostream>
using namespace std;

int main(){

  int horaInicial, horaFinal, minInicial, minFinal, minDuracao, horaDuracao;
  int tempoInicial, tempoFinal;

  cin >> horaInicial >> minInicial >> horaFinal >> minFinal;

  tempoInicial = horaInicial * 60 + minInicial;
  tempoFinal = horaFinal * 60 + minFinal;

    if (tempoFinal - tempoInicial == 0){

      horaDuracao = 24;
      minDuracao = 0;
    }
    else if (tempoFinal - tempoInicial > 0){

      horaDuracao = (tempoFinal - tempoInicial) / 60;
      minDuracao = (tempoFinal - tempoInicial) % 60;
    }

    else if (tempoFinal - tempoInicial < 0){
      horaDuracao = (24 * 60 - tempoInicial + tempoFinal) / 60;
      minDuracao = (24 * 60 - tempoInicial + tempoFinal) % 60;
  }

    cout << "O JOGO DUROU " << horaDuracao << " HORA(S) E "
         << minDuracao << " MINUTO(S)" << endl;

  return 0;
}
