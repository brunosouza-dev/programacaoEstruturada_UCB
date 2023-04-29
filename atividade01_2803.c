#include <stdio.h>

int main() {
  int i, n, biggest = 0, smallest = 99999;

  for (i = 0;i < 5;i ++) {
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > biggest) {
      biggest = n;
    }

    if (n < smallest) {
      smallest = n;
    }

    system("cls");
  }

  printf("The biggest number is: %d and the smallest number is: %d\n", biggest, smallest);
}