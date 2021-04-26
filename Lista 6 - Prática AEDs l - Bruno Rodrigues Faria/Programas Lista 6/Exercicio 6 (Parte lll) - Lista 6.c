#include <stdio.h>

void PolegadaCentimetro (float valor, float* centimetro) {

  (*centimetro) = valor * 2.54;

}

void CentimetroPolegada (float valor, float* polegada) {

  (*polegada) = valor / 2.54;

}

void CelsiusFah (float valor, float* celsius) {

  (*celsius) = (valor * 1.8) + 32;

}

void FahCelsius (float valor, float* fahrenheit) {

  (*fahrenheit) = (valor - 32) / 1.8;

}

int main(void) {
  // Input
  float valor = 0;
  // Output
  float centimetro = 0;
  float polegada = 0;
  float celsius = 0;
  float fahrenheit = 0;
  

  printf("Digite um valor: ");
  scanf("%f", &valor);

  PolegadaCentimetro (valor, &centimetro);
  printf("%.2f polegadas é igual: %.2f centímetros.\n", valor, centimetro);

  CentimetroPolegada (valor, &polegada);
  printf("%.2f centímetros é igual: %.2f polegadas.\n", valor, polegada);

  CelsiusFah (valor, &celsius);
  printf("%.2f Celsius é igual: %.2f Fahrenheit.\n", valor, polegada);

  FahCelsius (valor, &fahrenheit);
  printf("%.2f Fahrenheit é igual: %.2f Celsius.\n", valor, polegada);


  return 0;
}