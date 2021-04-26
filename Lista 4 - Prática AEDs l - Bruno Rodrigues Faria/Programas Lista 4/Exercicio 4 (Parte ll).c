#include <stdio.h>

int main(void) {
  int numerador;
  int i = 1;
  double denominador = 0.0;
  double fatorial = 1;
  double resposta = 0.0;
  

  for (numerador = 99; numerador > 80; numerador--) {
    if (denominador < 20) {
      denominador++;
    }

    do {
      fatorial = fatorial * i;
      i++;
    } while (i < denominador);
    
    resposta += numerador/fatorial;
  }
  
  printf("O resultado da equação é: %.2lf", resposta);

  return 0;
}