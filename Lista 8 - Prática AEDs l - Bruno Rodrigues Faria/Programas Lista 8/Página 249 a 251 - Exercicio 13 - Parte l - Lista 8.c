#include <stdio.h>

int main(void) {
  int m[6][4];
  int resultante[6][4];
  int maior = 0;
  int pos = 0;
  int i, j;

  printf("Matriz A:\n");
  for(i = 0; i < 6; i++) {
    for(j = 0; j < 4; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i, j);
      scanf("%i", &m[i][j]);
    } // END FOR J
  } // END FOR I

  maior = m[0][0];
  for(i = 0; i < 6; i++) {
    for(j = 0; j < 4; j++) {
      if(m[i][j] > maior) {
        maior = m[i][j];
        pos = i;
      }
    } // END FOR J
  } // END FOR I

  for(i = 0; i < 6; i++) {
    for(j = 0; j < 4; j++) {
      if(i == pos) {
        resultante[i][j] = m[i][j] * maior;
      }
      else {
        resultante[i][j] = m[i][j];
      }
    } // END FOR J
  } // END FOR I

  printf("\nMatriz Resultante:\n");
  for(i = 0; i < 6; i++) {
    for(j = 0; j < 4; j++) {
      printf("%i\t", resultante[i][j]);
    } // END FOR J
    printf("\n");
  } // END FOR I

  return 0;
}