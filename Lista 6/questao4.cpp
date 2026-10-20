/*
Leia os valores de uma matriz de 3 linhas e 2 colunas. Ao final, exiba a
soma dos elementos de cada linha.
*/

#include <iostream>
using namespace std;

int main () {
    int soma = 0, numeros[3][2];
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            cin >> numeros[i][j];
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            soma += numeros[i][j];
        }
        cout << "Soma da linha " << i << ": " << soma << endl;
        soma=0;
    }
}