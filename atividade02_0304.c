/* Make a program that receives as input data two grades from several students and shows as a result:
    a) What is the lowest average obtained
    b) How many students had an average greater than or equal to 7
    Note: The program must end when the value 0 is entered
*/

#include <stdio.h>

int main() {
  int i = 1, amountApr = 0;
  float average = 0, lowAverage = 99999, g1, g2;

  while (i != 0) {
    printf("Enter the first grade: ");
    scanf("%f", &g1);

    printf("Enter the second grade: ");
    scanf("%f", &g2);

    average = (g1 + g2) / 2; 

    if (average >= 7) {
      amountApr ++;
    }

    if (average < lowAverage) {
      lowAverage = average;
    }

    printf("Enter 1 to continue and 0 to stop the program: ");
    scanf("%d", &i);
  }

  printf("The smallest average is: %.2f \n", lowAverage);
  printf("The number of grades with an average equal to or greater than 7 is: %d", amountApr);
}