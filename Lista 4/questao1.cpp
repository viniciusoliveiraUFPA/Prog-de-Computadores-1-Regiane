/* Faça um programa que lê 10 valores inteiros e mostre a soma deles no final da execução
*/

#include <iostream>
using namespace std;

int main () {
    int n, soma, contador;
    soma = 0, contador = 1;
    while (contador<=10) {
        cin >> n;
        soma += n;
        contador += 1;
    }

    cout << "Soma: " << soma << endl;
}