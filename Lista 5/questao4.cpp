/*Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar
desses vetores. Para calcular o produto escalar utilize a seguinte fórmula: (abaixo tem a
fórmula na forma de texto e depois na forma de imagem)
Entrada:
A primeira linha da entrada será o número de elementos dos vetores.
As linhas seguintes serão compostas pelos valores de cada posição do primeiro vetor e em
seguida pelos valores de cada posição do segundo vetor. */

#include <iostream>
using namespace std;

int main () {
    int n, produto=0;
    cin >> n;

    int vetorx[n], vetory[n];
    for (int i=0; i<n; i++) {
        cin >> vetorx[i];
    }
    for (int i=0; i<n; i++) {
        cin >> vetory[i];
    }

    for (int i=0; i<n; i++) {
        produto = produto + (vetorx[i] * vetory[i]);
    }

    cout << produto << endl;
}