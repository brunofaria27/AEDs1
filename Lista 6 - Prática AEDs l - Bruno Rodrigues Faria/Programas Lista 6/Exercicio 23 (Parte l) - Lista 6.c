#include <stdio.h>
#include <stdlib.h>

float condicaoExistencia (float lado1, float lado2, float lado3) {
  int resposta = 0;

  if (lado1 >= lado2 + lado3 || lado2 >= lado3 + lado1 || lado3 >= lado1 + lado2) {
    resposta = 0;
  }
  else {
    resposta = 1;
  }

  return resposta;
} // End função condição de existencia

float tipoTriangulo (float lado1, float lado2, float lado3) {
  int resposta = 0;

  if (lado1 == lado2 && lado2 == lado3) {
    resposta = 1;
  }
  else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1) {
    resposta = 2;
  }
  else {
    resposta = 3;
  }
      
  return resposta;
} // End função do tipo de triangulo


int main(void) {
  // Input 
  float lado1 = 0.0;
  float lado2 = 0.0;
  float lado3 = 0.0;
  // Funções
  float condexistencia = 0.0;
  float tipotriangulo = 0.0;

  // Input de dados
  printf("Digite o valor do lado 1 do triângulo: ");
  scanf("%f", &lado1);

  printf("Digite o valor do lado 2 do triângulo: ");
  scanf("%f", &lado2);

  printf("Digite o valor do lado 3 do triângulo: ");
  scanf("%f", &lado3);

  // Caso input de dados esteja inválido
  if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
    printf("Lados nulos ou negativos nao sao aceitos.");
    exit(1); // Saída do programa caso seja dados inválidos
  }


  // Output 
  condexistencia = condicaoExistencia (lado1, lado2, lado3);
  if (condexistencia == 1) {
    printf("Triângulo existente.\n");

    tipotriangulo = tipoTriangulo (lado1, lado2, lado3);

    if (tipotriangulo == 1) {
      printf("Triangulo equilatero.\n");
    } // End if
    else if (tipotriangulo == 2) {
      printf("Triangulo isosceles.\n");
    } // End else if
    else {
      printf("Triangulo escaleno.\n");
    } // End else

  } // End (condexistencia == 1)
  else {
    printf("Triângulo inexistente.\n");
  } // End else

  return 0;
}