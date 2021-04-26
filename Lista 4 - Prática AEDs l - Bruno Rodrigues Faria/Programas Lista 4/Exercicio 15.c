#include <stdio.h>

int main(void) {
  float numero = 0.0;

  do {
    printf("Digite algum número: ");
    scanf("%f", &numero);

    if (numero > 0) {
      printf("O número %.2f é POSITIVO.\n", numero);
    }
    
    if (numero < 0) {
      printf("O número %.2f é NEGATIVO.\n", numero);
    }
  } while (numero != 0);

  return 0;
}