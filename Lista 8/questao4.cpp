/* 4. Faça uma função que receba dois números e retorne qual deles é o maior.
*/

#include <iostream>
using namespace std;

int maior (int a , int b) {
    int maior;
    if (a>b) {
        maior = a;
    } else {
        maior = b;
    }
    return maior;
}

int main () {
    int n, n2;
    cin >> n >> n2;
    cout << maior(n, n2) << endl;
}