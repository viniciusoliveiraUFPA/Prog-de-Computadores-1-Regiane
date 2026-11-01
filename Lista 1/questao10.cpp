/* 10. Faça um programa que leia dois pontos e calcule a distância entre eles no plano cartesiano. 
A distância deverá ser exibida na saída padrão. 
Sabe-se que dados dois pontos A = (x1,y1) e B = (x2,y2), a distância entre eles é a raiz quadrada 
da soma das diferenças das coordenadas ao quadrado, representada na fórmula a seguir. 
Cada ponto será representado por dois valores numéricos, representando as coordenadas x e 
y do ponto, respectivamente. O exemplo a seguir leva ao cálculo da distância entre (-2.1, 4.6) 
e (3.3, -1.6). 

Entrada: 
1. Número real da coordenada x do primeiro ponto. 
2. Número real da coordenada y do primeiro ponto. 
3. Número real da coordenada x do segundo ponto. 
4. Número real da coordenada y do segundo ponto. 

Saída 
1. Número real representando a distância entre os pontos. 

Exemplo de entrada:                     Exemplo de saída:
-2.1                                    8.22192
4.6 
3.3 
-1.6

6                                       15.77086
2.1
-9.4
-1.3
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float x1, y1, x2, y2;
    float distancia;
    cin >> x1 >> y1 >> x2 >> y2;

    distancia = sqrt (pow(x2-x1, 2) + pow(y2-y1, 2));
    cout << distancia;
}