#include <stdio.h>

int main(void) {
  int mat[6][3];
  int i, j;
  int maior, posL = 0, posC = 0;;
  int menor, posLM = 0, posCM = 0;
  
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 3; j++) {
      printf("Digite o elemento da linha %i e coluna %i: ", i, j);
      scanf("%i", &mat[i][j]);
    } // END FOR J
  } // END FOR I

  // Testar o maior elemento
  maior = mat[0][0];
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 3; j++) {
      if (mat[i][j] > maior) {
        maior = mat[i][j];
        posL = i;
        posC = j;
      }
    } // END FOR J
  } // END FOR I
  printf("\nMaior: %i\n", maior);
  printf("Linha: %i\n", posL);
  printf("Coluna: %i\n", posC);

  // Testar o menor elemento
  menor = mat[0][0];
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 3; j++) {
      if (mat[i][j] < menor) {
        menor = mat[i][j];
        posLM = i;
        posCM = j;
      }
    } // END FOR J
  } // END FOR I
  printf("\nMenor: %i\n", menor);
  printf("Linha: %i\n", posLM);
  printf("Coluna: %i\n", posCM);

  return 0;
}