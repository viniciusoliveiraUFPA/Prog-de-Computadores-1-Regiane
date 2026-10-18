/*  Faça um programa para calcular o fatorial de um número. 
!5 = 1*2*3*4*5=120
*/

#include <iostream>
using namespace std;

int main () {
    int n, fatorial = 1;
    cin >> n;
    while (n>=1) {
        fatorial *= n;
        n -= 1;
    }
    cout << "Fatorial: " << fatorial << endl;
}