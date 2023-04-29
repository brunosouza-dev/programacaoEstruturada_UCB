/*
  Faça um programa que receba como dados de entrada o salário de 5 funcionários e mostre como resultado:
    a) Uma lista com os salários e o desconto do inss de 11%
    b) Qual foi o maior desconto calculado no sistema
*/

#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"

void main() {
  int i;
  float sal[5] = {0}, desc[5] = {0}, salDesc[5] = {0}, maiorDesc = 0;

  for (i = 0; i < 5; i++) {
    printf("\nDigite o %dº salário:", i+1);
    scanf("%f", &sal[i]);

    desc[i] = (sal[i] * 0.11);
    salDesc[i] = sal[i] - desc[i];

    if (desc[i] > maiorDesc) {
      maiorDesc = desc[i];
    }
  }

  imprimirArraysFloat(sal, i, "Salários");
  imprimirArraysFloat(desc, i , "Descontos");
  imprimirArraysFloat(salDesc, i, "Salário descontado");

  printf("\nO maior desconto foi %.2f:", maiorDesc);
}