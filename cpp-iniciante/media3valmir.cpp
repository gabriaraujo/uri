#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	double N1, N2 ,N3 ,N4 , media, nota;

	cin >> N1 >> N2 >> N3 >> N4;

	media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + N4) / 10;

	cout << "Media: "<< fixed << setprecision(1) << media << endl;

	if (media >= 7){

		cout << "Aluno aprovado."<< endl;
	}
  else if (media < 5){

    cout << "Aluno reprovado."<< endl;
	}
  else if (media >= 5){

    cout << "Aluno em exame."<< endl;
		cin >> nota;

    cout << "Nota do exame: "<< fixed << setprecision(1) << nota << endl;

    media = (media + nota) / 2;

    if(media >= 5){

      cout << "Aluno aprovado." << endl;
		}
    else {
			cout << "Aluno reprovado." << endl;
		}

	cout << "Media final: "<< fixed << setprecision(1) << media << endl;
	}

	return 0;
}
