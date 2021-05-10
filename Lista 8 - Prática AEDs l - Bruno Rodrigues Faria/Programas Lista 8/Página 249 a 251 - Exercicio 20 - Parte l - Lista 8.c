#include <stdio.h>

int main(void) {
  int m[5][5];
  int resultante[5][5];
  int maior = 0;
  int i, j;

  printf("Matriz A:\n");
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i, j);
      scanf("%i", &m[i][j]);
    } // END FOR J
  } // END FOR I

  // Testar o maior elemento
  maior = m[0][0];
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (m[i][j] > maior) {
        maior = m[i][j];
      }
    } // END FOR J
  } // END FOR I

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if(i == j) {
        resultante[i][j] = m[i][j] * maior;
      }
      else {
        resultante[i][j] = m[i][j];
      }
    } // END FOR J
  } // END FOR I

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("%i\t", resultante[i][j]);
    } // END FOR J
    printf("\n");
  } // END FOR I
  return 0;
}