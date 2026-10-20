/* Leia os valores de uma matriz de 3 linhas e 3 colunas e mostre o maior
elemento armazenado.
*/

#include <iostream>
using namespace std;

int main () {
    int maior, numeros[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> numeros[i][j];
        }
    }
    
    maior = numeros[0][0];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (numeros[i][j]>maior) {
                maior = numeros[i][j];
            }
        }
    }

    cout << "Maior valor armazenado: " << maior << endl;
}