/* 12. A expedição que saiu de Lisboa em 09 de março de 1500 precisava levar canhões, pólvora 
e espadas afiadas. O canhão custava 10.000,00 réis, o quilo da pólvora custava 2.000,00 
réis e cada espada custava 1.500,00 réis. Faça um programa que calcule quantos canhões, 
quilos de pólvora e espadas podem ser comprados, de acordo com a quantidade de 
dinheiro disponível. Considere que era mais importante ter canhão e pólvora, nesta ordem. 
As saídas devem ser inteiras.

Entradas: 
1. Quantidade de dinheiro disponível 

Saídas: 
1. Quantidade de canhões; 
2. Quantidade de quilos de pólvora; 
3. Quantidade de espadas.

Exemplo de entrada 
123500 

Exemplo de saída 
12 
1 
1
*/

#include <iostream>
using namespace std;

int main () {
    int dinheiro;
    cin >> dinheiro;

    cout << "Canhões: " << dinheiro / 10000 << endl;
    dinheiro = dinheiro % 10000;

    cout << "Pólvora: " << dinheiro / 2000 << endl;
    dinheiro = dinheiro % 2000;

    cout << "Espadas: " << dinheiro / 1500 << endl;
}