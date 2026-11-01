/* Questão 6 – Separação de pares e ímpares
Leia 10 números inteiros em um vetor. Depois, apresente os números pares em um segundo vetor e os
números ímpares em um terceiro vetor, mantendo a ordem em que aparecem no vetor original. Mostre
também a quantidade e a soma dos pares e dos ímpares.

Exemplo de entrada
3 8 5 2 7 10 1 4 6 9

Saída esperada
Pares: 8 2 10 4 6
Ímpares: 3 5 7 1 9
Quantidade de pares: 5
Soma dos pares: 30
Quantidade de ímpares: 5
Soma dos ímpares: 25
*/

#include <iostream>
using namespace std;

int main () {
    int vetor[10];
    int quantpares=0, quantimpares=0, somapares=0, somaimpares=0;
    for (int i=0; i<10; i++) {
        cin >> vetor[i];
        if (vetor[i]%2==0) {
            quantpares += 1;
            somapares += vetor[i];
        } else {
            quantimpares += 1;
            somaimpares += vetor[i];
        }
    }

    int pares[quantpares], impares[quantimpares];
    int ipar=0, iimpar=0;
    for (int i=0; i<10; i++) {
        if (vetor[i]%2==0) {
            pares[ipar] =  vetor[i];
            ipar += 1;
        } else {
            impares[iimpar] = vetor[i];
            iimpar += 1;
        }
    }

    cout << "Pares: ";
    for (int i=0; i<quantpares; i++) {
        cout << pares[i] << " ";
    }
    cout << endl;
    
    cout << "Ímpares: ";
    for (int i=0; i<quantimpares; i++) {
        cout << impares[i] << " ";
    }
    cout << endl;
    
    cout << "Quant. de pares: " << quantpares << endl;
    cout << "Soma dos pares: " << somapares << endl;
    cout << "Quant. de ímpares: " << quantimpares << endl;
    cout << "Soma dos ímpares: " << somaimpares << endl;
}