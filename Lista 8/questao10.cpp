/* 9. Procedimento. Faça um programa que receba um número inteiro n e imprima uma pirâmide
contendo n linhas e em cada uma deve conter uma sequência numérica até o número que
represente o valor da linha.
O subprograma deverá imprimir apenas uma linha por vez. Ou seja, é necessário que o
subprograma seja chamado toda vez que for imprimir uma nova linha.

Entradas:
1. Número inteiro informando a quantidade de linhas
Saídas:
1. n linhas contendo cada uma uma sequência numérica correspondente ao valor da
linha.

Exemplo de Entrada:
5
Exemplo de Saída:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <iostream>
using namespace std;

void linha (int n) {
    for (int i=1; i<n+1; i++) {
        cout << i << " ";
    }
}

int main () {
    int n;
    cin >> n;
    for (int i=1; i<n+1; i++) {
        linha(i);
        cout << endl;
    }
}