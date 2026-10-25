/* Questão 3 – Raiz quadrada inteira por subtrações
Leia um número inteiro não negativo N. Encontre a parte inteira da raiz quadrada sem usar sqrt(). Comece 
subtraindo 1 de N, depois 3, depois 5, depois 7 e assim por diante. Continue enquanto o resultado não 
ficar negativo. A quantidade de subtrações válidas será a parte inteira da raiz quadrada. Mostre essa 
parte inteira, o resto final e a quantidade de subtrações realizadas. 
• Use while ou do while. Não use funções matemáticas para calcular a raiz quadrada.

Exemplo de entrada 
20 

Saída esperada 
Parte inteira da raiz quadrada: 4 
Resto final: 4 
Quantidade de subtrações: 4 
*/

#include <iostream>
using namespace std;

int main () {
    int n, i=1, parteint=0, quantsub=0;
    cin >> n;
    while (i<=n) {
        n -= i;
        parteint += 1;
        quantsub += 1;
        i += 2;  
    }
    cout << "Parte inteira da raíz: " << parteint << endl;
    cout << "Resto final: " << n << endl;
    cout << "Quant. de subtrações: " << quantsub << endl;
}