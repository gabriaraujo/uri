#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    int contador = 0, somaIdades = 0, idade;

    do {

         cin >> idade;

         if(idade > 0){

         contador ++;
         somaIdades += idade;
     }
    } while (idade > 0);

    cout << fixed << setprecision (2) << (double) somaIdades / contador << endl;

    return 0;
}
