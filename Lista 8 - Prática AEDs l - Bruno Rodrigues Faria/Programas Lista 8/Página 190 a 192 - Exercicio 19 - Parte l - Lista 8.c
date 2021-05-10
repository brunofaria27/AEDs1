#include <stdio.h>

int main(void) {
  int vetor1[10];
  int vetor2[10];
  int vetor3[10];
  int i = 0, j = 0;

  for (i = 0; i < 10; i++) {
    printf("Digite o número da posição %i no primeiro vetor: ", i);
    scanf("%i", &vetor1[i]);
  }

  for (i = 0; i < 10; i++) {
    printf("Digite o número da posição %i no segundo vetor: ", i);
    scanf("%i", &vetor2[i]);
  }
  
  printf("\nO valor do terceiro vetor após as multiplicações é: ");
  for (i = 0; i < 10; i++) {
    vetor3[i] = vetor1[i] * vetor2[i]; 
    printf("%d, ", vetor3[i]);
  }

  return 0;
}