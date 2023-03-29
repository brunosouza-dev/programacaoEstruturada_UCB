#include <stdio.h>
#include "conio2.h"

main() {
  int i, sales, biggest = 0;
  float average = 0;

  for (i = 0;i < 5;i++) {
    gotoxy(50,12);
    textcolor(5);
    textbackground(15);

    printf("Enter the sales price: ");
    scanf("%d", &sales);

    if (sales > biggest) {
      biggest = sales;
    }

    average += sales;

    system("cls");
  }

  gotoxy(36, 12);
  printf("The biggest sales price is: %d and the average is: %.2f\n", biggest, (average/i));
}