/* 2. Faça um programa que leia um número inteiro e imprima o quadrado desse número e o 
correspondente a sua quinta parte. 
*/

#include <iostream> 
using namespace std; 
int main () { 
    int numero, dobro, quinto;
    cin >> numero;
    dobro = 2 * numero; 
    quinto = numero / 5; 
    cout << dobro << endl << quinto << endl;
}