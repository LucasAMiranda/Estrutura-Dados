#include <iostream>
using namespace std;
#include<string.h>

struct DADOS_ALUNO{
    int CodAluno;
    char Nome[100];
    int Turma;  
};

bool InsertionSort(DADOS_ALUNO Alunos[], int Pos){
  DADOS_ALUNO eleito;
  int i, j;

  if(Pos == 0){
    cout << "Erro: vetor vazio!";
    return false;
  }

  for(i=0; i < Pos; i++){
      eleito = Alunos[i];
      j = i - 1;
      while((j >= 0) && (eleito.CodAluno < Alunos[j].CodAluno)){
        
        Alunos[j + 1] = Alunos[j];
        j -- ;
      }
      Alunos[j + 1] = eleito;
  }

  return true;
}