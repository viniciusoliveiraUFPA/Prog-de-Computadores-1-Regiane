/*3. Um professor resolve fazer na sua disciplina três avaliações com pesos diferentes. Faça 
um programa que receba três notas e seus respectivos pesos, calcule e mostre a média 
ponderada dessas notas. 
Entradas: 
Três números reais representando as notas nas avaliações 
Três números inteiros correspondendo aos pesos das avaliações 
Saídas: 
Número real correspondente a média ponderada das notas 
Exemplo de Entrada: 
80 
60.0 
70.0 
7 
3 
2 
Exemplo de Saída 
73.3333 
*/

#include <iostream> 
using namespace std; 
int main () { 
    float nota1, nota2, nota3; 
    int peso1, peso2, peso3;
    cout << "Digite 3 notas "; 
    cin >> nota1>> nota2>> nota3; 
    cout << "Digite 3 pesos inteiros"; 
    
    cin >> peso1 >> peso2 >> peso3; 
  
    float media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3); 
    cout << media; 
    return 0;
}