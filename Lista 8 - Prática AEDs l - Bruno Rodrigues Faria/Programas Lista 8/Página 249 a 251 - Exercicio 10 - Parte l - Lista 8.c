#include <stdio.h>

int main(void) {
  int m[5][5];
  int soma = 0;
  int i, j;

  printf("Matriz A:\n");
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i, j);
      scanf("%i", &m[i][j]);
    } // END FOR J
  } // END FOR I

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if (i == 4) {
        soma = soma + m[4][j];
      }
    } // END FOR J
  } // END FOR I
  printf("\nA soma dos elementos da linha 4 é: %i", soma);

  soma = 0; // Limpando váriavel
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if (j == 2) {
        soma = soma + m[i][2];
      }
    } // END FOR J
  } // END FOR I
  printf("\nA soma dos elementos da coluna 2 é: %i", soma);

  soma = 0; // Limpando váriavel
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if (j == i) {
        soma = soma + m[i][j];
      }
    } // END FOR J
  } // END FOR I
  printf("\nA soma dos elementos da diagonal principal é: %i", soma);

  soma = 0; // Limpando váriavel
  for(i = 1; i < 5; i++) {
    for(j = 1; j < 5; j++) {
      if (i + j == 6) {
        soma = soma + m[i][j];
      }
    } // END FOR J
  } // END FOR I
  printf("\nA soma dos elementos da diagonal secundária é: %i", soma);

  soma = 0; // Limpando váriavel
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
        soma = soma + m[i][j];
    } // END FOR J
  } // END FOR I
  printf("\nA soma dos elementos da matriz é: %i", soma);

  return 0;
}