#include <stdio.h>

int main(void) {
  int matriz[3][5];
  int i, j;
  int contador = 0;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i + 1, j + 1);
      scanf("%i", &matriz[i][j]);
      if(matriz[i][j] < 20 && matriz[i][j] > 15) {
        contador++;
      }
    } // END FOR J
  } // END FOR I
  
  printf("\nA quantidade de números entre 15 e 20 é: %i", contador);

  return 0;
}