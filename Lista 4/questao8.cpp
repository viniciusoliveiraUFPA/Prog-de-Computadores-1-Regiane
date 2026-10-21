/*  A conversão de graus Fahrenheit para centígrados é obtida pela fórmula C=5/9(F-32). Escreva 
um programa que calcule e escreva uma tabela de graus centígrados em função de graus 
Fahrenheit que variem de 50 a 150 de 1 em 1. 
*/

#include <iostream>
using namespace std;

int main () {
    float f=50, c;
    while (f<=150) {
        c = (5 * ( f - 32)) / 9;
        cout << "Fahrenheit: " << f << " Celsius: " << c << endl;
        f += 1;
    }
}