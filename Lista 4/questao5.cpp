/*  Faça um programa que calcule e mostre a soma dos 50 primeiros números pares
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main () {
    int soma=0, n=0, contPares=0;
    while (contPares<50) {
        if (n%2==0) {
            soma += n;
            contPares+=1;
        }
        n += 1;
    }
    cout << "Soma dos 50 primeiros pares (incluindo o zero): " << soma << endl;
    cout << "Pares contados: " << contPares << endl;
}