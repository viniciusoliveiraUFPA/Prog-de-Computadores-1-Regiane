/* 7) A sequência de Ricci é uma sequência bastante semelhante à de Fibonacci, diferindo desta
apenas pelo fato que os dois primeiros termos da sequência ( F(0) e F(1) ) devem ser definidos
pelo usuário.
Sabendo-se que a sequência de Fibonacci é definida por:
● F(0) = 0
● F(1) = 1
● F(n) = F(n - 1) + F(n - 2) , n > 2
Crie um programa que imprima os n primeiros termos da sequência de Ricci, utilizando um
subprograma recursivo que retorna o n-ésimo termo da referida série.

Entrada:
1. Os valores iniciais da série de Ricci ( F(0) e F(1) );
2. Os número de termos dessa sequência a serem impressos.
Saída:
1. Os n termos dessa sequência.

Exemplo de entrada:
5 8
6
Exemplo de saída:
5 8 13 21 34 55
*/

#include <iostream>
using namespace std;

int ricci (int f0, int f1, int n) {
    if (n==1) {
        return f0;
    } 
    if (n==2) {
        return f1;
    }
    return ricci(f0, f1, n-1) + ricci(f0, f1, n-2);
}

int main () {
    int f0, f1, n;
    cin >> f0 >> f1 >> n;
    
    for (int i=1; i<n+1; i++) {
        cout << ricci(f0, f1, i) << " ";
    }
    cout << endl;
}