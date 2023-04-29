#include <stdio.h>
#include <stdlib.h>

int main() {
  int anos = 0;
  float altura1, altura2, crescAnual1, crescAnual2;

  while (altura1 >= 0 || altura2 >= 0) {
    printf("\nDigite a altura da primeira pessoa: ");
      scanf("%f", &altura1);
    printf("Digite o crescimento anual da primeira pessoa: ");
      scanf("%f", &crescAnual1);
    printf("Digite a altura da segunda pessoa: ");
      scanf("%f", &altura2);
    printf("Digite o crescimento anual da segunda pessoa: ");
      scanf("%f", &crescAnual2);
    
    do {
      altura1 += crescAnual1;
      altura2 += crescAnual2;
      anos++;
    } while (altura1 >= altura2);

    if (anos <= 100) {
      printf("\nPassados %d anos, a primeira pessoa está com %.2fm e a segunda pessoa com %.2fm", anos, altura1, altura2);
    } else {
      printf("\nImpossível calcular");
    }
  } 
}