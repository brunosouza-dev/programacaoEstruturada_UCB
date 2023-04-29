#include <stdio.h>
#include <string.h>

void main(void) {
  char nomeAluno[51];
  int tamanho;

  printf("Digite o nome do aluno:");
  fgets(nomeAluno, 51, stdin);

  tamanho = strlen(nomeAluno) - 1;

  printf("Nome do aluno lido: %s, tem %d letras", nomeAluno, tamanho);
  getchar();
}