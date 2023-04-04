#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "conio2.h"

int main() {
  int i, n;

  for (i = 0; i < 999999; i ++) {
    n = rand() % 101;
    textcolor(rand() % 12);
    gotoxy(rand() % 80, rand() % 23);
    printf("%d\n", n);
  }
}