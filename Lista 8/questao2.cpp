/* 2. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de
retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.
*/

#include <iostream>
using namespace std;

int sinal (int n) {
    if (n<0) {
        n = -1;
    } else if (n==0) {
        n = 0;
    } else if (n>0) {
        n = 1;
    }
    return n;
}

int main () {
    int n;
    cin >> n;
    cout << sinal(n) << endl;
}