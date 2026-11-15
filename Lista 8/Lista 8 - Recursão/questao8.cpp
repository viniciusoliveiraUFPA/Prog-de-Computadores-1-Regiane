/* 8) A função de Ackermann-Péter é uma função importante em Teoria da Computação, que é
definida assim:
Onde m e n são números inteiros não negativos. Cuidado, esta função requer quantidades
enormes de processamento conforme seus parâmetros aumentam. Evite usar parâmetros cuja
soma é maior que 7.
Faça um programa que tem uma função para calcular esta função. As operações de entrada e
saída devem ser feitas fora da função recursiva.

Entradas:
● Dois valores inteiros não negativos que determinam respectivamente m e n na definição
acima, numa mesma linha.
Saídas:
● O valor da função para os parâmetros lidos.

Exemplo de Entrada:
2 4
Exemplo de Saída:
11
*/

#include <iostream>
using namespace std;

int acker (int m, int n) {
    if (m==0) {
        return n+1;
    } else if (n==0) {
        return acker(m-1, 1);
    } else {
        return acker(m-1, acker(m, n-1));
    }
}

int main () {
    int m, n;
    cin >> m >> n;
    cout << acker(m, n) << endl;
}