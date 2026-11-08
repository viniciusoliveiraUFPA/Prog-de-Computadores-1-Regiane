/* 11. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a 
saída para n = 6 seria: 
            *
           ***
          *****
         *******
        *********
       ***********
*/

#include <iostream>
using namespace std;

void triangulo (int n) {
    for (int i=1; i<n+1; i++) {
        cout << "\t" << "\t" << "\t";
        for (int k=1; k<i+1; k++) {
            cout << "\b";
        }
        for (int j=1; j<2*i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    triangulo(n);
}