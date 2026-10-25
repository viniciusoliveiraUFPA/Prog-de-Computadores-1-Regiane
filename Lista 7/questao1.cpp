/* Questão 1 – Estatística de uma sequência 
Leia números inteiros até que o usuário digite 0. O zero encerra a leitura e não entra nos cálculos. Ao 
final, mostre a quantidade de números positivos e negativos, a soma dos positivos e dos negativos, a 
média dos números pares e o maior e o menor número informado. Se nenhum número for informado, 
mostre uma mensagem. Se não houver números pares, informe que não é possível calcular a média dos 
pares. 
• Use while para ler os números. 
Exemplo de entrada                  Saída esperada 
8                                   Quantidade de positivos: 2 
-3                                  Quantidade de negativos: 2 
4                                   Soma dos positivos: 12 
-7                                  Soma dos negativos: -10 
0                                   Média dos pares: 6 
                                    Maior número: 8 
                                    Menor número: -7 
*/

#include <iostream>
using namespace std;

int main () {
    int n, quantposit=0, quantnegat=0, somaposit=0, somanegat=0;
    int mediapares=0, quantpares=0, maior, menor;
    cin >> n;
    maior = n, menor = n;
    while (n!=0) {
        if (n>0) {
            quantposit += 1;
            somaposit += n;
        } else if (n<0) {
            quantnegat += 1;
            somanegat += n;
        }

        if (n%2==0) {
            mediapares += n;
            quantpares += 1;
        }

        if (n>maior) {
            maior = n;
        } else if (n<menor) {
            menor = n;
        }
        cin >> n;
    }
    
    if ((maior==0) and (menor==0)) {
        cout << "Nenhum número informado" << endl;
    } else {
        cout << "Quant. de positivos: " << quantposit << endl;
        cout << "Quant. de negativos: " << quantnegat << endl;
        cout << "Soma dos positivos: " <<somaposit << endl;
        cout << "Soma dos negativos: " << somanegat << endl;
        if (quantpares>0) {
            cout << "Média dos pares: " << float (mediapares / quantpares) << endl;
        } else {
            cout << "Não foi possível calcular a média dos pares" << endl;
        }
        cout << "Maior número: " << maior << endl; 
        cout << "Menor número: " << menor << endl;
    }
}