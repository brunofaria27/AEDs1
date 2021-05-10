#include <stdio.h>

void pares(int vetor[15]) {
  int par = 0;
  int count= 0;
  int i;

  for(i = 1; i <= 15; i++) {
    if(vetor[i] % 2 == 0) {
      count++;
    }
  }

  printf("\nNo vetor há %i números pares.", count);

}

int main(void) {
  int vetor[15];
  int i;

  for(i = 0; i < 15; i++) {
    printf("Digite um número para o vetor: ");
    scanf("%i", &vetor[i]);
  }

  pares(vetor);

  return 0;
}