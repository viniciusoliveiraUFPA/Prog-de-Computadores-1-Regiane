/* Construa um programa que, dado um conjunto de valores inteiros e positivos, determine o 
menor e o maior valor do conjunto. O final do conjunto de valores é conhecido pelo valor -1, que 
não deve ser considerado.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int maior = n, menor = n;
    while (n!=-1) {
        if (n>maior) {
            maior = n;
        }
        if (n<menor) {
            menor = n;
        }
        cin >> n;
    }
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
}