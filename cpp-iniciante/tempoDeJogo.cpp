#include <iostream>
using namespace std;

int main(){

  int in, fl, tempo = 0;

  cin >> in >> fl;

  if (in == 24){

    in = 0;
  }
  if (in < fl){

    tempo = fl - in;
  }
  else {

    for (int i = in; i < 24; i++){

      tempo++;

      if (i == 23){
        for (int i = 0; i < fl; i++){

          tempo++;
        }
      }
    }
  }

  if (tempo >= 1 && tempo <= 24)

  cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;

  return 0;
}
