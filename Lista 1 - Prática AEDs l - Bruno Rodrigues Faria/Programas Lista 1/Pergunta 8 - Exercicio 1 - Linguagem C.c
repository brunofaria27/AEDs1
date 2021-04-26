#include <stdio.h>

int main(void) {
  printf("Programa desenvolvido para calcular a área de um triangulo. \n");

  printf("----------------------------- \n"); // printf com intuito de divisão no terminal 
  
// Entrada de dados.
double altura, base;
  printf("Digite o valor da altura e da base do triangulo! \n");
  
  printf("O valor do altura é: ");
  scanf("%lf", &altura);

  printf("O valor da base lado é: ");
  scanf("%lf", &base);

// Saída de dados.
double area_triangulo;
  printf("----------------------------- \n"); // printf com intuito de divisão no terminal

  area_triangulo = (base*altura)/2.0;
  printf("A área do triangulo é: %.2lf", area_triangulo);

  return 0;
}