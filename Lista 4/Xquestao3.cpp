/* Faça um programa que verifique se um número é primo.
*/

#include <iostream>
using namespace std;

int main () {
    int n, i;
    bool primo=1;
    cin >> n;
    i=n-1;
    while (i>=2) {
        if (n%i==0) {
            primo=0;
        }
        i -= 1;
    }
    if (primo==1) {
        cout << "Primo positivo" << endl;
    } else if (primo==0) {
        cout << "Primo negativo" << endl;
    }
}