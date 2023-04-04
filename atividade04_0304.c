/* Make a program that prints 10 integers randomly between 0 and 100 */

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "conio2.h"

int main() {
  int i, n;

  for (i = 0; i < 10; i ++) {
    n = rand() % 101;
    textcolor(rand() % 12);
    printf("%d\n", n);
    sleep(1);
  }
}