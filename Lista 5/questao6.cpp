/* Com arquivo. Considere que os dados de entrada estão armazenados em um 
arquivo. O arquivo contém 20 valores inteiros, sendo que: 
● Os 10 primeiros valores correspondem ao vetor X, ocupando as posições de 0 a 9; 
● Os 10 valores seguintes correspondem ao vetor Y, também ocupando as posições de 
0 a 9. 
 
O programa deve ler os dados do arquivo e intercalar os elementos dos vetores X e Y, 
formando um novo vetor R de 20 elementos, de modo que: 
● Nas posições pares de R (0, 2, 4, ..., 18) estejam os elementos do vetor X; 
● Nas posições ímpares de R (1, 3, 5, ..., 19) estejam os elementos do vetor Y. 
Após a geração completa do vetor R, o programa deve escrevê-lo na saída. 
*/

#include <iostream>
using namespace std;

int main () {
    int x[5], y[5];

    for (int i=0; i<5; i++) {
        cin >> x[i] >> y[i];
    }

    int r[10];
    for (int i=0; i<5; i++) {
        r[2*i]=x[i];
        r[2*i + 1]=y[i];
    }

    cout << "Vetor R: ";
    for (int i=0; i<10; i++) {
        cout << r[i] << " ";
    }
}