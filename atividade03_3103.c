#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
/*
Faça um programa que emule um relogio digital imprimindo na tela 
hora minuto e segundo*/

int main() {
  int seg, min, hora;
  int segdesp, mindesp, horadesp;

  system("color e4");
  printf("Digite a hora para despertar ");
  scanf("%d", &horadesp);
  printf("Digite o minuto para despertar ");
  scanf("%d", &mindesp);
  printf("Digite o segundo para despertar ");
  scanf("%d", &segdesp);

  for (hora = 0; hora < 24; hora++) {
    for (min = 0; min < 60; min++) {
      for (seg = 0; seg < 60; seg++) {
        printf("%d : %d : %d ", hora, min, seg); // sleep(1); 
        
        if (horadesp == hora && mindesp == min && segdesp == seg) {
          printf("Despertar \a");
          Sleep(1);
          system("cls");
          printf("Despertar \a");
          Sleep(1);
          system("cls");
          printf("Despertar \a");
          Sleep(1);
          system("cls");
        }
        system("cls");
      }
    }
  }
  return 0;
}
