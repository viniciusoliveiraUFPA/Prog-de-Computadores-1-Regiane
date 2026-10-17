/*Dadas as temperaturas que foram registradas diariamente durante uma semana,
faça um programa que, usando vetores, calcule e mostre a temperatura média e em quantos
dias dessa semana a temperatura esteve acima da média. Informe também a maior
temperatura no período. Para cada saída, escreva sua solução em um subprograma.
Considere que os dados estão em um arquivo.
Entradas:
● Vetor [7] de temperaturas.
Saída:
● temperatura média calculada
● total de dias com temperatura acima da média
● maior temperatura
*/

#include <iostream>
using namespace std;

int main () {
    float temperaturas[7];
    float media=0, diasAcima=0, maiorTemp=0;

    for (int i=0; i<7; i++) {
        cin >> temperaturas[i];
        media = media + temperaturas[i];
        
        if (temperaturas[i]>maiorTemp) {
            maiorTemp = temperaturas[i];
        }
    }
    media = media / 7;

    for (int i=0; i<7; i++) {
        if (temperaturas[i]>media) {
            diasAcima = diasAcima + 1;
        }
    }

    cout << "Média: " << media << endl;
    cout << "Quant. temperaturas acima da média: " << diasAcima << endl;
    cout << "Maior temperatura: " << maiorTemp << endl;
}