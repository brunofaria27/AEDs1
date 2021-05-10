#include <stdio.h>

void maior(int m[10][10]) {
  int maior = 0;
  int i, j;

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (j > i) {
        if (m[i][j] > maior) {
        maior = m[i][j];
        }
      }
    } // END FOR J
  } // END FOR I

  printf("O maior elemento acima da diagonal principal é: %i", maior);
  
}

int main(void) {
  int m[10][10];
  int i, j;

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i + 1, j + 1);
      scanf("%i", &m[i][j]);
    } // END FOR J
  } // END FOR I

  maior(m);

  return 0;
}