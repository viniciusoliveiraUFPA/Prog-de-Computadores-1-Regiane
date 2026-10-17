/* Questão3. A equipe FACOMP Olympics está selecionando atletas para participar do
campeonato inter universitário paraense. Você foi selecionado para desenvolver um
programa que leia os pesos dos atletas e identifique quais estão acima da média.
O programa deve ler os dados de entrada (pesos dos atletas), armazená-los em um vetor e,
ao final, exibir as posições dos atletas que com peso acima da média calculada.
A média dos pesos deve ser calculada em um subprograma.
Entradas:
1. Inteiro N representando o número de
atletas.
2. Pesos (float) dos N atletas. 

Saídas:
1. Posição dos atletas acima da média na
lista. */

#include <iostream>
using namespace std;

int main () {
    int n, media=0;
    cin >> n;
    
    int atletas[n];
    for (int i=0; i<n; i++) {
        cin >> atletas[i];
        media = media + atletas[i];
    }
    media = media / n;
    cout << media << endl;

    for (int i=0; i<n; i++) {
        if (atletas[i]>media) {
            cout << i << ", ";
        }
    }
}