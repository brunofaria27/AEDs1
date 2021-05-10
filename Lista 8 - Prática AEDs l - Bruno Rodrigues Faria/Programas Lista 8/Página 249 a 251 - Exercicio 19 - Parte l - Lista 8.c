#include <stdio.h>

int main(void) {
  int m[8][6];
  float soma = 0;
  int i, j;

  printf("Matriz A:\n");
  for(i = 0; i < 8; i++) {
    for(j = 0; j < 6; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i, j);
      scanf("%i", &m[i][j]);
    } // END FOR J
  } // END FOR I

  for(i = 0; i < 8; i++) {
    for(j = 0; j < 6; j++) {
      if(i == 1 || i == 3 || i == 5 || i == 7) {
        soma = soma + m[i][j];
      }
    } // END FOR J
  } // END FOR I

  printf("A média dos elementos das linhas pares da matriz é: %i", soma/24);

  return 0;
}