#include <stdio.h>

void calculoSegundos(int horas, int minutos, int segundos) {
  int transformacao1 = 0; // Horas para segundos 
  int transformacao2 = 0; // Minutos para segundos 
  int resultado = 0;      // Soma de todos os segundos

  transformacao1 = horas * 60 * 60;
  transformacao2 = minutos * 60;
  resultado = transformacao1 + transformacao2 + segundos;

  printf("%ih %imin %isegundos = %i segundos", horas, minutos, segundos, resultado);
}

int main(void) {
  int horas = 0;
  int minutos = 0;
  int segundos = 0;

  printf("Digite a quantidade de horas: ");
  scanf("%i", &horas);
  printf("Digite a quantidade de minutos: ");
  scanf("%i", &minutos);
  printf("Digite a quantidade de segundos: ");
  scanf("%i", &segundos);

  calculoSegundos(horas, minutos, segundos);

  return 0;
}