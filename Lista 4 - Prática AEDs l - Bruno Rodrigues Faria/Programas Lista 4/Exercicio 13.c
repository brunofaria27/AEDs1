#include <stdio.h>

int main(void) {
  int numeros = 0;
  int contador10_20 = 0;
  int contadorresto = 0;
  int valorentre10_20 = 0, valorresto = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite o número %i: ", i + 1);
    scanf("%i", &numeros);

    if (numeros >= 10 && numeros <= 20) {
      contador10_20++;
    }
    else {
      contadorresto++;
    }
  }
  printf("\n\n");

  valorentre10_20 = 10 - contadorresto;
  printf("O número de valores que está no intervalo [10,20] é de: %i\n", valorentre10_20);  

  valorresto = 10 - contador10_20;
  printf("O número de valores que não está no intervalo [10,20] é de: %i\n", valorresto);

  return 0;
}