#include <stdio.h>

int main() {
  int m[2][4];
  int i, j;
  int count;
  float somai = 0, somaj = 0;
  float counti = 0, countj = 0;
  float media = 0;

  for(i = 0; i < 2; i++) {
    for(j = 0; j < 4; j++) {
      printf("Preencha a matriz M[%d][%d]: ",i + 1 , j + 1);
      scanf("%d",&m[i][j]);
    }
  }

  for(i = 0; i < 2; i++) {
    for(j = 0; j < 4; j++) {
      if(m[i][j] > 12 && m[i][j] < 20){ 
        count++;
      }
    }
  }
  printf("A quantidade de elementos entre 12 e 20 e: %d \n", count);

  for(i = 0; i < 2; i++) {
    if(m[i][0] % 2 == 0) {
      somai = somai + m[i][0];
      counti++;
    }
      for(j = 0; j < 4; j++) {
        if(m[i][j] % 2 == 0) {
        somaj = somaj + m[i][j];
        countj++;
        }
      }
  }
  media = (somai + somaj) / (counti + countj);

  printf("A media dos elementos pares e: %.2f", media);
  
  return 0;
}