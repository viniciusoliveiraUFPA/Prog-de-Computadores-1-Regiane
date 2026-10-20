/*
Declare uma matriz de números inteiros com 2 linhas e 3 colunas.
Inicialize-a com os valores 1, 2, 3, 4, 5 e 6 e exiba todos os elementos.
*/

#include <iostream>
using namespace std;

int main () {
    int numeros[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            cout << numeros[i][j] << " ";
        }
        cout << endl;
    }   

}