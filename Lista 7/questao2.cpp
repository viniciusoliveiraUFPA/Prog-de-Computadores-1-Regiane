/* Questão 2 – Números divisíveis por 3 e por 5 
Leia dois números inteiros positivos A e B, garantindo que A seja menor que B. Se os valores forem 
inválidos, solicite-os novamente. Percorra o intervalo de A até B, incluindo os extremos. Mostre os 
números divisíveis por 3 e por 5 ao mesmo tempo, a quantidade de números divisíveis por 3, a quantidade 
divisível por 5, a quantidade divisível por ambos e a soma dos números que não são divisíveis nem por 
3 nem por 5. Mostre também o maior número divisível por ambos, se existir. 

• Use while ou do while para validar os valores e percorrer o intervalo. 
Exemplo de entrada 
10 20 

Saída esperada 
Divisíveis por 3 e por 5: 15 
Quantidade divisível por 3: 3 
Quantidade divisível por 5: 3 
Quantidade divisível por ambos: 1 
Soma dos que não são divisíveis por 3 nem por 5: 90 
Maior divisível por ambos: 15 
*/

#include <iostream>
using namespace std;

int main () {
    int a, b, i;
    int numeropor3e5=0, quantdiv3=0, quantdiv5=0, quantdiv3e5=0, somanao3e5=0;
    bool primeirodiv3e5=true;
    cin >> a >> b;
    while (a>=b) {
        cout << "Intervalo inváido, informe outro" << endl;
        cin >> a >> b;
    }
    i = a;
    
    while (i<=b) {
        if ((i%3==0) and (i%5==0) and (primeirodiv3e5)) {
            numeropor3e5 = i;
            primeirodiv3e5 = false;
        }

        if (i%3==0) {
            quantdiv3 += 1;
        } 
        
        if (i%5==0) {
            quantdiv5 += 1;
        } 
        
        if ((i%3!=0) and (i%5!=0)) {
            somanao3e5 += i;
        }
        i += 1;
    }

    cout << "Divisíveis por 3 e 5: ";
    while (numeropor3e5<=b) {
        cout << numeropor3e5 << " ";
        quantdiv3e5 += 1;
        numeropor3e5 += 15;
    }
    cout << endl;
    cout << "Quant. divisíveis por 3: " << quantdiv3 << endl;
    cout << "Quant. divisíveis por 5: " << quantdiv5 << endl;
    cout << "Quant. divísiveis por ambos: " << quantdiv3e5 << endl;
    cout << "Soma dos não divisíveis por 3 nem por 5: " << somanao3e5 << endl;
    cout << "Maior divisível por ambos: " << numeropor3e5 - 15 << endl;
}