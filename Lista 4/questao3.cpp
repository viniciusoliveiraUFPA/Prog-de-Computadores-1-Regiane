/* Faça um programa que verifique se um número é primo.
*/

#include <iostream>
using namespace std;

int main () {
    int n, i, divisores=0;
    cin >> n;
    i = n;
    while (i>=1) {
        if (n%i==0) {
            divisores += 1;
        }
        i -= 1;
    }
    
    if (divisores==2) {
        cout << "É primo" << endl;
    } else {
        cout << "Não é primo" << endl;
    }
}