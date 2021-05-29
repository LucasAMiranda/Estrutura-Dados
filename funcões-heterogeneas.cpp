#include <iostream>
using namespace std;
#include<string.h>

struct DADOS_ALUNO{
    int CodAluno;
    char Nome[100];
    int Turma;
};

void imprimirDados(DADOS_ALUNO Aluno);
int main() {

    struct DADOS_ALUNO AlunoA;

    cout << "Digite o código do Aluno: ";
    cin >> AlunoA.CodAluno;


    cout << "Digite o nome do Aluno: ";
    cin >> AlunoA.Nome;

    cout << "Digite a turma: ";
    cin >> AlunoA.Turma;

    Imprimir(AlunoA);

    system("pause > null ");
}

void Imprimir(DADOS_ALUNO  Aluno){
    cout<< "Código do Aluno(a): " << Aluno.CodAluno<<endl;
    cout<< "Nome: " << Aluno.Nome <<endl;
    cout<< "Turma: " << Aluno.Turma <<endl;
}