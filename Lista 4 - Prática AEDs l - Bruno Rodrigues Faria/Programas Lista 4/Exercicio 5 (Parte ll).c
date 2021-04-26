#include <stdio.h>
#include <math.h>

int main(void) {
  //VARIAVEIS DO PROGRAMA
  int auxiliar = 0;
  //VARIAVEIS DO INPUT
  int n = 0;
  //VARIAVEIS DE CALCULO
  double iaoquadrado = 0.0;
  double calc1 = 0.0;
  double calc2 = 0.0;
  double calc3 = 0.0;
  double calc4 = 0.0;

  printf("Digite um número: ");
  scanf("%i", &n);

  //CALCULO N AO QUADRADO
  for (int i = 0; i <= n; i++) {
    iaoquadrado = pow(i,2);
    auxiliar = auxiliar + iaoquadrado;
  } //END FOR PARA CALCULAR A SOMA DOS QUADRADOS ATÉ CHEGAR NO QUADRADO DE N

  //CALCULO
  calc1 = (n + 1);
  calc2 = (2 * n + 1);
  calc3 = (n * calc1 * calc2);
  calc4 = (calc3 / 6.0);

  if (auxiliar == calc4) {
    printf("A igualdade é verdadeira.");
  } //END IF CASO A IGUALDADE SEJA VERDADEIRA
  else {
    printf("A igualdade é falsa.");
  } //END ELSE CASO A IGUALDADE SEJA FALSA

  return 0;
}