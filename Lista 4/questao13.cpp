/* Em uma eleição presidencial existem quatro candidatos. Os votos são informados por 
código. Assuma que cada voto será fornecido em uma linha diferente. Os dados utilizados 
para o escrutínio obedecem à seguinte codificação: 
 
Código              Significado 
1, 2, 3, 4          voto para os respectivos candidatos 1, 2, 3 e 4 
5                   voto nulo 
6                   voto em branco 
0                   finalizador de conjunto de voto 

Elabore um programa que calcule e exiba no dispositivo de saída padrão as seguintes 
informações: 
1. o total de votos para cada candidato e seu percentual sobre o total; 
2. o total de votos nulos e seu percentual sobre o total; 
3. o total de votos brancos e seu percentual sobre o total; 
4. o total de votos válidos (excluídos brancos e nulos) e o percentual sobre o total. 
*/

#include <iostream>
using namespace std;

int main () {
    float voto, c1=0, c2=0, c3=0, c4=0, nulo=0, branco=0, totalvotos=0;
    cin >> voto;
    while (voto!=0) {
        totalvotos += 1;
        if (voto==1) {
            c1 += 1;
        } else if (voto==2) {
            c2 += 1;
        } else if (voto==3) {
            c3 += 1;
        } else if (voto==4) {
            c4 += 1;
        } else if (voto==5) {
            nulo += 1;
        } else if (voto==6) {
            branco += 1;
        }
        cin >> voto;
    }
    cout << "1: " << c1 << " " << c1/totalvotos << endl;
    cout << "2: " << c2 << " " << c2/totalvotos << endl;
    cout << "3: " << c3 << " " << c3/totalvotos << endl;
    cout << "4: " << c4 << " " << c4/totalvotos << endl;
    cout << "5: " << nulo << " " << nulo/totalvotos << endl;
    cout << "6: " << branco << " " << branco/totalvotos << endl;
    cout << "7: " << totalvotos - branco - nulo << " " << (totalvotos - branco - nulo) / totalvotos << endl;
}