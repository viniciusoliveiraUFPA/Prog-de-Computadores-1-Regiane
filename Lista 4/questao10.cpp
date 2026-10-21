/* Escreva um programa que imprima todas as possibilidades de que no lançamento de dois 
dados tenhamos o valor 7 como resultado da soma dos valores de cada lado. 
*/

#include <iostream>
using namespace std;

int main () {
    int face1=1;
    while (face1<=6) {
        cout <<"Dado 1: " << face1 << " " << "Dado 2: " << 7-face1 << endl;
        face1 += 1;
    }
}