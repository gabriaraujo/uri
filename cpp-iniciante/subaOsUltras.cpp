#include <iostream>
using namespace std;

int main (){

    int cume1 = 0, cume2 = 0, base, n, posicao;

    while (cin >> n){ //recebe as entradas até o fim do arquivo

        int cume[n];

        for (int i = 0; i < n; i++){ // lê todas as entrada

            cin >> cume[i];

        }

        /*usei cume1 e cume2 para ser os dois cumes entre a base, que é
        o vale entre eles, para realizar o cálculo da proeminência */

        //cume1 começa já da 2 posição do vetor pois a primeira é sempre zero
        cume1 = cume[1];
        base = cume1;
        //base começa com o valor de cume1 até encontrar um valor menor

        for (int i = 2; i < n ; i++){

            /* substitui o valor de cume1 pelo próximo valor maior
            para garantir que o valor de cume1 é realmente o valor
            de um cume e não simplesmente um ponto mais elevado qualquer */

            if (cume[i] > cume1){
                cume1 = cume[i];
                /* base recebe sempre cume1 para depois conseguir encontrar
                um valor menor para subtituí-la */
                base = cume1;
                /* cume2 recebe cume1 para depos conseguir encontrar o valor
                de um cume imediatamente maior que o cume1 */
                cume2 = cume1;
                /* a contagem da posição também é feita aqui para caso haja
                somente um cume */
                posicao = i + 1;
            }

            /* comparação para definir o valor da base, que é quando
            a linha do gráfico começa a decrescer */

            else if (cume[i] < base)
                base = cume[i];

            /* o último else serve para definir o valor de cume2, que será
            maior ou igual ao cume1 */

            else {
                for (int j = i; cume[j] - cume2 >= 0 ; j++){
                    if (cume[j] > cume2){
                        cume2 = cume[j];
                        posicao = j + 1; //salva a posição de cume2
                        /* cume1 recebe cume2 para ser usado nas próximas
                        comparações que serão realizadas, pois a próxima
                        base estará entre o cume2 e o próximo cume */
                        cume1 = cume2;
                    }
                }
            }
            //define se o cume é um ultra ou não
            if (cume2 - base >= 150000){
                cout << posicao << " ";
                i = posicao;
                cume2 = 0;
                /* cume2 recebe 0 para que o if não seja verdadeiro até
                encontrar o próximo valor de cume2 */
                base = cume1;
                //base recebe cum1 para depois encontrar um valor menor
            }
        }

        cout << endl;
    }

    return 0;
}
