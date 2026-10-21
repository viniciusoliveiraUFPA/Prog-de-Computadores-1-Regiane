/*  Faça um programa que desenha um triângulo utilizando os caracteres @ e #. O programa 
deverá ler um número inteiro que será utilizado para definir a altura e largura do triângulo. Os 
caracteres deverão ser alternados de maneira que todas as linhas do desenho sejam iniciadas 
pelo caractere @. 
Exemplo de entrada 
Exemplo de saída 
5 
@ 
@# 
@#@ 
@#@# 
@#@#@ 
8 
@ 
@# 
@#@ 
@#@# 
@#@#@ 
@#@#@# 
@#@#@#@ 
@#@#@#@# */

#include <iostream>
using namespace std;

int main () {
    int n, i=1, j=1;
    cin >> n;
    while (i<=n) {
        while (j<=i) {
            if (j%2==1) {
                cout << "@";
            } else {
                cout << "#";
            }
            j += 1;
        }
        i += 1;
        j = 1;
        cout << endl;
    }
}