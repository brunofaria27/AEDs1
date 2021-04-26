#include <stdio.h>

int main(void) {
  int numero = 1;

  do {
    printf("Digite algum número: ");
    scanf("%i", &numero);
    
    if (numero > 0) {
      if (numero%2 == 0) {
        printf("O número %i é PAR.\n", numero);
      }
      else {
        printf("O número %i é ÍMPAR.\n", numero);
      }
      printf("\n");
    }
    else {
      printf("O número digitado não é inteiro, tente novamente.");
    }

  } while (numero > 0);
   
  return 0;
}