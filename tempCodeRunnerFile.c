#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"

int main() {
  int valor[10], pares[10] = {0}, impares[10] = {0}, i, j = 0, k = 0;

  for (i = 0; i < 10; i++) {
    printf("\nDigite o valor %d:", i+1);
    scanf("%d", &valor[i]);
  }

  for (i = 0; i < 10; i++) {
    if (valor[i] % 2 == 0) {
      pares[j] = valor[i];
      j++;
    } else {
      impares[k] = valor[i];
      k++;
    }
  }

  imprimirArrays(valor, i, "Valor");
  imprimirArrays(pares, j, "Pares");
  imprimirArrays(impares, k, "Ímpares");

  return 0;
}