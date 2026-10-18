/* Faça um programa que calcula a multiplicação dos números de 1 até N, sendo N um valor 
inteiro lido. N é sempre maior ou igual a 1. 
*/

#include <iostream>
using namespace std;

int main () {
    int n=0, fatorial=1;
    cin >> n;
    while (n>=1) {
        fatorial *= n;
        n -= 1;
    }

    cout << "Fatorial: " << fatorial << endl;
}