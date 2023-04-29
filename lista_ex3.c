#include <stdio.h>
#include <stdlib.h>

int main(){
  int i = 0, maior = 0, pares = 0;

  do {
    printf("%d", rand() % 100000);
    i++;

    if (rand() % 100000 > maior){
      maior = rand() % 100000;
    }

    if(rand() % 2 == 0){
      pares++;
    }
  } while (rand() != 0);

  printf("\nNúmeros sorteados: %d", i);
  printf("\nMaior número: %d", maior);
  printf("\nNúmeros pares sorteados: %d", pares);
}