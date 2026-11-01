/* 8. A moeda corrente de “Tão Tão Distante” possui notas de 100, 50, 20, 10, 5, 2 e 1 unidade 
monetária. Faça um programa que recebe um valor inteiro positivo nesta moeda, e retorna 
quantas notas de cada valor devem ser utilizadas para obter tal valor, utilizando o menor 
número de notas possível. Esse programa usa quociente e resto.

Entrada: 
● Um valor inteiro que representa um valor na moeda corrente. 

Saída: 
1. Número de notas de 100. 
1. Número de notas de 50. 
2. Número de notas de 20. 
3. Número de notas de 10. 
4. Número de notas de 5. 
5. Número de notas de 2. 
6. Número de notas de 1. 
Exemplo de entrada:                     Exemplo de saída:
36                                      0 0 1 1 1 0 1

267                                     2 1 0 1 1 1 0
*/

#include <iostream>
using namespace std;

int main () {
    int valor;
    cin >> valor;

    cout << valor / 100 << endl;
    valor = valor % 100;

    cout << valor / 50 << endl;
    valor = valor % 50;

    cout << valor / 20 << endl;
    valor = valor % 20;

    cout << valor / 10 << endl;
    valor = valor % 10;

    cout << valor / 5 << endl;
    valor = valor % 5;

    cout << valor / 2 << endl;
    valor = valor % 2;
    
    cout << valor / 1 << endl;
    valor = valor % 1;
}