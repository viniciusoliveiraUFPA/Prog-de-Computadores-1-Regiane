/* 3) Mostre a pilha de chamadas recursivas para o exercício 2.
*/
#include <iostream>
using namespace std;

int somatorio (int n) {
    if (n==1) {
        cout << "somatorio(1) = 1" << endl;
        return 1;
    } else {
        cout << "somatorio(" << n << ") = "; 
        cout << n << " + " << "somatorio(" << n-1 << ")" << endl;
        return n + somatorio(n-1);
    }
}

int main () {
    int n;
    cin >> n;
    cout << somatorio(n) << endl;
}