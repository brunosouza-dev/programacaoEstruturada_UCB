#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;
  float sal, filhos = 0, somaSal = 0, somaFil = 0, medFilhos = 0, medSal = 0, maiorSal = 0, sal100 = 0;

  do {
    printf("Quanto é o seu salário? ");
      scanf("%f", &sal);
    printf("Quantos filhos você tem? ");
      scanf("%f", &filhos);

    somaSal += sal;
    somaFil += filhos;

    if (sal > maiorSal) {
      maiorSal = sal;
    }

    if (sal <= 100) {
      sal100++;
    }

    i++;
  } while (sal >= 0);

  medSal = somaSal / i;
  medFilhos = somaFil / i;

  printf("\nA média salarial da população é: %.2f", medSal);
  printf("\nA média do número de filhos é: %.2f", medFilhos);
  printf("\nO maior salário é: %.2f", maiorSal);
  printf("\nO percentual de pessoas com o salário menor que R$100: %.2f", sal100 / i);
}