#include <stdio.h>

int main(void) {
  int codigo = 0;
  //contador de codigo
  int gasolina = 0;
  int diesel = 0;
  int alcool = 0;

  printf("Códigos dos combustíveis:\n1. Álcool\n2. Gasolina\n3. Diesel\n4. Fim do programa\n");

  do {
    printf("\nDigite o código do combustível: ");
    scanf("%i", &codigo);

    if (codigo < 1 || codigo > 4) {
      printf("O código informado foi inválido.\n");
    }
    else if (codigo == 1) {
      alcool++;
    }
    else if (codigo == 2) {
      gasolina++;
    }
    else if (codigo == 3) {
      diesel++;
    }
    else {
      printf("\nMuito obrigado!");
      printf("\nO número de pessoas que usou Álcool foi: %i", alcool);
      printf("\nO número de pessoas que usou Gasolina foi: %i", gasolina);
      printf("\nO número de pessoas que usou Diesel foi: %i", diesel);
    }
  } while (codigo != 4);

  return 0;
}