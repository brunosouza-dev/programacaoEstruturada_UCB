#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Faça um Programa que receba como dados de entrada 3 palvras e 
mostre como resultado
a Quantas letras tem a maior palavra
b A maior palavra digitada
c O total de caracteres digitados
d A lista com os nomes digitados

 

*/
void main (void) {
 int cont,qtdletras, maior,total;
 char nomeAluno[3][51];
 char maiorNome[51];

 for(cont=0; cont<3; cont++){
  printf("\n Digite o nome do aluno =\n");
  gets(nomeAluno[cont]);

  qtdletras=strlen(nomeAluno[cont]);
  
  if(qtdletras > maior){
    maior = qtdletras;
    strcpy(maiorNome,nomeAluno[cont]);
    //maiorNome[51]=nomeAluno[51];
  }
  
  total+=qtdletras;
  
  printf("\n nome do aluno(a) lido = %s\n",nomeAluno[cont]);
  printf("\n nome tem %d letras ",qtdletras);
  getch();
  //system("cls");
  }

  printf("\n Lista dos nomes digitados");
 
  for(cont=0; cont<3; cont++){
    printf("\n aluno(a) = %s\n",nomeAluno[cont]);
  }

  printf("\n A maior palavra foi %s tem %d letras ",maiorNome,maior);
  printf("\n Total de caracteres digitados %d ",total);
}