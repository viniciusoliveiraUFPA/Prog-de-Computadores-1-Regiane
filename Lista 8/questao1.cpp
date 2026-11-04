/* 1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.
*/

#include <iostream>
using namespace std;

int dobro (int n) {
    n *= 2;
    return n;
}

int main () {
    int n;
    cin >> n;
    cout << dobro(n) << endl;
}