/* 8. Divisores próprios de um número inteiro positivo N são todos os divisores inteiros positivos de
N exceto o próprio N. Por exemplo, os divisores próprios de 6 são 1, 2 e 3, cuja soma é igual a
6. Outro exemplo é o número 28, cujos divisores próprios são 1, 2, 4, 7 e 14, e a soma dos seus
divisores próprios é 28.
Escreva um programa que receba vários valores positivos (e não nulo) informados pelo usuário,
até que ele digite -1, e calcule a soma dos divisores próprios para cada valor. A soma deve ser
realizada em uma função. A entrada de dados e o resultado devem ser feitos fora da função.
Não é necessário utilizar vetor.
Entrada:
1. Vários números positivos, encerrando com o valor -1.
Saída:
1. Soma dos divisores próprios de cada um dos números.
*/

#include <iostream>
using namespace std;
int somadivisores (int n) {
    int somadivisores=0;
    for (int i=1; i<n; i++) {
        if (n%i==0) {
            somadivisores += i;
        }
    }
    return somadivisores;
}

int main () {
    int n;
    cin >> n;
    while (n!=-1) {
        cout << " " << somadivisores(n);
        cin >> n;
    }
    cout << endl;
}