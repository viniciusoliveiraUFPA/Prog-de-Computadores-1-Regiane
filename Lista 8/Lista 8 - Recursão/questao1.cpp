/* 1) Faça uma função recursiva que receba dois números inteiros positivos K e N e calcule KN
.
Utilize apenas multiplicações.
*/

#include <iostream>
using namespace std;

int expo (int n, int k) {
    if (k==0) {
        return 1;
    } else {
        return n * expo (n, k-1);
    }
}

int main () {
    int n, k;
    cin >> n >> k;
    cout << expo(n, k) << endl;
}