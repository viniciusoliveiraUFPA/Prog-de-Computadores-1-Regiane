/* 14. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A 
área do círculo é π ∗ raio².
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int raio;
    cin >> raio;

    cout << "Área do círculo: " << M_PI * pow(raio, 2) << endl;
}