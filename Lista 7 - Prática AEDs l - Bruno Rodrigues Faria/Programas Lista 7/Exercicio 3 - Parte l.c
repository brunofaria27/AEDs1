#include <stdio.h>

int fibonacci (int termo) {
  int resultado = 0;

  if (termo == 0) {
    resultado = 0;
  }
  else if (termo == 1) {
    resultado = 1;
  }
  else {
    resultado = fibonacci(termo - 1) + fibonacci(termo - 2);
  }

  return resultado;
}

int main(void) {
  int termo = 0;
  // Chamar function
  int Fibonacci = 0;

  printf("Digite o termo da posição que deseja saber: ");
  scanf("%i", &termo);
  
  Fibonacci = fibonacci(termo);
  printf("O termo na posição %i é: %i", termo, Fibonacci);

  return 0;
}