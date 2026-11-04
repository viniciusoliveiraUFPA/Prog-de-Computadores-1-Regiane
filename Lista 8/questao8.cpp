/* 7. Você foi encarregado de desenvolver um programa capaz de encontrar o fatorial de dois 
números e fazer as operações matemáticas básicas (soma, subtração, multiplicação e divisão) 
nos resultados do fatorial. O programa deverá ler dois números, calcular o fatorial de cada 
número e apresentar o resultado baseando-se na operação escolhida. Deverá existir uma 
função que tenha como entrada um número e como saída seu fatorial. O programa principal 
deverá ser responsável pela leitura das entradas, chamada do método de cálculo do fatorial, 
execução da operação selecionada e impressão do resultado. 
Entradas: 
primeiro valor inteiro 
operador (+,-,* ou /) 
segundo valor inteiro 
Saída: 
Resultado da operação escolhida sob os fatoriais de cada número. 
OBS 1: A divisão deverá sempre resultar em inteiro.
*/

#include <iostream>
using namespace std;

int fatorial (int n) {
    int fatorial=1;
    for (int i=1; i<n+1; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main () {
    int n1, n2;
    char operacao;
    cin >> n1 >> operacao >> n2;

    switch (operacao) {
        case '+':
            cout << fatorial(n1) + fatorial(n2) << endl;
            break;
        case '-':
            cout << fatorial(n1) - fatorial(n2) << endl;
            break;
        case '*':
            cout << fatorial(n1) * fatorial(n2) << endl;
            break;
        case '/':
            cout << int (fatorial(n1) / fatorial(n2)) << endl;
    }
}