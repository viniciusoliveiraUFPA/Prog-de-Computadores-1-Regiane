/* Questão 4. Elabore um programa que leia os dados de cinco carros diferentes (cada carro tem um modelo,
ano e preço). Leia um preço de referência e mostre as informações de todos os carros com preço menor
(na ordem em que foram lidos) do que o preço de referência.
● Considere que sempre existirá pelo menos um carro com preço menor que o de
referência.
● Utilize registros para armazenar as informações dos carros.
Entradas:
1. Modelo do carro (string)
2. Ano do modelo (int)
3. Preço (float)
4. Preço de referência
Saídas:
1. Todas as informações dos carros com preço menor do que o preço de referência
*/

#include <iostream>
using namespace std;

struct carro {
    string modelo;
    int ano;
    float preco;
};

int main () {
    carro listacarros[5];
    for (int i=0; i<5; i++) {
        cin >> listacarros[i].modelo;
        cin >> listacarros[i].ano;
        cin >> listacarros[i].preco;
    }

    float precoref;
    cin >> precoref;

    for (int i=0; i<5; i++) {
        if (listacarros[i].preco<precoref) {
            cout << listacarros[i].modelo << endl;
            cout << listacarros[i].ano << endl;
            cout << listacarros[i].preco << endl;
        }
    }
}