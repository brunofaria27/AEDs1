#include <stdio.h>

int main(void) {
  int m1[3][8];
  int m2[3][8];
  int resultado[3][8];
  int i, j;

  printf("Matriz A:\n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 8; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i + 1, j + 1);
      scanf("%i", &m1[i][j]);
    } // END FOR J
  } // END FOR I

  printf("\n\nMatriz B:\n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 8; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i + 1, j + 1);
      scanf("%i", &m2[i][j]);
    } // END FOR J
  } // END FOR I

  printf("\n\nMatriz Resultado Soma:\n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 8; j++) {
      resultado[i][j] = m1[i][j] + m2[i][j];
    }
  }

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 8; j++) {
      printf("%i\t", resultado[i][j]);
    }
    printf("\n");
  }

  printf("\n\nMatriz Resultado Subtração:\n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 8; j++) {
      resultado[i][j] = m1[i][j] - m2[i][j];
    }
  }

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 8; j++) {
      printf("%i\t", resultado[i][j]);
    }
    printf("\n");
  }
	
  return 0;
}