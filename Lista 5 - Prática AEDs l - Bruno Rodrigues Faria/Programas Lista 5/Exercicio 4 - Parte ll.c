#include <stdio.h>
#include <math.h>

void calculoVolume (int raio) {
  double volume = 0;

  volume = 4/3 * pow(raio, 3);

  printf("O valor do volume da esfera é: %.2lf", volume);
}

int main(void) {
  double raio = 0;

  printf("Digite o valor do raio: ");
  scanf("%lf", &raio);

  calculoVolume (raio);

  return 0;
}