#include <stdio.h>
#include <stdlib.h>

int main(){
  int vetora[10], vetorb[10];
  int i, j, cont = 0;

  printf("Entre com os valores do vetor!\n");
  for(i = 0;i < 10; i++) {
    printf("Vetor [%d]: ", i);
    scanf("%d", &vetora[i]);
  }

  for(i = 0;i < 10; i++) {
    if(vetora[i]>0) {
      vetorb[cont]=vetora[i];
      cont++;
    }
  }

  printf("\n\nVetor resultante!\n");
  for(i = 0; i < cont; i++){
    printf("Vetor [%d]: %d\n", i, vetorb[i]);
  }

return 0;
}