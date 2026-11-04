/* 3. Faça um programa que receba uma temperatura em graus Celsius (valor real) e converta para
Kelvin (K) e Fahrenheit (F). Cada conversão deve ser feita em um subprograma.
Obs.: A fórmula de conversão de Celsius para Kelvin é dada por K = C + 273.15.
Obs.2: A fórmula de conversão de Celsius para Fahrenheit é dada por F = 1.8C + 32.
*/

#include <iostream>
using namespace std;

float kelvin (float temp) {
    temp = temp + 273.15;
    return temp;
}

float fahrenheit (float temp) {
    temp = temp * 1.8 + 32;
    return temp;
}

int main () {
    float temp;
    cin >> temp;
    cout << "Kelvin: " << kelvin(temp) << endl;
    cout << "Fahrenheit: " << fahrenheit(temp) << endl;
}