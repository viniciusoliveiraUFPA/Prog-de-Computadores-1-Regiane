/* Questão 4 – Números primos em um intervalo 
Leia dois números inteiros positivos A e B, com A menor ou igual a B. Mostre todos os números primos 
do intervalo, incluindo A e B. Ao final, mostre quantos números primos foram encontrados, a soma deles, 
o maior primo e a média dos primos. Um número primo é maior que 1 e possui exatamente dois divisores 
positivos: 1 e ele mesmo. Se não houver primos, mostre uma mensagem. 
• Valide a entrada com while ou do while. Verifique se cada número é primo usando estruturas de 
repetição e condicionais. 

Exemplo de entrada 
2 10

Saída esperada 
Números primos: 2 3 5 7 
Quantidade de primos: 4 
Soma dos primos: 17 
Maior primo: 7 
Média dos primos: 4.25
*/

#include <iostream>
using namespace std;

int main () {
    int a, b, i=1, div=0, quantprimos=0, somaprimos=0, maiorprimo=0;
    cin >> a >> b;
    cout << "Números primos: ";
    while (a<=b) {
        while (i<=a) {
            if (a%i==0) {
                div += 1;
            }
            i += 1;
        }
        i=1;
        if (div==2) {
            cout << a << " ";
            quantprimos += 1;
            somaprimos += a;
            if (a>maiorprimo) {
                maiorprimo = a;
            }
        }
        a += 1;
        div = 0;
    }
    if (quantprimos==0) {
        cout << "Não há primos no intervalo" << endl;
    } else {
        cout << endl;
        cout << "Quant. de primos: " << quantprimos << endl;
        cout << "Soma dos primos: " << somaprimos << endl;
        cout << "Maior primo: " << maiorprimo << endl;
        cout << "Média dos primos: " << float(somaprimos) / quantprimos << endl;
    }
}