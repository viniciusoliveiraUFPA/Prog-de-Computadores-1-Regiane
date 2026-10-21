/* Faça um programa que some os números ímpares contidos em um intervalo definido pelo 
usuário. O usuário define o valor inicial do intervalo e o valor final deste intervalo e o programa deve 
somar todos os números ímpares contidos neste intervalo. Caso o usuário digite um intervalo 
inválido (começando por um valor maior que o valor final) deve ser escrito uma mensagem de erro 
na tela, “Intervalo de valores inválido” e o programa termina. Exemplo de tela de saída: Digite o 
valor inicial e valor final: 5 10 
Soma dos ímpares neste intervalo: 21
*/

#include <iostream>
using namespace std;

int main () {
    int n1, n2, soma=0;
    cin >> n1 >> n2;
    if (n1>n2) {
        cout << "Intervalo de valores inválido" << endl;
    } else {
        while (n1<=n2) {
            if (n1%2==0) {
                n1 += 1;
            } else {
                soma += n1;
                n1 += 2;
            }
        }
        cout << "Soma dos ímpares no intervalo: " << soma << endl;
    }
}