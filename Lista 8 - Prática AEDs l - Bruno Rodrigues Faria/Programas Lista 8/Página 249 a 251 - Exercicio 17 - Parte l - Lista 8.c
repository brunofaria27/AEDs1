#include <stdio.h>

int main(void) {
  int m[10][10];
  int soma = 0;
  int i, j;
  float media = 0;
  
  for(i = 0; i < 10; i++) {
    for(j = 0; j < 10; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i, j);
      scanf("%i", &m[i][j]);
    }
  }

  for(i = 0; i < 10; i++) {
    for(j = 0; j < 10; j++) {
      if ( i == j) {
        soma = soma + m[i][j];
      }
    }
  }

  media = (float)soma/10;

  printf("\nA média é: %.2f", media);
  
  return 0;
}