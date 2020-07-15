#include <iostream>
using namespace std;

int main(){

  int n, anterior = 0, proximo = 1;

  cin >> n;

  if (n != 0){

      cout << anterior << " ";

        for (int i = 1; i < n; i++){

            cout << proximo;

            proximo = anterior + proximo;
            anterior = proximo - anterior;


            if (i < n - 1)
                cout << " ";

        }
    }

  cout << endl;

  return 0;
}
