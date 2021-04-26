#include <stdio.h>

void calcularMedia (double numero, double valoresdigitados, double soma) {
  double media = 0;

  media = soma/(valoresdigitados - 1);
  printf("A média dos números digitados é: %.2lf", media);
}

int main(void) {
  double numero;
  double valoresdigitados = 0; // contador de valore digitados
  double soma = 0;

  do {
    printf("Digite '0' para sair do programa é receber os cálculos.\n");
    printf("Digite um número: ");
    scanf("%lf", &numero);

    soma += numero;
    
    valoresdigitados++;
    
    if (numero == 0) {
      printf("\nSaindo do programa para gerar resultados.\n");
      calcularMedia (numero, valoresdigitados, soma);
    }
  } while (numero != 0);
  

  return 0;
}