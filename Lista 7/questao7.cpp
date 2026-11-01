/* Questão 7 – Elementos comuns a dois vetores 
Leia dois vetores com 6 números inteiros cada. Crie um terceiro vetor com os valores que aparecem nos 
dois vetores. Cada valor deve aparecer apenas uma vez no resultado, e a ordem deve seguir a primeira 
aparição no primeiro vetor. Mostre o vetor resultante e a quantidade de valores comuns. 
• Implemente a busca com laços e variáveis; não use funções prontas. 

Exemplo de entrada 
Vetor A: 4 2 7 4 9 1 
Vetor B: 7 8 4 4 1 3 

Saída esperada 
Elementos comuns: 4 7 1 
Quantidade de elementos comuns: 3 
*/
#include <iostream>
using namespace std;

int main () {
    int vetor1 [6], vetor2[6];
    cout << "Informe os elementos do primeiro vetor: " << endl;

    for (int i=0; i<6; i++) {
        cin >> vetor1[i];
    }

    cout << "Informe os elementos do segundo vetor: " << endl;
    for (int i=0; i<6; i++) {
        cin >> vetor2[i];
    }

    int quantcomuns=0, i=0, j=0;
    bool achouprimeiro=true;

    while (i<6) {
        while ((j<6) and (achouprimeiro==true)) {
            if (vetor2[i]==vetor1[j]) {
                quantcomuns += 1;
                achouprimeiro=false;
            } else {
                j += 1;
            }  
        }
        achouprimeiro=true;
        j=0;
        i+=1;  
    }  

    cout << "Quant. de elementos comuns: " << quantcomuns << endl;
}