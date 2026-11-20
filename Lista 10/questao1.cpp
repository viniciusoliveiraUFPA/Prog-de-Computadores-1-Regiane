/* Questão 1. (Cadastro básico de alunos). Defina uma struct Aluno contendo:
- matrícula (int)
- nome (string)
- nota final (float)

Crie um programa em C++ que:
a) Leia os dados de N alunos (N definido pelo usuário) e armazene-os em um array
unidimensional (vetor) de Aluno.
b) Implemente uma função para leitura dos dados.
c) Implemente uma função para exibir os dados de todos os alunos.
*/

#include <iostream>
#include <string>
using namespace std;

struct aluno {
    long long matricula;
    string nome;
    float notafinal;
};

void leitura (aluno listaalunos[], int n) {
    for (int i=0; i<n; i++) {
        cin >> listaalunos[i].matricula;
        cin.ignore();
        getline(cin, listaalunos[i].nome);
        cin >> listaalunos[i].notafinal;
    }
}

void saida (aluno listaalunos[], int n) {
    for (int i=0; i<n; i++) {
        cout << listaalunos[i].matricula << " ";
        cout << listaalunos[i].nome << " ";
        cout << listaalunos[i].notafinal << endl;
    }
}
int main () {
    int n;
    cin >> n;
    aluno listaalunos[n];
    leitura(listaalunos, n);
    saida(listaalunos, n);
}