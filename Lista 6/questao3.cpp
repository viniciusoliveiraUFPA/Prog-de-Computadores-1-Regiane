/* Leia os valores de uma matriz de 2 linhas e 2 colunas e exiba a soma de
todos os seus elementos.
*/
#include <iostream>
using namespace std;

int main () {
    int soma = 0, numeros[2][2];
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cin >> numeros[i][j];
            soma += numeros[i][j];
        }
    }
    cout << "Soma dos elementos da matriz: " << soma << endl;
}