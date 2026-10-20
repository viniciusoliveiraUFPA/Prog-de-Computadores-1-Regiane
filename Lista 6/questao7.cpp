/* Leia os valores de uma matriz de 2 linhas e 3 colunas e conte quantos
elementos são pares. Exiba a quantidade encontrada.
*/

#include <iostream>
using namespace std;

int main () {
    int quantPares=0, numeros[2][3];
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            cin >> numeros[i][j];
            if (numeros[i][j] % 2 == 0) {
                quantPares += 1;
            }
        }
    }
    cout << "Quantidade de pares: " << quantPares << endl;
}