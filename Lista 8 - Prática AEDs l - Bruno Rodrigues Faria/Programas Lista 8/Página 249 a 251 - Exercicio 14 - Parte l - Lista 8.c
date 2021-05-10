#include <stdio.h>

int main(void) {
  int m[2][3];
  int count = 0;
  int count2 = 0;
  int i, j;

  printf("Matriz A:\n");
  for(i = 0; i < 2; i++) {
    for(j = 0; j < 3; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i + 1, j + 1);
      scanf("%i", &m[i][j]);
    } // END FOR J
  } // END FOR I

  for(i = 0; i < 2; i++) {
    for(j = 0; j < 3; j++) {
      if(m[i][j] <= 15 && m[i][j] >= 5) {
        count++;
      }
      else {
        count2++;
      }
    } // END FOR J
  } // END FOR I

  printf("\nA quantidade de elementos que não percentem a matriz é: %i", count2);

  return 0;
}