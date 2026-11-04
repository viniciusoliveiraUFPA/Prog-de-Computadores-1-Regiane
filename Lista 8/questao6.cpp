/* 5. Faça um programa que implementa 3 funções que recebam como parâmetro um número real 
não negativo e retornem um número inteiro. A primeira função deve ser capaz de arredondar o 
número para baixo, a segunda deve arredondá-lo para cima e a terceira tem que seguir a regra 
de arredondamento convencional. Você não pode utilizar funções pré-definidas de bibliotecas. 
O programa deve receber um número real da entrada e escrever o resultado do arredondamento 
para baixo, para cima e no modo convencional, nessa ordem. O arredondamento deve ser feito 
com o uso das funções que você criou anteriormente. 
OBS 1: Não é permitido utilizar funções da biblioteca da linguagem, como ceil, floor, round e etc. 
OBS 2: x=12.34. O casting de x para int dá 12. Exemplo: x=int(x) 

Entrada: 
Um número real não negativo. 

Saída: 
Um número inteiro (arredondado para baixo). 
Um número inteiro (arredondado para cima). 
Um número inteiro (arredondado modo convencional). 

Exemplo de entrada                      Exemplo de saída 
9.5                                     9 
                                        10           
                                        10

9.4                                     9 
                                        10 
                                        9 
*/

#include <iostream>
using namespace std;

int baixo (float n) {
    int nbaixo;
    nbaixo = int(n);
    return nbaixo;
}

int cima (float n) {
    int ncima;
    ncima = int(n) + 1;
    return ncima;
}

int normal (float n) {
    int nnormal;
    if (n - int(n) < 0.5) {
        nnormal = int(n);
    } else {
        nnormal = int(n) + 1;
    }
    return nnormal;
}

int main () {
    float n;
    cin >> n;
    cout << "Arredondado para baixo: " << baixo(n) << endl;
    cout << "Arredondado para cima: " << cima(n) << endl;
    cout << "Arredondado modo convencional: " << normal(n) << endl;
}
