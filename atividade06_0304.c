/* Make a program that receives several purchases and shows the result:
    a) How many purchases are between 200 and 1500
    b) The average of all purchases made
    Note: The program must end when the value 0 is entered
*/

#include <stdio.h>

int main() {
  int i = 1, amountPur = 0;
  float purchase, average = 0, sum = 0;

  while (i != 0) {
    printf("Enter the purchase value: ");
    scanf("%f", &purchase);

    sum += purchase;

    if (purchase >= 200 && purchase <= 1500) {
      amountPur ++;
    }

    printf("Enter 1 to continue and 0 to stop the program: ");
    scanf("%d", &i);
  }

  average = sum / i;

  printf("The number of purchases between 200 and 1500 is: %.d \n", amountPur);
  printf("The average of all purchases made is: %.2f", average);
}