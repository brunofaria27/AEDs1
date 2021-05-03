#include <stdio.h>

int somaDigitos (int numero) {
  int resultado = 0;
  
  if (numero % 10 == numero) {
    return numero;
  }
  else {
    return numero % 10 + somaDigitos(numero / 10);
  }
   
}

int main(void) {
  int numero = 0;
  // Chamar função
  int Soma = 0;

  printf("Digite um número: ");
  scanf("%i", &numero);

  Soma = somaDigitos(numero);
  printf("A soma dos digitos é: %i", Soma);

  return 0;
}