/*  Leia os valores de uma matriz quadrada de ordem 3 e exiba os elementos
da diagonal principal.
*/

#include <iostream>
using namespace std;

int main () {
    int numeros[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> numeros[i][j];
        }
    }

    for (int d=0; d<3; d++){
        cout << numeros[d][d] << " ";
    }
    cout << endl;
}