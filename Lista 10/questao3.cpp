/* Questão 3. Considerando a utilização de um registro, com coordenadas X e Y, para representar um
ponto P no plano cartesiano, implemente um programa que, dado um conjunto N de retângulos, indique a
quantidade dos mesmos nos quais o ponto P se encontra dentro de suas áreas. Defina um retângulo como
um registro de dois campos do tipo Ponto, representando o vértice inferior esquerdo V1 e o vértice superior
direito V2. Obs: considere que os retângulos são paralelos aos eixos cartesianos.

Entradas:
1. Dois inteiros representando as coordenadas (x,y) do ponto P no plano cartesiano.
2. Um número inteiro representando a quantidade de retângulos a serem analisados.
3. Sequência de valores inteiros representando as coordenadas dos vértices V1 e V2 de cada
retângulo a ser analisado. Note que serão lidos 4 números inteiros para cada retângulo do
problema, de modo que os dois primeiros números se referem as coordenadas (x,y) de V1 e os
dois números seguintes as coordenadas (x,y) de V2.
Saídas:
1. Número inteiro que indica a quantidade de retângulos cujo ponto P se encontra dentro das áreas
dos respectivos retângulos.

Exemplo de entrada:
2 3
4
1 1 3 3
2 1 5 5
0 0 2 2
3 5 7 8
Exemplo de saída:
2

*/

#include <iostream>
using namespace std;

struct ponto {
    int x, y;
};

struct retangulo {
    ponto v1, v2;
};

int main () {
    ponto P;
    cin >> P.x >> P.y;
    int n;
    cin >> n;
    retangulo listaretangulos[n];
    int pdentro=0;
    for (int i=0; i<n; i++) {
        cin >> listaretangulos[i].v1.x;
        cin >> listaretangulos[i].v1.y;
        cin >> listaretangulos[i].v2.x;
        cin >> listaretangulos[i].v2.y;
        if ((P.x>=listaretangulos[i].v1.x) and (P.x<=listaretangulos[i].v2.x) and (P.y>=listaretangulos[i].v1.y) and (P.y>=listaretangulos[i].v2.y)) {
            pdentro += 1;
        }
    }

    cout << pdentro << endl;
}