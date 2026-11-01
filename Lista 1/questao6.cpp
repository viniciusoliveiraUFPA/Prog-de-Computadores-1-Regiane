/* 6. Faça um programa que leia 2 valores inteiros para duas variáveis a e b, escreva os 
conteúdos das variáveis na tela, e em seguida troque os conteúdos das duas variáveis, 
exibindo novamente os seus conteúdos na tela.
*/

#include <iostream> 
using namespace std; 
int main () { 
    int a, b, temp;
    cin >> a >> b;
    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;

    temp = b; 
    b = a;
    a = temp;

    cout << "Novo valor de a: " << a <<endl; 
    cout << "Novo valor de b: " << b <<endl; 
    return 0;
} 