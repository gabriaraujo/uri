#include <iostream>
#include <cstring>
using namespace std;

int main (){

  char tipoAnimal[100];

  cin >> tipoAnimal;

  if (strcmp(tipoAnimal, "vertebrado") == 0){

    cin >> tipoAnimal;

    if (strcmp(tipoAnimal, "ave") == 0){

      cin >> tipoAnimal;

      if (strcmp(tipoAnimal, "carnivoro") == 0)
        cout << "aguia" << endl;

      else if (strcmp(tipoAnimal, "onivoro") == 0)
        cout << "pomba" << endl;
    }
    else if (strcmp(tipoAnimal, "mamifero") == 0){

      cin >> tipoAnimal;

      if (strcmp(tipoAnimal, "onivoro") == 0)
        cout << "homem" << endl;

      else if (strcmp(tipoAnimal, "herbivoro") == 0)
        cout << "vaca" << endl;
    }
  }
  else if (strcmp(tipoAnimal, "invertebrado") == 0){

    cin >> tipoAnimal;

    if (strcmp(tipoAnimal, "inseto") == 0){

      cin >> tipoAnimal;

      if (strcmp(tipoAnimal, "hematofago") == 0)
        cout << "pulga" << endl;

      else if (strcmp(tipoAnimal, "herbivoro") == 0)
        cout << "lagarta" << endl;
    }
    else if (strcmp(tipoAnimal, "anelideo") == 0){

      cin >> tipoAnimal;

      if (strcmp(tipoAnimal, "hematofago") == 0)
        cout << "sanguessuga" << endl;

      else if (strcmp(tipoAnimal, "onivoro") == 0)
        cout << "minhoca" << endl;
    }
  }

  return 0;
}
