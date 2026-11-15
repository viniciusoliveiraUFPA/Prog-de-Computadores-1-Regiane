/* 6) Multiplicação de números naturais. Outro exemplo de uma definição recursiva é a definição
da multiplicação de números naturais. O produto a * b, em que a e b são inteiros positivos, pode
ser definido como a somado a si mesmo b vezes. Essa é uma definição iterativa. Uma definição
recursiva equivalente é:
a * b = a se b == 1
a * b = a * (b - 1) + a se b > 1
Implemente uma função recursiva para multiplicar dois números naturais sem utilizar o
operador de multiplicação (*).
*/

#include <iostream>
using namespace std;

int multi (int a, int b) {
    if (b==1) {
        return a;
    } else {
        return a + multi(a, b-1);
    }
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << multi(a, b) << endl;
}