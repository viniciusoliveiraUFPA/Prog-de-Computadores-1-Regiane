/* 11.  Dada uma temperatura em ºF, informe o correspondente em ºC. 
Equação: C = (F-32)*(5/9)*/

#include <iostream>
using namespace std;

int main () {
    float f;
    cin >> f;

    float c = 5 * (f-32) / 9;
    cout << "Celsius: " << c << endl;
}