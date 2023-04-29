#include <stdio.h>
#include <stdlib.h>

int main() {
  int mediaMaior7 = 0;
  float i, nota, menor = 999999, media = 0, soma = 0;
  
  do {
    printf("Informe a nota do aluno: ");
    scanf("%f", &nota);

    if(nota < menor){
        menor = nota;
    }

    if(nota >= 7){
       mediaMaior7++;
    }

    soma += nota;
    i++;
  } while (nota != 0);

    media = soma / i;

    printf("\nAlunos aprovados (media maior ou igual a 7,0): %d", mediaMaior7);
    printf("\nMedia da turma: %.2f", media);
    printf("\nMenor nota da turma: %.2f", menor);
    printf("\nO programa rodou '%.f' vezes", i);
}