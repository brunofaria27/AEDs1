#include <stdio.h>
#include <math.h>

int main(void) {
  printf("Para calcular a soma de quatro números inteiros digete-os abaixo.\n");

  // Entrada de dados.
int A, B, C, D;  
    printf("Digite o primeiro número: ");
    scanf("%d", &A);
        
    printf("Digite o segundo número: ");
    scanf("%d", &B);
        
    printf("Digite o terceiro número: ");
    scanf("%d", &C);

    printf("Digite o quarto número: ");
    scanf("%d", &D);

  // Saída de dados.
int resultado_soma;
  resultado_soma = A + B + C + D;
    printf("O resultado da soma entre %d + %d + %d + %d é: %d", A, B, C, D, resultado_soma);  
  return 0;
}