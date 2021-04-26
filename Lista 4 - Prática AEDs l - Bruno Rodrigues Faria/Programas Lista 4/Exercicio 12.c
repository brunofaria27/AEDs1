#include <stdio.h>

int main(void) {
  int numeros;
  int quantidadenegativa = 0;
  int quantidadepositiva = 0;
  
  for (int i = 0; i < 10; i++) {
    printf("Digite o valor %i: ", i + 1);
    scanf("%i", &numeros);
    
    if (numeros > 0) {
      quantidadepositiva++;
    }
    
    if (numeros < 0) {
      quantidadenegativa++;
    }
  }
  
  quantidadenegativa = 10 - quantidadepositiva;
  printf("A quantidade de números negativos é: %d\n", quantidadenegativa);
  
  return 0;
}