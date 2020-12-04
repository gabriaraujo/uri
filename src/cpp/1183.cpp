#include <iostream>
#include <iomanip>
#define TAM 12
using namespace std;

void leMatriz (double [][TAM], int);
double somaMatriz (double [][TAM], int, int &);
double mediaMatriz (double [][TAM], int, int);

int main (){

    char op;
    double mat[TAM][TAM];
    int cont = 0;

    cin >> op;
    cout << fixed << setprecision (1);

    leMatriz(mat, TAM);

    if (op == 'S')
        cout << somaMatriz (mat, TAM, cont) << endl;

    else if (op == 'M')
        cout << mediaMatriz (mat, TAM, cont) << endl;

    return 0;
}

void leMatriz (double mat[][TAM], int tamanho){

    for (int i = 0; i < tamanho; i++)
        for (int j = 0; j < tamanho; j++)
            cin >> mat[i][j];

}

double somaMatriz (double mat[][TAM], int tamanho, int &cont){

    double soma = 0;

    for (int i = 0; i < tamanho - 1; i++)
        for (int j = i + 1; j < tamanho; j++){
            soma += mat[i][j];
            cont++;
        }

    return soma;
}

double mediaMatriz (double mat[][TAM], int tamanho, int cont){

    double media = somaMatriz (mat, TAM, cont) / cont;

    return media;
}
