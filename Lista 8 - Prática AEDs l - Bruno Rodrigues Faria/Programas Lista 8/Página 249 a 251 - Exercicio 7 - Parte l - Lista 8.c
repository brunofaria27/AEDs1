#include <stdio.h>

int main(void) {
  int m1[4][6];
  int m2[6][4];
  int linha[4], coluna[4], soma[4];
  int i, j;

  for (i = 0; i < 4; i++) {
    coluna[i] = 0;
    linha[i] = 0;
  } // END FOR I

  printf("Matriz A:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 6; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i + 1, j + 1);
      scanf("%i", &m1[i][j]);
      linha[i] += m1[i][j]; //Acumulador da linha de m1
    } // END FOR J
  } // END FOR I

  printf("\n\nMatriz B:\n");
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 4; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i + 1, j + 1);
      scanf("%i", &m2[i][j]);
      coluna[j] += m2[i][j]; //Acumulador do valor da coluna de m2
    } // END FOR J
  } // END FOR I

  for (i = 0; i < 4; i++) {
    soma[i] = linha[i] + coluna[i];
    printf("A soma da %i linha da Matriz A com a %i coluna da Matriz B é: %i\n", i + 1, i + 1, soma[i]);
  } // END FOR I

  return 0;
}