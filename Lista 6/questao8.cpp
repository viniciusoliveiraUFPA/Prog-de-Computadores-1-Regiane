/* Leia os valores de uma matriz de 2 linhas e 3 colunas. Multiplique cada
elemento por 2 e exiba a matriz resultante.
*/

#include <iostream>
using namespace std;

int main () {
    int numeros[2][3];
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            cin >> numeros[i][j];
            numeros[i][j] *= 2;
        }
    }

    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            cout << numeros[i][j] << " ";
        }
        cout << endl;
    } 
}