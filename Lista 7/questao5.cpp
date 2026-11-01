/* Questão 5 – Estatística de um vetor 
Leia 8 números inteiros e guarde-os em um vetor. Mostre o maior e o menor elemento e suas posições, 
a média dos elementos, quantos estão acima e abaixo da média e a soma dos elementos armazenados 
nas posições pares (0, 2, 4 e 6). 
• Use um vetor tradicional de tamanho fixo e laços para percorrer seus elementos. 

Exemplo de entrada 
4 8 2 10 6 12 0 14 

Saída esperada 
Maior elemento: 14 
Posição do maior: 7 
Menor elemento: 0 
Posição do menor: 6 
Média: 7 
Elementos acima da média: 4 
Elementos abaixo da média: 4 
Soma das posições pares: 12 
*/

#include <iostream>
using namespace std;

int main () {
    int vetor[8];
    int posmaior, posmenor, acimamedia=0, abaixomedia=0, somapospares=0;
    float media=0;
    for (int i=0; i<8; i++) {
        cin >> vetor[i];
        media += vetor[i];
        if (i%2==0) {
            somapospares += vetor[i];
        }
    }

    posmaior = 0, posmenor = 0;
    media = media / 8;
    for (int i=0; i<8; i++) {
        if (vetor[i]>vetor[posmaior]) {
            posmaior = i;
        }
        
        if (vetor[i]<vetor[posmenor]) {
            posmenor = i;
        }
        
        if (vetor[i]>media) {
            acimamedia += 1;
        } else if (vetor[i]<media) {
            abaixomedia += 1;
        }
    }
    cout << "Maior elemento: "  << vetor[posmaior] << endl;
    cout << "Posição do maior: " << posmaior << endl;
    cout << "Menor elemento: " << vetor[posmenor] << endl;
    cout << "Posição do menor: " << posmenor << endl;
    cout << "Média: " << media << endl;
    cout << "Elementos acima da média: " << acimamedia << endl;
    cout << "Elementos abaixo da média: " << abaixomedia << endl;
    cout << "Soma dos elementos nas posições pares: " << somapospares << endl;
}