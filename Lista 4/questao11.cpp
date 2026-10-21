/*  Faça um programa que receba dois números. Calcule e mostre: 
● a soma dos números pares desse intervalo de números, incluindo os números 
digitados; 
● a multiplicação dos números ímpares desse intervalo, incluindo os digitados. 
*/

#include <iostream>
using namespace std;

int main () {
    int n1, n2, soma=0, multi=1;
    cin >> n1 >> n2;
    while (n1<=n2) {
        if (n1%2==0) {
            soma += n1;
        } else {
            multi *= n1;
        }
        n1 += 1;
    }
    cout << "Soma dos pares: " << soma << endl;
    cout << "Multiplicação dos ímpares: " << multi << endl;
}