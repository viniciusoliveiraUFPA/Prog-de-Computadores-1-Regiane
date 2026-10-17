/*Escreva um vetor [10] que armazene as faces de uma moeda que será jogada 
aleatoriamente 10 vezes. Use 1 para representar “coroa” e 2 para representar “cara”. O 
programa deve informar quantas “caras” e quantas “coroas” foram sorteadas.
*/

#include <iostream>
using namespace std;

int main () {
    int facesmoeda[10];
    int caras, coroas;
    caras=0;
    coroas=0;

    for (int i=0; i<10; i++){
        cin >> facesmoeda[i];
    }

    for (int i=0; i<10; i++) {
        if (facesmoeda[i]==1) {
            coroas = coroas +1;
        } else if (facesmoeda[i]==2) {
            caras = caras +1;
        }
    }

    cout << "Caras: " << caras << endl;
    cout << "Coroas: " << coroas << endl;
}