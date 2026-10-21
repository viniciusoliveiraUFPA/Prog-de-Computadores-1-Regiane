/* Faça um programa capaz de obter o quociente inteiro da divisão de dois números, 
sem utilizar a operação de divisão (/) e nem o operador resto (% ou mod). 
Entradas: 
1. Dois números inteiros positivos. 
Saídas: 
1. Quociente da divisão inteira. 
*/

#include <iostream>
using namespace std;

int main () {
    int n1, n2, quociente=0;
    cin >> n1 >> n2;
    while (n1>=n2) {
        n1 = n1 - n2;
        quociente += 1;
    }
    cout << quociente << endl;
}