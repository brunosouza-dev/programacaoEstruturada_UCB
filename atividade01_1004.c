#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"

int main() {
  int n1, n2;
  printf("Enter the first value: ");
    scanf("%d", &n1);
  printf("Enter the second value: ");
    scanf("%d", &n2);

  sum(n1, n2);
}