#include <stdio.h>

int main(void) {
  // variaveis do programa
  int numero = 0;

  do { // Start do-while
    printf("%i\t", numero); // Output de números 
    numero++;
  } while (numero <= 10); // End do-while 

  return 0;
}