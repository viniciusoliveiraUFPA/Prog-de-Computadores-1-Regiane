/* 13. Faça um código que leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    cout << "Antecessor: " << n-1 << endl;
    cout << "Sucessor: " << n+1 << endl;
}