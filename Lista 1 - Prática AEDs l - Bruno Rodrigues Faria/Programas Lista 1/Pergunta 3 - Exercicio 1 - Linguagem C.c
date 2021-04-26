#include <stdio.h>
#include <math.h>

int main(void) {
  printf("Vamos descobrir a raiz quadrada do número desejado!\n");
  
// Entrada de dados.
double numero;  
  printf("Digite o número no qual deseja saber a raiz quadrada: ");
  scanf("%lf", &numero);

// Saída de dados.
double resultado_raiz;
  resultado_raiz = sqrt(numero);
  printf("O valor da raiz quadrada é: %.4lf", resultado_raiz);
  return 0;
}