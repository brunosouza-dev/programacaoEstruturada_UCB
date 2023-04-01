#include <stdio.h>
#include "conio2.h"

int main(){
  int d = 0, e = 0;
  int col;

  for(d = 0; d < 6; d++){
    textcolor(d+1);
    for(e = 0; e < 11; e++){
      col=10;
      gotoxy(30+col,e);
      printf("\n%d x %d = %d\n", d, e, d * e);
    }
    getch();
  }
  return 0;
}