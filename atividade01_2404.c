/* 
  Faca um programa que receba como dados de entrada 10 numeros inteiros, e mostre como resultado:
  a) A lista com todos os numeros digitados
  b) A lista com todos os numeros pares digitados
  c) A lista com todos os numeros impares digitados
  Obs.: utilizar obrigatoriamente um vetor para cada lista
*/

#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"

int main() {
  int valor[10], pares[10] = {0}, impares[10] = {0}, i, j = 0, k = 0;

  //laço for para que o usuário digite 10 números.
  for (i = 0; i < 10; i++) {
    printf("\nDigite o valor %d:", i+1);
    scanf("%d", &valor[i]);
  }

  //laço for para analisar se cada número por posição no array 'valor' é par ou ímpar e atribuir o valor a seu devido array.
  for (i = 0; i < 10; i++) {
    if (valor[i] % 2 == 0) {
      pares[j] = valor[i];
      j++;
    } else {
      impares[k] = valor[i];
      k++;
    }
  }

  //chamando a função para imprimir o array, passando como parâmetros os elementos, o tamanho e o nome do array a ser imprimido.
  imprimirArrays(valor, i, "Valor");
  //chamando a função para ordenar o array de forma crescente, passando como parâmetros os elementos já ordenados e o tamanho.
  ordenarArray(pares,j);
  imprimirArrays(pares, j, "Pares");
  ordenarArray(impares,k);
  imprimirArrays(impares, k, "Ímpares");

  return 0;
}