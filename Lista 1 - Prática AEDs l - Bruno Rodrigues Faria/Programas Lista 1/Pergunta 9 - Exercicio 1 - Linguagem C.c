#include <stdio.h>

int main(void) {
  printf("Programa desenvolvido para calcular a área de um circulo. \n");

  printf("----------------------------- \n"); // printf com intuito de divisão no terminal 
  
// Entrada de dados.
double raio;
  printf("O valor do raio do círculo é: ");
  scanf("%lf", &raio);

// Saída de dados.
double area_circulo;
  printf("----------------------------- \n"); // printf com intuito de divisão no terminal

  area_circulo = 3.14*(raio*raio);
  printf("A área do círculo é: %.2lf", area_circulo);

  return 0;
}