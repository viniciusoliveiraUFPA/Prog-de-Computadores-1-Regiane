/* Leia 6 números inteiros e armazene-os em uma matriz de 2 linhas e 3
colunas. Em seguida, exiba a matriz em formato de linhas e colunas.
*/

#include <iostream>
using namespace std;

int main () {
    int numeros[2][3];
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            cin >> numeros[i][j];
        }
    }

    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            cout << numeros[i][j] << " ";
        }
        cout << endl;
    }
}