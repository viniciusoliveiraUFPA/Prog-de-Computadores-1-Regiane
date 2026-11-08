/* 10. Escreva um subprograma que receba como parâmetro um valor inteiro e gere como saída 
n linhas com pontos de exclamação, conforme o exemplo abaixo (para n = 5): 
!  
!!  
!!!  
!!!!  
!!!!!
*/

#include <iostream>
using namespace std;

void imprimirexclamacao (int n) {
    for (int i=1; i<n+1; i++) {
        for (int j=1; j<i+1; j++) {
            cout << "!" << " ";
        }
        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    imprimirexclamacao(n);
}