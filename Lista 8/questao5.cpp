/* 5. Faça um subprograma chamado DesenhaLinha. Ele deve desenhar uma linha na tela usando
vários símbolos de igual (Ex: ========). O subprograma recebe por parâmetro quantos sinais
de igual serão mostrados
*/

#include <iostream>
using namespace std;

void DesenhaLinha (int n) {
    for (int i=0; i<n; i++) {
        cout << "=";
    }
    cout << endl;
}

int main () {
    int n;
    cin >> n;
    DesenhaLinha(n);
}