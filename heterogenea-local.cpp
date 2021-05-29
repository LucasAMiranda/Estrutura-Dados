#include <iostream>
using namespace std;
#include<string.h>

int main() {
   struct DADOS_ALUNO{
        int CodAluno;
        char Nome[100];
        int Turma;
    };

    struct DADOS_ALUNO AlunoA;

    AlunoA.CodAluno=10;
    strcpy(AlunoA.Nome, "Lucas");
    AlunoA.Turma = 250;

    cout<< "Código do Aluno(a): " << AlunoA.CodAluno<<endl;
    cout<< "Nome: " << AlunoA.Nome<<endl;
    cout<< "Turma: " << AlunoA.Turma<<endl;

    system("pause > null ");
}