/* O Senhor das Estrelas, dos Guardiões da Galáxia, resolveu colocar senha nos principais 
componentes da nave. Para facilitar, ele adotou um esquema de senha composta por uma 
sequência de números. Para não ter que anotar toda a senha, ele resolveu adotar a sequência 
3n+1, e anotar apenas o gerador da senha. Assim, a senha, recebido um número N, é calculada 
da seguinte forma: caso N seja par, divida por 2. Caso N seja ímpar, multiplique por 3 e some 1. 
Repita esse processo com o novo valor de N, terminando quando N = 1. 
Por exemplo, a seguinte senha (sequência de números) foi gerada para N = 22: 22 11 
34 17 52 26 13 40 20 10 5 16 8 4 2 1 
Sua tarefa é implementar um programa para, a partir do número gerador, calcular a senha a ser 
utilizada pelo Senhor das Estrelas e imprimi-la na tela. 
Entrada: 
1. Número inicial N (um inteiro positivo) 
Saída: 
1. Sequência de números usando a sequência 3n+1 
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    cout << n << " ";
    while (n!=1) {
        if (n%2==0) {
            n /= 2;
        } else {
            n = 3*n + 1;
        }
        cout << n << " ";
    }
}