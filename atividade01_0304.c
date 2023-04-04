/* Make a program where the user enters several numbers and shows as a result:
    a) The largest even number
    b) How many times the program was executed
*/

#include <stdio.h>

int main() {
  int i = 1, n, biggest = 0, nAmount = 0;

  while (i != 0) {
    printf("Enter a number: ");
    scanf("%d", &n);

    nAmount ++;

    if (n > biggest && n % 2 == 0) {
        biggest = n; 
    }

    printf("Enter 1 to continue and 0 to stop the program: ");
    scanf("%d", &i);
  }
  
  printf("The largest even number is: %d\n", biggest);
  printf("The program has executed '%d' times", nAmount);
}