/* 6. Faça uma função que recebe duas palavras e retorna a maior delas. Em caso de empate, 
retornar a primeira palavra. 
Obs 1: a função len(variavel) retorna um número inteiro que representa quantidade de 
caracteres armazenados em variavel. 
Obs 2: a função palavra.size() retorna um número inteiro que representa quantidade de 
caracteres armazenados em variavel, sendo variável do tipo string. 

Entrada: 
Duas palavras 

Saída: 
A maior palavra. 

Exemplo de entrada:                 Exemplo de saída: 
laranja                             macarronada
macarronada 
*/

#include <iostream>
using namespace std;

string maiorpalavra (string p1, string p2) {
    if (p1.size()>=p2.size()) {
        return p1;
    } else {
        return p2;
    }
}

int main () {
    string p1, p2;
    cin >> p1 >> p2;
    cout << maiorpalavra(p1, p2) << endl;
}