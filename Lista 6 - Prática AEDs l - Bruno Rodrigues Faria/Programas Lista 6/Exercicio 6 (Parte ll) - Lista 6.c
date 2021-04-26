#include <stdio.h>

float PolegadaCentimetro (float valor) {
  float resultado = 0;

  resultado = valor * 2.54;

  return resultado;
}

float CentimetroPolegada (float valor) {
  float resultado = 0;

  resultado = valor / 2.54;

  return resultado;
}

float CelsiusFah (float valor) {
  float resultado = 0;

  resultado = (valor * 1.8) + 32;

  return resultado;
}

float FahCelsius (float valor) {
  float resultado = 0;

  resultado = (valor - 32) / 1.8;

  return resultado;
}

int main(void) {
  float valor = 0;
  float centimetro = 0;
  float polegada = 0;
  float celsius = 0;
  float fahrenheit = 0;

  printf("Digite um valor: ");
  scanf("%f", &valor);

  centimetro = PolegadaCentimetro(valor);
  printf("%.2f polegadas é igual: %.2f centímetros.\n", valor, centimetro);

  polegada = CentimetroPolegada(valor);
  printf("%.2f centímetros é igual: %.2f polegadas.\n", valor, polegada);

  celsius = CelsiusFah(valor);
  printf("%.2f Celsius é igual: %.2f Fahrenheit.\n", valor, polegada);

  fahrenheit = FahCelsius(valor);
  printf("%.2f Fahrenheit é igual: %.2f Celsius.\n", valor, polegada);


  return 0;
}