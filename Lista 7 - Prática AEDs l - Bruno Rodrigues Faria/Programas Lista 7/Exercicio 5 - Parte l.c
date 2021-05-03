#include <stdio.h>
int soma (int numero) {
  int resultado = 0;

  if (numero == 0) {
    resultado = 0;
  }
  else {
    resultado = numero + soma(numero - 1);
  }

  return resultado;
}

int main(void) {
  int numero = 0;
  //Chamar função
  int Soma = 0;

  printf("Digite um número: ");
  scanf("%i", &numero);
  
  Soma = soma(numero);
  printf("A soma dos números até %i é: %i", numero, Soma);

  return 0;
}