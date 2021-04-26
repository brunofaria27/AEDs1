#include <stdio.h>

void somaDivisores (int numero) {
  int somaDivisores = 0;
   // Imprimi os divisores e obtêm a sua quantidade.
  printf("Os divisores são:\t");
    
    for (int i = 1; i <= numero; ++i) {
      // Um número é divisor de outro quando o resto da divisão for igual a 0.
      if (numero % i == 0) {
        printf("%d\t", i);
        somaDivisores += i;
      }
    } 

  printf("\nA soma dos divisores é: %i", somaDivisores);
}

int main(void) {
  int numero = 0;

  printf("Digite um número: ");
  scanf("%i", &numero);

  somaDivisores (numero);
  
  return 0;
}