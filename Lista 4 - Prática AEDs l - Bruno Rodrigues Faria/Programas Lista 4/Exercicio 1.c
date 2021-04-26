/* Faça um algoritmo para imprimir os números de 1 a 10 utilizando uma estrutura ENQUANTO e um contador */
#include <stdio.h>

int main(void) {
  int numero = 0;

  printf("PROGRAMA PARA MOSTRAR NÚMEROS DE 1 A 10 USANDO WHILE:\n");

  while (numero <= 10) { // Start While
    printf("%i\t", numero);
    numero++;
  } // End While 

  return 0;
}