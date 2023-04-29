#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor[3], cont;

  for (cont = 0; cont < 3; cont++) {
    printf("\nDigite o valor %d:", cont+1);
    scanf("%d", &valor[cont]);
  }

  printf("O segundo valor do array é: %d", valor[1]);
  return 0;
}