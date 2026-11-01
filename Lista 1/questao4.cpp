/* 4. Faça um programa que possa entrar com o valor de um produto e imprima o novo valor 
após ter recebido um desconto de 12%.
*/

#include <iostream> 
using namespace std; 
int main () { 
    float preco, novopreco; 
    cout << "Digite o preço do produto "; 
    cin >> preco; 
    novopreco = preco - 0.12 * preco; 
    cout << "Seu novo preco: " << novopreco; 
    return 0;
}