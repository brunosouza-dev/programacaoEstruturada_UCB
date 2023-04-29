int sum(int a, int b) {    
    int r = a + b;
    printf("The sum is: %d", r);
    return r;
  }

int dezPct(int a) {
  double r = a * 0.1;
  printf("Ten percent of value is: %.2f", r);
  return r;
}

void imprimirArrays(int *array, int tamanho, char *nome) {
  printf("\nArray '%s': [", nome);
  for (int i = 0; i < tamanho; i++) {
    //Imprimir apenas números diferentes de 0
    if (array[i] != 0) {
      printf("%d", array[i]);
      //Verificando se o índice atual não é o último, para que após o último elemento fique sem a ','.
      if (i < tamanho - 1) {
        printf(", ");
      }
    }
  }
  printf("]\n");
}

void imprimirArraysFloat(float *array, int tamanho, char *nome) {
  printf("\nArray '%s': [", nome);
  for (int i = 0; i < tamanho; i++) {
    //Imprimir apenas números diferentes de 0
    if (array[i] != 0) {
      printf("%.2f", array[i]);
      //Verificando se o índice atual não é o último, para que após o último elemento fique sem a ','.
      if (i < tamanho - 1) {
        printf(", ");
      }
    }
  }
  printf("]\n");
}

void imprimirArraysString(char *array, int tamanho, char *nome) {
  printf("\nArray '%s': [", nome);
  for (int i = 0; i < tamanho; i++) {
    //Imprimir apenas números diferentes de 0
    if (array[i] != 0) {
      printf("%s", array[i]);
      //Verificando se o índice atual não é o último, para que após o último elemento fique sem a ','.
      if (i < tamanho - 1) {
        printf(", ");
      }
    }
  }
  printf("]\n");
}

void ordenarArray(int *array, int tamanho) {
  int i, j, temp; 
  //laço for que percorre o array do início até o penúltimo elemento.
  for (i = 0; i < tamanho - 1; i++) { 
    //laço for que percorre o array do início até o penúltimo elemento a cada iteração de i. O -i subtrai os elementos que já estão na posição correta. O -1 é pra evitar que o índice j+1 acesse um elemento que não existe.
    for (j = 0; j < tamanho - i - 1; j++) { 
      //verifica se o elemento atual é maior que o próximo elemento, caso seja, ele vai sendo substituido de forma que o maior sempre seja colocado adiante.
      if (array[j] > array[j+1]) { 
        //uttiliza-se a variavel auxiliar temp pra passar o maior adiante e o menor para a posição atual.
        temp = array[j]; 
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}