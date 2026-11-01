/* 9. Uma grande construtora que opera em diferentes países está com sérios problemas em 
relação ao fato de que seus funcionários utilizam diferentes medidas de distância dependendo 
do país onde operam. Para resolver esse problema, a diretoria da construtora solicitou que um 
programa conversor de distâncias fosse desenvolvido. O programa deve receber uma medida 
em pés e fazer conversões para as seguintes outras medidas: polegadas, jardas e milhas. 
Sabe-se que: 
1 pé = 12 polegadas 
1 jarda = 3 pés 
1 milha = 1760 jardas 
Entrada: 
a) número real indicando uma distância em pés. 
Saídas: 
a) número real indicando a conversão para polegadas. 
b) número real indicando a conversão para jardas. 
c) número real indicando a conversão para milhas. 

Exemplo de entrada: 
135 

Exemplo de saída: 
1620 
45 
0.02556818181
*/

#include <iostream>
using namespace std;

int main () {
    float pes;
    cin >> pes;

    cout << "Polegadas: " << pes * 12 << endl;
    cout << "Jardas: " << pes / 3 << endl;
    cout << "Milhas: " << pes / 3 / 1760 << endl;
}