#include <stdio.h>

int main(void) {
  int m[3][3];
  int mr[3][3];
  int num = 0;
  int mult = 0;
  int i, j;

  printf("Matriz A:\n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i + 1, j + 1);
      scanf("%i", &m[i][j]);
    } // END FOR J
  } // END FOR I

  printf("\nDigite um número inteiro: ");
  scanf("%i", &num);

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      mr[i][j] = m[i][j] * num;
    } // END FOR J
  } // END FOR I

  printf("\nMatriz Resultante:\n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("%i\t", mr[i][j]);
    } // END FOR J
    printf("\n");
  } // END FOR I

  return 0;
}