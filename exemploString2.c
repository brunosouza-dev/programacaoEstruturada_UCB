#include <stdio.h>
#include <string.h>

void main(void) {
  char str1[80], str2[80];

  printf("Digite duas strings: \n");
  fgets(str1, 80, stdin);
  fgets(str2, 80, stdin);

  printf("\nComprimentos: \nstring1: (%d) \nstring2:(%d)", strlen(str1) - 1, strlen(str2) - 1);

  if(!strcmp(str1,str2)) {
    printf("\nstrings iguais\n");
  }
  strcat(str1,str2); printf("\nstr1 + str2 = %s\n", str1);

  if(strrchr(str1,'t')) printf("t está em str1\n");
  if(strstr(str1, "tudo")) printf("tudo está em str1\n");
}