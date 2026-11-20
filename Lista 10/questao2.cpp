/* Questão 2. Utilizando a struct Aluno do exercício anterior, modifique o programa para:
a) Acrescentar o campo situacao (string), que pode ser "Aprovado" ou "Reprovado".
b) Criar uma função que determine a situação do aluno com base na nota final (nota ≥ 7.0).
c) Exibir a lista de alunos com matrícula, nome, nota e situação.
*/

#include <iostream>
using namespace std;

struct aluno {
    long long matricula;
    string nome;
    float notafinal;
    string situacao;
};

void leitura (aluno listaalunos[], int n) {
    for (int i=0; i<n; i++) {
        cin >> listaalunos[i].matricula;
        cin.ignore();
        getline(cin, listaalunos[i].nome);
        cin >> listaalunos[i].notafinal;
    }
}

void situacionar (aluno listaalunos[], int n) {
    for (int i=0; i<n; i++) {
        if (listaalunos[i].notafinal>=7) {
            listaalunos[i].situacao = "Aprovado";
        } else {
            listaalunos[i].situacao = "Reprovado";
        }
    }
}

void saida (aluno listaalunos[], int n) {
    for (int i=0; i<n; i++) {
        cout << listaalunos[i].matricula << " ";
        cout << listaalunos[i].nome << " ";
        cout << listaalunos[i].notafinal << " ";
        cout << listaalunos[i].situacao << endl;
    }
}
int main () {
    int n;
    cin >> n;
    aluno listaalunos[n];
    leitura(listaalunos, n);
    situacionar(listaalunos, n);
    saida(listaalunos, n);
}