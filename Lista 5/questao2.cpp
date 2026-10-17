/* Questão2. Faça um programa que preencha um vetor com dez números reais, calcule e
mostre a quantidade de números positivos (incluindo o zero) e a soma dos números negativos
desse vetor. Imprima os elementos do vetor começando pelo último elemento até o primeiro
elemento.
Entrada:
● Dez números reais (a serem guardados em um vetor).
Saída:
● Quantidade de números positivos no vetor.
● Soma dos números negativos do vetor.
● Os elementos do vetor começando a impressão pelo último elemento até o primeiro
elemento. */

#include <iostream>
using namespace std;

int main () {
    int vetor[10];
    int positivos=0, somaNegativos=0;

    for (int i=0; i<10; i++) {
        cin >> vetor[i];
    }

    for (int i=0; i<10; i++) {
        if (vetor[i]>=0) {
            positivos = positivos +1;
        } else if (vetor[i]<0) {
            somaNegativos = somaNegativos + vetor[i];
        }
    }
    
    cout << "Quant. de números positivos: " << positivos << endl;
    cout << "Soma dos negativos: " << somaNegativos << endl;
    for (int i=9; i>-1; i--) {
        cout << vetor[i] << ", ";
    }
}