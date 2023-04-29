/*Faca um programa que receba como dados de entrada 5 numeros inteiros e mostre como resultado:
  a) A lista com os números digitados
  b) A média dos números digitados
Obs.: Utilizar duas variaveis e um vetor*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor[5], i;
  float soma = 0;

  for (i = 0; i < 5; i++) {
    printf("\nDigite o valor %d:", i+1);
    scanf("%d", &valor[i]);

    soma += valor[i];
  }

  printf("\nArray 'Valor': [");
   for (i = 0; i < 5; i++) {
      printf("%d", valor[i]);

      if (i < 4) {
         printf(", ");
      }
    }
  printf("]");

  printf("\nA média é: %.2f", soma / i);
  return 0;
}